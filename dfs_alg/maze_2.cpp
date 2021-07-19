#include<iostream>
using namespace std;

const int nextstep[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

void dfs(int x,int y,int step,int *mini,int *p, int *q,int m, int n, int **occupied)
{
    
    int dx,dy;
    if (x==*p&&y==*q)
    {
        if (step<*mini)
            *mini=step;
        return;
    }
    if (step > *mini)
        return;
    for (int k=0;k<3;k++)
    {
        dx = x + nextstep[k][0];
        dy = y + nextstep[k][1];
 
        if (dx<1||dx>m||dy<1||dy>n)
            continue;

        if (occupied[dx][dy]==0)
        {
            occupied[dx][dy]=1;
            dfs(dx,dy,step+1,mini,p,q,m,n,occupied);
            occupied[dx][dy]=0;
        }
    }
    return;
}

int main()
{
    int mini = 100;
    int p = 3;
    int q = 3;
    const int m = 6;
    const int n = 6;
    int **occupied = new int*[m+1];
    for (int i=0;i<m+1;i++)
    {
        occupied[i] = new int[n+1];
    }
    int arr[m+1][n+1];
    dfs(1,1,0,&mini,&p,&q,m,n,occupied);
    cout << mini << endl;
}