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
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL)
        {
            return;

        }
            
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* cur = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        while(cur!= NULL)
        {
            ListNode* next = cur->next;
            cur ->next = prev;
            prev = cur;
            cur = next;
        }

        ListNode* first = head;
        ListNode* second = prev;
        while( second != NULL)
        {
            ListNode* nextFirst = first->next;
            ListNode* nextSecond = second->next;

            first->next = second;
            second->next = nextFirst;

            first = nextFirst;
            second= nextSecond;
        }


    return;
        
    }
};