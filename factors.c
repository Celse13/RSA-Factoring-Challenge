#include "factors.h"
/**
 *  * main - this progrom is going to factorize
 *   * big number into a product of two smaller numbers.
 *    * @argc: number of arguments
 *     * @argv: pointer to the arguments
 *      * Return: on 0 on the success
 *      **/

int main(int argc, char **argv)
{
	char *_file_content;
	FILE *read_file;
	ssize_t _read_size = 1;
	size_t _buffer_s = 0;



	if (argc != 2)
	{
		fprintf(stderr, "USAGE: factors file\n");
		exit(0);
	}

	read_file = fopen(argv[1], "r");

	if (!read_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(0);
	}
	while ((_read_size = getline(&_file_content, &_buffer_s, read_file)) != -1)
	{
		_factorize_num(_file_content);

	}
	free(_file_content);
	return (0);

}
