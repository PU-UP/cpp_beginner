#include<iostream>
#include<cstdlib>
using namespace std;

class linkedlist
{
    private:
        struct node{
            int data;
            node *next;
        };
        node *head =new node;
        node *curr = new node;
        node *temp = new node;

        // typedef struct nodee{
        //     int d;
        //     nodee *n;
        // }* nodePtr;
        // // or like this: typedef struct nodee* nodePtr
        // nodePtr h; //Same as previous structure
    
    public:
        linkedlist();
        void listAdd(int addData);
        void listDel(int delData);
        void printList();
};



int main()
{
    linkedlist A;
    for (int i=0;i<5;i++)
    {
        A.listAdd(i);
    }
    A.printList();
    A.listDel(3);
    A.printList();
    
}

linkedlist::linkedlist()
{
    cout << "init" << endl;
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void linkedlist::listAdd(int addData)
{
    node *n = new node;
    n->next = NULL;
    n->data = addData;
    if (head!=NULL)
    {
        curr = head;
        while (curr->next!=NULL)
        {
            curr = curr->next;
        }
        curr->next=n;
    }
    else
    {
        head=n;
    }
}

void linkedlist::listDel(int delData)
{
    node* delNode = NULL;
    curr = head;
    temp = head;
    while(curr != NULL&&curr->data!=delData)
    {
        temp = curr;
        curr = curr->next;
    }
    if (curr->next==NULL)
    {
        cout << "not found"<<endl;
    }
    else{
        delNode = curr;
        temp->next = curr->next;
        delete delNode;
        cout << "deleted " << delData << endl; 
    }
}

void linkedlist::printList()
{
    curr = head;
    while (curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
}