/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int count = 0;  //进位
    struct ListNode *head, *tmp;
    
    head = malloc(sizeof(struct ListNode));
    head->val = 0;
    head->next = NULL;
    tmp = head;
        
    while(l1 != NULL || l2 != NULL || count != 0)
    {
        if(l1 != NULL)
        {
            tmp->val += l1->val;
            l1 = l1->next;
        }
        
        if(l2 != NULL)
        {
            tmp->val += l2->val;
            l2 = l2->next;
        }
        
        tmp->val += count;
        count = tmp->val / 10;
        tmp->val %= 10;
        
        if(l1 || l2 || count)
        {
            tmp->next = malloc(sizeof(struct ListNode));
            tmp = tmp->next;
            tmp->val = 0;
            tmp->next = NULL;
        }
    }
    return head;
}