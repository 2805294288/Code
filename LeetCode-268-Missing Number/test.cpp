//��һ�ַ�������0��n�����ּ�һ�飬��ȥ������������֣�ʣ�µľ����ٵġ�
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int Size = nums.size();
        int sum_1 = 0;
        for (int i = 0; i <= Size; i++) {
            sum_1 += i;
        }
        for (int i = 0; i < Size; i++) {
            sum_1 -= nums[i];
        }
        return sum_1;
    }
};