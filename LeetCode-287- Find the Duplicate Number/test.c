//��һ��˼·���ȶ������������qsort������ǰ�������������ͬ���򷵻ء�

// int compare(const void*a,const void*b)
// {
//     return *(int*)a-*(int*)b;
// }
// int findDuplicate(int* nums, int numsSize){
//     qsort(nums,numsSize,sizeof(int),compare);
//     for(int i=0;i<numsSize-1;i++){
//         if(nums[i]==nums[i+1])
//         return nums[i];
//     }
//     return 0;
// }

//����ϣ������ ʱ�临�Ӷ�o(nlongn)-o��n^2) ���ȶ���
// void ShellSost(int *nums,int numsSize)
// {
//     int end=0;
//     int gap=numsSize;
//     int number=0;
//     while(gap>1){
//         gap=gap/3+1;
//         for(int i=0;i<numsSize-gap;i++){
//             end=i;
//             number=nums[end+gap];
//             while(end>=0){
//                 if(number<nums[end]){
//                     nums[end+gap]=nums[end];
//                     end -= gap;
//                 }
//                 else
//                 break;
//             }
//             nums[end+gap]=number;
//         }
//     }
// }
// int findDuplicate(int* nums, int numsSize){
//     ShellSost(nums,numsSize);
//     for(int i=0;i<numsSize-1;i++){
//         if(nums[i]==nums[i+1])
//         return nums[i];
//     }
//     return 0;
// }

//���ü������������˼·������ϣ��
//ʱ�临�Ӷ�o��2n�����ռ临�Ӷ�o��numsSize����
int findDuplicate(int* nums, int numsSize) {
    int* a = (int*)malloc(sizeof(int) * numsSize);
    memset(a, 0, sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++) {
        a[nums[i]] = a[nums[i]] + 1;
    }
    int j = 0;
    for (j = 0; j < numsSize; j++) {
        if (a[j] >= 2) {
            break;
        }
    }
    return j;
    free(a);
}



















