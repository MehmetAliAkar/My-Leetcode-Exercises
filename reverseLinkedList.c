 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){

    struct ListNode *temp = head;
    struct ListNode *temp2 = NULL;
    struct ListNode *prev = NULL;
    while(temp != NULL)
    {
            temp2 = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = temp2;
    }
    head = prev;
    return head;
}