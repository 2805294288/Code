class Solution {
public:
    bool isStraight(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // �ȶ� nums ��������
        int countZero = 0; // ���ڼ��� 0 �ĸ���

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                countZero++;
                continue;
            }

            int j = i + 1;

            if (j < nums.size()) {
                if (nums[j] == nums[i]) {
                    // �����������Ԫ����ȣ��Ͳ���˳��
                    return false;
                }

                int temp = nums[j] - nums[i];

                while (temp > 1) {
                    if (countZero == 0) {
                        // 0 ����������ˣ�false
                        return false;
                    }

                    countZero--; // �����������Ĳ���� 0 ���ֲ�
                    temp--; // ����С 1
                }
            }
        }

        return true;
    }
};
