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
        unordered_set<ListNode*>seen;
        ListNode* node = head;
        while(node){
            if(seen.find(node)!=seen.end()){
                return true;
            }
            seen.insert(node);
            node=node->next;
        }
        return false;
        
    }
};