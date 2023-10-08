#include <bits/stdc++.h>
using namespace std;

    bool sum(int n, vector<int>a, int s){
        if(n==0){
            if(s==0){
                return true;
            }   
            else{ return false;}
        }
        if(a[n-1] <= s){
            bool op1=sum(n-1, a, s-a[n-1]);
            bool op2=sum(n-1, a, s);
            return op1 || op2;
        }else{
            return sum(n-1, a, s);
        }
    }

int main()
{
        vector<int> v;
        int n = v.size();
        int s;

        
        return 0;
}