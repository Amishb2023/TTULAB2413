/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
     struct ListNode *previous = NULL;
    struct ListNode* current = head;
    while (head)
    {
        current = head;
        head = head->next;
        current->next = previous;
        previous = current;
    }
    return previous;
}
