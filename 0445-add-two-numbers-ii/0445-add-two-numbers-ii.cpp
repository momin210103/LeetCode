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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* r1 = reverse(l1);
        ListNode* r2 = reverse(l2);
        ListNode* result = new ListNode();
        ListNode* ptr = result;
        int carry = 0;
        while(r1!=nullptr || r2!=nullptr || carry!=0){
            int sum = carry;
            if(r1!=nullptr){
                sum+=r1->val;
                r1=r1->next;
            }
            if(r2!=nullptr){
                sum+=r2->val;
                r2=r2->next;
            }
            carry = sum / 10;
            sum = sum %10;
            ptr->next = new ListNode(sum);
            ptr = ptr->next;
        }
        return reverse(result->next);
        
    }
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr!=nullptr){
            ListNode* nxttmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxttmp;
        }
        return prev;


    }
};