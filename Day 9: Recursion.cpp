Linkhttps://www.hackerrank.com/challenges/30-recursion/problem
#include <bits/stdc++.h>

using namespace std;
int i,p=1;
int factorial(int n) {
    // Complete this function
    for(i=n;i>1;i--){
        p=p*i;
    }return p;
    
    
}

int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}
