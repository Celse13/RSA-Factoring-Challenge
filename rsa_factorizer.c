#include "rsa.h"
/**
 *  * greatest_divisor - computing for greatest common factor
 *   * @a: number 1
 *    * @b: number 2
 *     * Return: greatest commond divisor
 *     **/

rsa_num greatest_divisor(rsa_num a, rsa_num b)
{
	if (b == 0)
		return (a);
	return (greatest_divisor(b, a % b));
}

/**
 * * rsa_factorizer - factorize rsa number
 * * @num: rsa number
 * * Return: the prime factor for rsa number
 * **/

rsa_num rsa_factorizer(rsa_num num)
{
	rsa_num num_1 = 2, num_2 = 2, divisor_f = 1;
	rsa_num c = rand() % (num - 1) + 1;

	while (divisor_f == 1)
	{
		num_1 = (num_1 * num_1 + c) % num;
		num_2 = (num_2 * num_2 + c) % num;
		num_2 = (num_2 * num_2 + c) % num;
		divisor_f = greatest_divisor(llabs(num_1 - num_2), num);
	}

	return (divisor_f);
}
