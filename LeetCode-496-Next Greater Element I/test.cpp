class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //������������nums2���ҵ�nums1��Ԫ�ش��ڵ�λ�á�
        //Ȼ������λ�ÿ�ʼ��������Ҵ�ġ�
        vector<int> a(nums1.size(), -1);//���벢��ʼ����
        int number = 0;
        int state = 0;
        for (int i = 0; i < nums1.size(); i++) {
            number = nums1[i];
            state = 0;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums2[j] == number) {
                    for (int k = j + 1; k < nums2.size(); k++) {
                        if (nums2[k] > number) {
                            a[i] = nums2[k];
                            state = 1;
                            break;
                        }
                    }
                    if (state == 1) {
                        break;
                    }
                }
            }
        }
        return a;
    }
};