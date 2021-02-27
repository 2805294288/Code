// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string str="\0";//����һ���µ��ַ���
//         for(int i=0;i<s.length();i++){//���ַ���s���б���
//             if(isalnum(s[i])){//isalnum�ж��ǲ�����ĸ���������ַ�
//                 str += tolower(s[i]);//����д��ĸת��ΪСд����������򲻶�
//             }
//         }
//         string str_rev(str.rbegin(),str.rend());//�����ַ������з�ת
//         if(str==str_rev)//�����ת�Ժ���ַ�����ԭ�ַ�������򷵻�true
//         return true;
//         else
//         return false;
//     }
// };

//���õ�˫ָ��������
class Solution {
public:
    bool isPalindrome(string s) {
        string str = "\0";
        int n = s.length();
        int begin = 0;
        int end = n - 1;
        while (begin < end) {
            while (begin < end && (!isalnum(s[begin]))) {
                begin++;//��ǰ�����ҷ����������ַ�
            }
            while (begin < end && (!isalnum(s[end]))) {
                end--;//�Ӻ���ǰ�ҷ����������ַ�
            }
            if (tolower(s[begin]) != tolower(s[end]))
                return false;

            begin++;
            end--;
        }
        return true;
    }
};
