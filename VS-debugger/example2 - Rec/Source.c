#include <stdio.h>
/// <summary>
/// Check whether the number digits change
/// </summary>
/// <param name="num">The function gets an integer</param>
/// <returns>The function returns 1 if the number is an alternating number otherwise returns 0</returns>
int func1(int num)
{
	int ans = 0;
	int temp1 = num % 10;
	int temp2 = num / 10 % 10;
	if (temp1 == 0 || temp2 == 0)
		ans = 1;
	if (temp1 % 2 != 0 && temp2 % 2 == 0 || temp1 % 2 == 0 && temp2 % 2 != 0)
		ans = func1(num / 10);
	return ans;
}

void main() {
	printf("%d\n", func1(123456));
	printf("%d\n", func1(1122));
	printf("%d\n", func1(3245));
	printf("%d\n", func1(852));
}