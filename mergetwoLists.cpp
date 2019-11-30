#include <iostream>

using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

//头插法建立单链表
ListNode *Creat_LinkList()
{
    int x;
    ListNode *head,*p;
    head = (ListNode*)malloc(sizeof(ListNode));
    if(head == NULL)
        return head;
    head -> next = NULL;
    cout<<"input numbers end of 0:"<<endl;
    cin >> x;
    while(x != 0)
    {
        p = (ListNode*) malloc(sizeof(ListNode));
        if(p == NULL)
            return head;
        p -> val = x;
        p -> next = head -> next;
        head -> next = p;
        cin >> x;
     }
     return head;
}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr){
            return l2;
        }
        if(l2 == nullptr){
            return l1;
        }
        
        if(l1->val > l2->val){
            ListNode *tmp = l1;
            l1 = l2;
            l2 = tmp;
        }
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
};

int main(){
    ListNode *list1;
    list1 = Creat_LinkList();
    ListNode *list2;
    list2 = Creat_LinkList();
    Solution A;
    ListNode *result_list;
    result_list = A.mergeTwoLists(list1->next,list2->next);
    ListNode *p = result_list;
    while(p != NULL){
        cout << p->val << endl;
        p = p->next;
    }

    system("Pause");
    return 0;

}