/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 //�Ƚ�ԭ����ƽ���Ժ�ŵ����������棬�ٶ�����������������򷽷�����ѡ��
 //  int compare(const void*a,const void*b)
 // {
 //     return *(int*)a-*(int*)b;
 // }
 //int* sortedSquares(int* nums, int numsSize, int* returnSize){
     // int *a=(int *)malloc(sizeof(int)*numsSize);
     // for(int i=0;i<numsSize;i++){
     //     a[i]=pow(nums[i],2);
     // }
     // qsort(a,numsSize,sizeof(int),compare);
     // * returnSize=numsSize;
     // return a;
 //}
 //��Ȼ�������������˫ָ��Ĺ鲢���������������һ�顣
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int end = numsSize - 1;
    int front = 0;
    int k = numsSize - 1;
    int* a = (int*)malloc(sizeof(int) * numsSize);
    //��ͷָ���βָ������ʱԭ���������ϣ�������������Ӻ���ǰ�Žϴ����һ����
    while (front <= end) {
        if (pow(nums[front], 2) > pow(nums[end], 2)) {
            a[k--] = pow(nums[front], 2);
            front++;
        }
        else {
            a[k--] = pow(nums[end], 2);
            end--;
        }
    }
    *returnSize = numsSize;
    return a;
}












