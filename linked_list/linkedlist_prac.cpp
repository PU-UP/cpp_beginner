#include <iostream>
using namespace std;

struct member{
            string name;
            int id;
        };

class linkedlist
{
    private:
        
        typedef struct node{
            member data;
            node *next;
        }* nodePtr;

        nodePtr head,temp,curr;
    public:
        linkedlist();
        void add(member addval);
        void del(int delID);
        void disp();
};

linkedlist::linkedlist()
{
    head = NULL;
    temp = NULL;
    curr = NULL;
}

void linkedlist::add(member addval)
{
    nodePtr n = new node;
    n->data = addval;
    n->next = NULL;
    if (head!=NULL)
    {
        curr = head;
        while(curr->next!=NULL)
        {
            curr = curr->next;
        }
        curr->next = n;
    }
    else{
        head = n;
    }
}

void linkedlist::del(int delID)
{
    nodePtr delNode = NULL;
    curr = head;
    temp = head;
    while (curr!=NULL&&curr->data.id!=delID)
    {
        temp = curr;
        curr = curr->next;
    }
    if (curr==NULL)
    {
        cout << "not found"<< endl;
    }
    else{
        delNode = curr;
        temp->next = curr->next;
    }
    delete delNode;
}

void linkedlist::disp()
{
    curr = head;
    while(curr!=NULL)
    {
        cout << curr->data.name << " " << curr->data.id << endl;
        curr = curr->next;
    }
}

int main()
{
    linkedlist A;
    member data[3] = {{"zhangsan",100},{"lisi",200},{"wangwu",300}};
    
    for (int i=0; i<sizeof(data)/sizeof(member); i++)
    {
    
        A.add(data[i]);
    }
    A.disp();
    A.del(1);
    A.del(300);
    A.disp();
    
}

