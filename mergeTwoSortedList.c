/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode *start, *temp;
    struct ListNode *newNode;
    start = NULL;
    temp = NULL;

    while (list1  != NULL && list2 != NULL)
    {
        newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        if (list1 -> val <= list2 -> val)
        {
           newNode -> val = list1 -> val;
           list1 = list1 -> next;
        }
        else
        {
            newNode -> val = list2 -> val;
            list2 = list2 -> next;
        }
        newNode -> next = NULL;

        if (start == NULL)
        {
            start = newNode;
        }
        else
        {
            temp = start;
            while (temp -> next != NULL)
                temp = temp -> next;
            temp -> next = newNode;
        }
    }

    if (list1 != NULL)
    {
       if (start == NULL)
        {
            start = list1;
        }
        else
        {
            temp = start;
            while (temp -> next != NULL)
                temp = temp -> next;
            temp -> next = list1;
        }
    }

    if (list2 != NULL)
    {
        if (start == NULL)
        {
            start = list2;
        }
        else
        {
            temp = start;
            while (temp -> next != NULL)
                temp = temp -> next;
            temp -> next = list2;
        }
    }
    return (start);
}