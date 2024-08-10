#include <bits/stdc++.h>
using namespace std;

//using memoization
int foo(int n, vector <int>  &dp){

    if (n==0){
        return 0;
    }

    if (n==1){
        return 1;
    }

    if (dp[n]!=-1){
        return dp[n];
    }

    return dp[n]=(foo(n-1,dp)+foo(n-2,dp));
}

int main(){
    int n = 5;
    vector <int> dp(n+1,-1);
    for (int i=0; i<n; i++){
        cout << dp[i];
    }
    cout << endl;
    int x = foo(5,dp);
    cout << x;
}