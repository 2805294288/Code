/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2) {
    ListNode* L1head = list1;
    ListNode* L1tail = list1;
    a = a - 1;
    //�ҵ�Ҫɾ����һ���ڵ��ǰһ��
    while (a--) {
        L1head = L1head->next;
    }
    ListNode* Rhead = L1head->next;
    b = b + 1;
    //�ҵ�ɾ�����Ǹ����ĺ�һ����
    while (b--) {
        L1tail = L1tail->next;
    }
    //�ͷŵ��м�Ľ��
    ListNode* next = Rhead->next;
    while (Rhead != L1tail && next != NULL) {
        free(Rhead);
        Rhead = next;
        next = next->next;
    }
    //��������кϲ���
    ListNode* L2tail = list2;
    while (L2tail->next) {
        L2tail = L2tail->next;
    }
    L1head->next = list2;
    L2tail->next = L1tail;

    return list1;
}






