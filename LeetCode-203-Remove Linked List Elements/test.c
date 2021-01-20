/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//�����ڱ��ڵ����һ��ͷ������ȵġ�
struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL)
        return NULL;
    struct ListNode* NewNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    NewNode->val = 0;
    NewNode->next = NULL;

    struct ListNode* cur = head;
    struct ListNode* Node = NewNode;
    while (cur) {
        if (cur->val != val) {
            Node->next = cur;
            Node = Node->next;
            cur = cur->next;
        }
        else {
            cur = cur->next;
        }
    }
    Node->next = NULL;
    return NewNode->next;
}