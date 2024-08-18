/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	*returnSize = 2;
	int *result = (int *)malloc(2 * sizeof(int));
	if (result == NULL)
	{
		*returnSize = 0;
		return NULL;
	}
	int i = 0;
	while (i < numsSize - 1)
	{
		int j = i + 1;
		while (j < numsSize)
		{
			if (nums[i] + nums[j] == target)
			{
				result[0] = i;
				result[1] = j;
				return result;
			}
			j++;
		}
		i++;
	}
	*returnSize = 0;
	free(result);
	return NULL;
}
