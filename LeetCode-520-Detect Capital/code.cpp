class Solution {
public:
    bool detectCapitalUse(string word) {
        int size = word.length();
        int Big = 0;//��д�ַ�
        int Small = 0;//Сд�ַ�
        for (int i = 0; i < size; i++)//�ȱ����ַ����е��ַ�
        {
            if (islower(word[i]))//islower����Сд�ַ�����
            {
                Small++;
            }
            else if (isupper(word[i]))//isupper������д�ַ�����
            {
                Big++;
            }
        }
        if (Small == size || Big == size)//������Ǵ�д����Сд����true
        {
            return true;
        }
        else if (Big == 1 && isupper(word[0]))//�����дֻ��һ�����ǵ�һ������true
        {
            return true;
        }
        else
            return false;
    }
};