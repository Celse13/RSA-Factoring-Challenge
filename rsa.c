#include "rsa.h"
/**
 *  * main - calling rsa factorizer program
 *   * @argc: record number of argument passed to program
 *    * @argv: pointer each argument
 *     * Return: Always return 0 on success
 *     **/

int main(int argc, char **argv)
{
	FILE *read_file;
	rsa_num n;
	rsa_num fct_one, fct_two;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: factors file\n");
		exit(0);
	}

	read_file = fopen(argv[1], "r");

	if (read_file == NULL)
	{
		fprintf(stderr, "Error: Can't open read_file %s\n", argv[1]);
		exit(0);
	}

	fscanf(read_file, "%ld", &n);

	fclose(read_file);


	fct_one = rsa_factorizer(n);
	fct_two = n / fct_one;

	printf("%ld=%ld*%ld\n", n, fct_one, fct_two);

	return (0);
}
