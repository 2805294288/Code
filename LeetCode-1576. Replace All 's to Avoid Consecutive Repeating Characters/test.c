
//C���Եı����ⷨ���ȴ�ͷ��ʼ�ҡ����������ҵ���������ʱ���Сд��ĸa��ʼ�����Һ���ǰ����ͬ���滻����
char* modifyString(char* s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '?') {
            char ch = 'a';
            while ((i > 0 && s[i - 1] == ch) || (s[i] != '\0' && s[i + 1] == ch))
                ch++;

            s[i] = ch;
        }
    }
    return s;
}