/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* cur = head;
        ListNode* prev = NULL;

        while(cur != NULL)
        {
            bool duplicate = false;
            while( cur->next != NULL && cur->val == cur->next->val)
            {
                duplicate = true;
                cur = cur->next;
            }
            if(duplicate)
            {
                cur = cur->next;
                if(prev!=NULL)
                {
                    prev->next = cur;
                }
                else
                {
                    head = cur;
                }
            }
            else
            {
                prev = cur;
                cur = cur->next;
            }

        }
        return head;


        
    }
};