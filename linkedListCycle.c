bool hasCycle(struct ListNode *head) {
    if (head == NULL)
        return false;
    struct ListNode * iter1 = head;//we are using that as a slow node
    struct ListNode * iter2 = head;//we are using that as a fast node
    while (iter2 != NULL && iter2->next != NULL) {
        iter1 = iter1->next;
        iter2 = iter2->next->next;
        if (iter1 == iter2)
            return true;
    }
    return false;
}