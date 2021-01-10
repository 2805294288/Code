int maxArea(int* height, int heightSize) {
    //��C���Ա����ⷨ�ᳬʱ�����˫ָ���Ժ�ͺܿ�ֻ��Ҫ������һ�Ρ�
    int capacity = 0;
    int maxcapacity = 0;
    int head = 0, tail = heightSize - 1;
    while (head != tail) {
        if (height[head] < height[tail]) {
            capacity = height[head] * (tail - head);
            head++;
        }
        else {
            capacity = height[tail] * (tail - head);
            tail--;
        }
        if (capacity > maxcapacity) {
            maxcapacity = capacity;
        }
    }
    return maxcapacity;
}