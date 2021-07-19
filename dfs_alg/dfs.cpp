#include <iostream>
using namespace std;
int box[10],ticket[10],n;

void dfs_1(int step) // num of boxes = num of tickets
                     // Assign each ticket to each box,list all possibilities
{
    int i;
    if(step==n+1) // Decide whether it is over for one route
    {
        for(i=1;i<=n;i++)
        {
            cout<<box[i];
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++) // Try every possible for current node
    {
        if(ticket[i]==0)
        {
            box[step]=i;
            ticket[i]=1;
            dfs_1(step+1); // node + 1
            ticket[i]=0;
        }
    }
    return;
}
void dfs_2(int step)
{
    if (step==10)
    {
        if(box[1]*100+box[2]*10+box[3]+box[4]*100+box[5]*10+box[6]==box[7]*100+box[8]*10+box[9])
        {
            cout<<box[1]<<box[2]<<box[3]<<"+"<<box[4]<<box[5]<<box[6]<<"="<<box[7]<<box[8]<<box[9]<<endl;
        }
        return;
    }
    for(int i=1;i<10;i++)
    {
        if(ticket[i]==0)
        {
            box[step]=i;
            ticket[i]=1;
            dfs_2(step+1);
            ticket[i]=0;
        }
    }
    return;
}



int main()
{
    cout<<"PLease: ";
    // cin>>n;
    dfs_2(1);
    return 0;
}