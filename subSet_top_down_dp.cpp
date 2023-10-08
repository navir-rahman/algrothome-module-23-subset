#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

    bool sum(int n, int a[], int s){
        if(n==0){
            if(s==0){
                return true;
            }   
            else{ return false;}
        }

        if(dp[n][s]!= -1){
            return dp[n][s];
        }

        if(a[n-1] <= s){
            bool op1=sum(n-1, a, s-a[n-1]);
            bool op2=sum(n-1, a, s);
            return dp[n][s]= op1 || op2;
        }else{
            return dp[n][s]=sum(n-1, a, s);
        }
    }

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    int s;
    cin>>s;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=s; j++)
        {
            dp[i][j]=-1;
        }
        
    }
    
    cout<<sum(n,a,s);
    return 0;
}