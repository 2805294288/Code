//�ܼ򵥵Ľ��ַ���j��ΪĿ�꣬���ַ���j�е�ÿ���ַ���s�е��ַ����б���ƥ�䡣
int numJewelsInStones(char* jewels, char* stones) {
    int k = 0;
    int count = 0;
    int Long = strlen(stones);
    while (jewels[k]) {
        for (int i = 0; i < Long; i++) {
            if (jewels[k] == stones[i]) {
                count++;
            }
        }
        k++;
    }
    return count;
}