// #141
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        ListNode *temp = head;
        ListNode *temp2 = head;

        while(temp2->next && temp2->next->next){
            temp = temp->next;
            temp2 = temp2->next->next;
            if(temp == temp2) return true;
        }
        return false;
    }
};

// Apparently using the variable names "slow" and "fast" instead of "temp" and "temp2" make the code slightly faster :)
