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
        ListNode* temp=head;
        int count=0;
        while(temp != NULL)
        {
            temp = temp -> next;
            count++;
        }

      if(count==n)
      {
          ListNode *node=head;
          head=head->next;
          delete node;
          return head;
      }
            
      int difference = count - n;
      int counter=1;
      temp=head;
      while(counter!=difference)
      {
          counter++;
          temp=temp->next;
      }
        
      ListNode *node=temp->next;
      temp->next=node->next;
      delete node;
        
      return head;
    }
};
