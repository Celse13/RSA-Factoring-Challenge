#include "factors.h"
/**
 *  * _factorize_num - factorize the number
 *   * @read_content: content read from the file
 *    * Return: 0 on success
 *    **/
int _factorize_num(char *read_content)
{
	u_int32_t n, value;

	value = atoi(read_content);
	n = 2;
	while (n <= value / 2)
	{
		if (value % n == 0)
		{
			printf("%d=%d*%d\n", value, value / n, n);
			break;
		}
		n++;

	}
	return (0);
}
