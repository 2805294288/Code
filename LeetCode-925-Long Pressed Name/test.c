//�����ֱ�������������˫ָ��
//1.���ַ���ͬʱ���������ַ�ͬʱ�����ߡ�
//2.����ͬʱ����typed������ַ������ߣ�ֱ����name������ַ��ٴ�ƥ�䡣
bool isLongPressedName(char* name, char* typed) {
    int n = strlen(name);
    int t = strlen(typed);
    int i = 0, j = 0;

    while (j < t) {
        if (i < n && name[i] == typed[j]) {
            i++;
            j++;
        }
        else if (j > 0 && typed[j] == typed[j - 1]) {//��j�ߵ�����˳�ѭ����
            j++;
        }
        else
            return false;
    }
    if (i == n)//�ж�name������ַ��Ƿ񱻱����ꡣ
        return true;
    else
        return false;
}