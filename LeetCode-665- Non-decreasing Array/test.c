
//�����Ǹ�������ʵ�м���������Ĳ��԰�����
//�����뵽�������nums[i]>nums[i+1]�ĸ�������һ�������Ǵ���ģ���������԰������¡�
//1.[3,4,2,3]  4>2����ֻ��һ�������ǽ����false�����ж�������nums[i]<nums[i-1]����֤�ǵ�����
//2.[-1,4,2,3]  4>2,2>1,�����˼·����false�����ǽ����true��
//3.[5,7,1,8] 

//���������ⰸ���ã����ж�������
//if(nums[i+1]<nums[i-1]){
            //     nums[i+1]=nums[i];
            // }
            // else{
            //     nums[i]=nums[i+1];
            // }  
//����ȷ�𰸡�
bool checkPossibility(int* nums, int numsSize) {
    int cout = 0;
    if (numsSize < 3) {
        return true;
    }
    for (int i = 1; i < numsSize - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            cout++;
            if (nums[i + 1] < nums[i - 1]) {
                nums[i + 1] = nums[i];
            }
            else {
                nums[i] = nums[i + 1];
            }
        }
        if (nums[i] < nums[i - 1]) {
            cout++;
        }
        if (cout > 1) {
            return false;
        }
    }
    return true;
}