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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode *tmp = head;
        while(tmp != NULL && tmp->next != NULL){
            if(tmp->val == tmp->next->val){
                tmp->next = tmp->next->next;
            }
            else{
                tmp = tmp->next;
            }
        }
        return head;
    }
};

int main(){
    ListNode *list1;
    list1 = Creat_LinkList();
    Solution A;
    ListNode *result_list;
    result_list = A.deleteDuplicates(list1);
    ListNode *p = result_list;
    while(p != NULL){
        cout << p->val << endl;
        p = p->next;
    }

    system("Pause");
    return 0;

}