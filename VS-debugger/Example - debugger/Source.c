#define _CRT_SECURE_NO_WARNINGS
#define SIZE 9
#include <stdio.h>
#include <stdlib.h>
/// name function:
///				 singleNum
/// Parameters:
///				 nums - Array of numbers in the range 0-100. 
///				 size - Array size nums.
///				 sizeRes - The size of the result set. 
/// returns:
///				A new array of numbers that appear exactly once in the nums array. 
/// </summary>


int* singleNum(int nums[],int size,int* sizeRes);

void main() 
{
	int nums[] = { 4,8,1,2,1,2,5 ,7,4 };
	int size;
	int* res = singleNum(nums, SIZE,&size);
	printf("[");
	for (int i = 0; i < size-1; i++)
	{
		printf("%d, ",res[i]);
	}
	printf("%d]\n",res[size-1]);
}

int* singleNum(int nums[], int size, int* sizeRes) {

	int counts[101] = { 0 };
	int i = 0;
	for (; i < size; i++)
		counts[nums[i]]++;

	int countNums = 0;
	for (i = 0; i < 101; i++)
		if (counts[i] == 1)
			countNums++;
	*sizeRes = countNums;
	int* res = (int*)malloc(sizeof(int) * countNums);
	if (!res) { printf("bad alloction\n"); return NULL; }
	///int j = 0;
	for (i = 0; i < 101; i++)
		if (counts[i] == 1)
			res[/*j*/i++] = i;
	return res;
}