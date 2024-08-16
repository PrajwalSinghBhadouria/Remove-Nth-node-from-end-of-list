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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp  = head;
        int count =0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        int r = count - n + 1;
        temp = head;
        if(r==1){
            head = head->next;
        }
        else{
            int i=1;
            ListNode *pre = NULL;
            while(i<r){
                pre = temp;
                temp= temp->next;
                i++;
            }
            pre->next = temp->next;

            temp->next = NULL;
        }
        return head;
    }
};
