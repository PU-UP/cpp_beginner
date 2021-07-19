#include<iostream>
using namespace std;

int mm[5][6];
int xs = 1;
int ys = 2;
int count = 0;
int nn[10];

void init()
{
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<6;j++)
        {
            mm[i][j]=-10;
        }
    }
}

bool check(int x,int y)
{
    for (int i=x-1;i<=x+1;i++)
    {
        for(int j=y-1;j<=y+1;j++)
        {
            if(abs(mm[x][y]-mm[i][j])==1)
                return false;
        }
    }
    return true;
}

void dfs(int x,int y)
{
    if (x==3&&y==4)
    {
        count+=1;
        return;
    }

    for (int i=0;i<10;i++)
    {
        if (nn[i]==0)
        {
            mm[x][y]=i;
            if(!check(x,y))
            {
                mm[x][y]=-10;
                continue;
            }
            nn[i]=1;
            if (y<4)
            {
                dfs(x,y+1);
            }
            else if(y==4&&x<3)
            {
                dfs(x+1,1);
            }
            mm[x][y]=-10;
            nn[i]=0;
        }
    }
    return;

}

int main()
{
    init();
    dfs(1,2);
    cout << count << endl;

}