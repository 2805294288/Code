//�������������ϰ�Լ�������
//����ѡ���������
// void Swap(int *a,int *b)
// {
//     int tmp=*a;
//     *a=*b;
//     *b=tmp;
// }
// int Compare(int* nums,int head,int tail)
// {
//     int mid=(head+tail)/2;
//     if(nums[head]>nums[mid]){
//         if(nums[mid]>nums[tail])
//         return mid;
//         else
//         return tail;
//     }
//     else{
//         if(nums[head]>nums[tail])
//         return head;
//         else
//         return tail;
//     }
// }
// int PartSort(int *nums,int head,int tail)
// {
//     int midnumber=Compare(nums,head,tail);
//     Swap(&nums[midnumber],&nums[tail]);
//     int key=tail;
//     while(head<tail){
//         while(head<tail&&nums[head]>=nums[key])
//         head++;
//         while(head<tail&&nums[tail]<=nums[key])
//         tail--;
//         Swap(&nums[head],&nums[tail]);
//     }
//     Swap(&nums[head],&nums[key]);

//     return head;
// }
// void QuickSort(int* nums,int head,int tail)
// {
//     if(head>=tail)
//     return;
//     int div=PartSort(nums,head,tail);
//     QuickSort(nums,head,div-1);
//     QuickSort(nums,div+1,tail);
// }
int compare(const void* a, const void* b)
{
    return *(int*)b - *(int*)a;
}
int maximumProduct(int* nums, int numsSize) {
    int MaxNumber = 0;
    if (numsSize < 3)
        return NULL;
    //�Լ�д�Ŀ���
    //QuickSort(nums, 0, numsSize-1);
    //���ÿ⺯��
    qsort(nums, numsSize, sizeof(int), compare);
    //�������ۣ������������ͬ�����
    if (nums[numsSize - 1] > 0)
        MaxNumber = nums[0] * nums[1] * nums[2];
    else if (nums[0] < 0)
        MaxNumber = nums[0] * nums[1] * nums[2];
    else {
        MaxNumber = nums[0] * nums[1] * nums[2] > nums[0] * nums[numsSize - 1] * nums[numsSize - 2] ? nums[0] * nums[1] * nums[2] : nums[0] * nums[numsSize - 1] * nums[numsSize - 2];
    }
    return MaxNumber;
}