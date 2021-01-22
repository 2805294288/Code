/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //�����ܺõĿ����˶�����ĸ��ֻ���������
typedef struct ListNode ListNode;
void reorderList(struct ListNode* head) {
    if (head == NULL)
        return NULL;
    ListNode* slow = head;
    ListNode* fast = head;
    //�ÿ���ָ���ҵ��м��㡣
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    //���м������һ����Ϊ�½ڵ��ͷ    
    ListNode* Node = slow->next;
    ListNode* prev = NULL;
    ListNode* Next = Node;
    slow->next = NULL;//�м���ض������һ�����������������м����Ժ��м���->next��NULL��
//���м������һ����������ת
    while (Node) {
        Next = Node->next;
        Node->next = prev;
        prev = Node;
        Node = Next;
    }
    Node = prev;
    //����ת�������ڵ���뵽ԭ���Ľ�㵱�С�    
    ListNode* MoveNode = head;
    ListNode* NNext = Node;
    ListNode* Mnext = head;
    while (Node) {
        Mnext = MoveNode->next;
        NNext = Node->next;
        MoveNode->next = Node;
        Node->next = Mnext;
        MoveNode = Mnext;
        Node = NNext;
    }
}