class Solution {
public: //�ʼ�뵽�ñ����취�������ʱ�������뵽����˫ָ��취��
    vector<int> twoSum(vector<int>& nums, int target) {
        int point = nums.size();
        vector<int> nums_2(2, 0);
        for (int i = 0; i < nums.size(); i++)//��Ȼ��������ô����϶���nums�����б�target�������λ��֮ǰ��
        {
            if (nums[i] >= target)
            {
                point = i;
                break;
            }
        }
        int head = 0, tail = point - 1;//����ǰ��˫ָ�롣
        while (head < tail)
        {
            if (nums[head] + nums[tail] < target)//���ǰ���������targetСhead++��           
                head++;
            else if (nums[head] + nums[tail] > target)//���ǰ���������target��tail--��
                tail--;
            else
            {
                nums_2[0] = nums[head];
                nums_2[1] = nums[tail];
                break;
            }
        }
        return nums_2;
    }
};