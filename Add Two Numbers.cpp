class Solution 
{
 public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
          ListNode *t1=l1;
          ListNode *t2=l2;
          int carry=0;
          ListNode *ans=NULL,*temp=NULL;
          while(carry || t1 || t2)
          {
              int sum=0;
              if(t1)
              {
                  sum=sum+t1->val;
                  t1=t1->next;
              }
              if(t2)
              {
                  sum=sum+t2->val;
                  t2=t2->next;
              }
              sum=sum+carry;
              if(ans==NULL)
              {
                  ans=new ListNode(sum%10);
                  temp=ans;
              }
              else
              {
                  temp->next=new ListNode(sum%10);
                  temp=temp->next;
              }
              carry=sum/10;
          }
        return ans;
    }
};
