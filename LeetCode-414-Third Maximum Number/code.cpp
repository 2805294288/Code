class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //������С�ġ�
        int min = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        //������
        int Firstmax = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > Firstmax) {
                Firstmax = nums[i];
            }
        }
        //�ҵڶ����
        int Secendmax = min;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]<Firstmax && nums[i]>Secendmax) {
                Secendmax = nums[i];
            }
        }
        //�ҵ������
        int ThirdMax = min;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]<Secendmax && nums[i]>ThirdMax) {
                ThirdMax = nums[i];
            }
        }
        if (ThirdMax == Secendmax || ThirdMax == Firstmax || Firstmax == Secendmax)
            return Firstmax;
        else
            return ThirdMax;
    }
};