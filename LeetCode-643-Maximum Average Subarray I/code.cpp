//���们���������ⷨ��
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int maxsum = 0;
        int size = nums.size();
        for (int i = 0; i < k; i++)//�Ƚ�ǰk����������
        {
            sum += nums[i];
        }
        maxsum = sum;
        if (k == size)//���k��size��ͬʱ����ֱ�ӷ���ƽ��ֵ��
        {
            return (double)maxsum / k;
        }
        for (int i = k; i < size; i++)
        {
            sum = sum + nums[i] - nums[i - k];//�ӵ�k��λ�ÿ�ʼ���̶�k���ȵĴ��ڣ��ӵ�i������ȥ��i-k����
            maxsum = max(maxsum, sum);
        }
        return (double)maxsum / k;
    }
};