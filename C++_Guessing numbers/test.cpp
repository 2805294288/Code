#include<iostream>
#include<ctime>//����������õ�ͷ�ļ�
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));//����һ�����������������
	int number = rand() % 100 + 1;//���������������1��100֮�䡣
	int val = 0;
	int count = 5;
	while (1) {
		cout << "�㻹��" << count << "�λ���" << endl;
		cout << "��������²�����֣�" << endl;
		cin >> val;
		if (number > val) {
			cout << "��С��" << endl;
		}
		else if (number < val) {
			cout << "�´���" << endl;
		}
		else {
			cout << "��ϲ�㣡�¶��ˣ�"<<endl;
			break;
		}
		count--;
		if (count < 1) {
			cout << "��Ǹ����Ļ����Ѿ����꣡" << endl;
			break;
		}
	}
}