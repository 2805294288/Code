class Solution {
public:
    bool canPermutePalindrome(string s) {
        int max = s[0];
        int min = s[0];
        for (int i = 0; i < s.size(); i++) {//���ҵ����ĺ���С��ȷ��Ҫ�������鳤��
            if (s[i] > max)
                max = s[i];
            if (s[i] < min)
                min = s[i];
        }
        int size = max - min + 1;//Ҫ�������鳤��
        int* arr = new int[size]();//��������
        for (int i = 0; i < s.size(); i++) {//��������˼�룬����ϣ��
            arr[s[i] - min]++;
        }
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 != 0)//�Ҽ����ж��ٸ�
                count++;

            if (count > 1)//������������1����false
                return false;
        }
        return true;//���򷵻�true
        delete(arr);//��ֹ�ڴ�й©
    }
};