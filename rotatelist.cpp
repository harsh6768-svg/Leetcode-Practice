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
    vector<int> letschange(vector<int> & aksh,int k)
    {
          int n=aksh.size();
        vector<int> changedvector(n);
      
        for(int i=0;i<aksh.size();i++)
        {
            changedvector[i]=aksh[i];
        }
        for(int i=0;i<aksh.size();i++)
        {
            aksh[(i+k)%n]=changedvector[i];
        }
        return aksh;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        // just go with the base case ......
        int len=0;
        if(head ==NULL || k<=0)
            return head;
        vector<int>aksh;
        ListNode harsh(0),*p=&harsh;
        while(head !=NULL)
        {
            aksh.push_back(head->val);
            head=head->next;
           
        }
       
      
        letschange(aksh,k);
        
       for(int i=0;i<aksh.size();i++)
       {
           p->next=new ListNode(aksh[i]);
           p=p->next;
       }
        p->next=nullptr;
        return harsh.next;
        
    }
};