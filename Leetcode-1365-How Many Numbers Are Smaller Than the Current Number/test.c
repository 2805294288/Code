/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //�������뵽�ľ��Ǳ�����ÿ�����б����ұ���С�ģ��ŵ����������档
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* array = (int*)malloc(sizeof(int) * numsSize);
    int count = 0, k = 0;
    for (int i = 0; i < numsSize; i++) {
        count = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] > nums[j]) {
                count++;
            }
        }
        array[k++] = count;
    }
    return array;
}   