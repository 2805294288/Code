char* compressString(char* S) {
    int Long = strlen(S);//����ԭ�ַ����ĳ���
    if (Long <= 2)//���С�ڵ���2���򲻻ᱻѹ��
        return S;
    int i = 0;
    char* a = (char*)malloc(sizeof(char) * 2 * Long);//����Ҫ���صĿռ�
    int j = 0;
    a[j] = S[i];//����һ��������õ�����
    int number = 1;
    //�������������
    while (S[i] != '\0') {
        number = 0;
        while (S[i] != '\0' && a[j] == S[i])
        {
            i++;
            number++;
        }
        int number_1 = number;
        int count = 0;
        while (number > 0) {
            number = number / 10;
            count++;
        }
        int count2 = j + count;
        int count3 = count2;
        while (count > 0) {
            a[count2--] = number_1 % 10 + '0';
            number_1 /= 10;
            count--;
        }
        j = count3;
        a[++j] = S[i];
    }
    a[++j] = '\0';
    //�ж��Ƿ�ѹ����
    if (Long <= j - 1)
        return S;
    else
        return a;
}