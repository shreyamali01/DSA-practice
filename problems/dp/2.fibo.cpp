#include <bits/stdc++.h>
using namespace std;

//using tabulation

int foo(int n){
    int prev1 = 0;
    int prev2 = 1;

    for(int i=2; i<n; i++){
        int curr = prev1 + prev2;
        prev1 = curr;
        prev2 = prev1;
    }

    return prev1;
}

int main(){
    int n = 6;
    int x = foo(n);
    cout << x;
}