#include <iostream>
using namespace std;
const int m = 10;
const int n = 10;
int count = 0;
int p=4;
int q=4;
int nextstep[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
int mini = 1000;
int occupied[m][n];

void dfs(int x,int y,int step)
{
    int tx,ty,k;
    if(x==p&&y==q)
    {
        if(step<mini)
            mini=step;
        return;
    }
    if (step>mini)
        return;

    for(k=0;k<3;k++)
    {
        tx = x + nextstep[k][0];
        ty = y + nextstep[k][1];
        if (tx < 1 || tx > m || ty <1 ||ty > n)
        {
            continue;
        }
        if(occupied[tx][ty]==0)
        {
            occupied[tx][ty]=1;
            dfs(tx,ty,step+1);
            occupied[tx][ty]=0;
        } 
    }
    return;
}

int main()
{
    occupied[0][0]=1;
    dfs(1,1,0);
    cout << mini << endl;
}