# sorting

## stack

```
```
- evaluate postfix
- next greatest element 
    + // next gratest element for An elemet//  4 9 3 1// for 4--> 9
- Largest Rectangle in Histogram
    - next greates element and next smallest element in the     stack
    - /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
        struct ListNode *fast=head;
    int c=0;
    while( fast->next !=NULL){
        fast = fast->next;
        c++;
        // slow = slow->next;
        // fast = fast->next->next;
    }
    fast = head;
    for(int i=0;i<c/2;i++){
        fast = fast->next;
    }
    printf("%d",fast->val);
    return fast->val; 
}
