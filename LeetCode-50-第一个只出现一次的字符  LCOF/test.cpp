class Solution {
public:
    char firstUniqChar(string s) {
        char c = 0;
        for (int i = 0; i < s.size(); i++) {
            c = s[i];
            //�ӵ�һ���ַ���ʼ�ֱ�������Һʹ�������Ѱ�ҵ�һ�γ��ֵ�λ�ã����λ����ͬ���򷵻ء�
            if (s.find(c) == s.rfind(c))
                return c;
        }
        return ' ';
    }
};