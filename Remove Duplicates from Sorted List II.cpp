class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // lets first try with the brute force ......
        unordered_map<int,int>harsh;
        vector<int>aksh;
        ListNode val(0),*p=&val;
        while(head !=NULL)
        {
            aksh.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<aksh.size();i++)
        {
            harsh[aksh[i]]++;
        }
        vector<int>koun;
        for(auto it=harsh.begin();it !=harsh.end();it++)
        {
            if(it->second==1)
            {
                koun.push_back(it->first);
            }
        }
        sort(koun.begin(),koun.end());
        for(int i=0;i<koun.size();i++)
        {
            p->next=new ListNode(koun[i]);
            p=p->next;
        }
        return val.next;
        
    }
};