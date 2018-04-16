LInk https://www.hackerrank.com/challenges/30-review-loop/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,j,i,len;
    char str[100000];
    cin>>t;
    // cout<<t;
    for(i=0;i<t;i++){
        cin>>str;
        // cout<<str;
        len=strlen(str);
        for(j=0;j<len;j++){
            if(j%2==0){cout<<str[j];}
        }
        cout<<" ";
        for(j=0;j<len;j++){
            if(j%2!=0){cout<<str[j];}
        }
        cout<<"\n";
    }
    return 0;}
