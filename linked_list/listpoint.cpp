#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

typedef struct data
{
    int number;
    string name;
    string sex;
};

typedef struct listpoint
{
    data *info;
    listpoint *n;
    listpoint *l;
};

listpoint *create_norm_list(int n)
{
    listpoint *head,*normal,*end;

    head = (listpoint*)malloc(sizeof(listpoint));
    head->info=(data*)malloc(sizeof(data));
    end = head;
    for (int i=0;i<n;i++)
    {
        normal = (listpoint*)malloc(sizeof(listpoint));
        normal->info = (data*)malloc(sizeof(data));

        cout << "input number: ";
        cin>>normal->info->number;
        cout << "input name: ";
        cin>>normal->info->name;
        cout << "input sex: ";
        cin>>normal->info->sex;
        cout << "----- " << i+1 << " -----"<<endl;
        end->n = normal;
        normal->l = end;
        end = normal;
    }
    end->n=NULL;
    head->l=NULL;
    return head;

}