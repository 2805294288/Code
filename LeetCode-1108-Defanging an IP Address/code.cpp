//���������뵽�����ַ����滻��
//���ҵ�.Ȼ������滻��
class Solution {
public:
    string defangIPaddr(string address) {
        for (int i = 0; i < address.length(); i++) {//�����ַ���
            if (address[i] == '.') {//�ҵ�.
                address.replace(i, 1, "[.]");//�ҵ�.�Ժ�����滻��"[.]";
                i = i + 2;
            }
        }
        return address;
    }
};