

//��Ȼֻ��һ���Ǿ������İ취���Ƚ�s���������꣬�ں�t��������
char findTheDifference(char* s, char* t) {
    int Long_1 = strlen(s);
    int Long_2 = strlen(t);
    int m = 0;
    for (int i = 0; i < Long_1; i++) {
        m = m ^ s[i];
    }
    for (int i = 0; i < Long_2; i++) {
        m = m ^ t[i];
    }
    return m;
}