#include "factors.h"
/**
 *  * _factorize_num - factorize the number
 *   * @read_content: content read from the file
 *    * Return: 0 on success
 *    **/
int _factorize_num(u_int32_t read_content)
{
	u_int32_t n;

	n = 2;
	while (n <= read_content / 2)
	{
		if (read_content % n == 0)
		{
			printf("%d=%d*%d\n", read_content, read_content / n, n);
			break;
		}
		n++;

	}
	return (0);
}
