#include <stdio.h>

int main()
{
	long long int num = 239809320265259;
	long int num1 = 2;
	long int num2;

	while (num % num1)
	{
		if (num1 <= num)
		{
			num1 = num1 + 1;
		}
		else
		{
			return (-1);
		}
	}
	num2 = num / num1;
	printf("%lld = %ld * %ld", num, num1, num2);
	return (0);
}
