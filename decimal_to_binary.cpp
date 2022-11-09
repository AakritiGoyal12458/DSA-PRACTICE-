#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"enter a number";
    int n;
    cin>>n;
    int f = 0 ;
    int rem = 0;
    int i=0;
    while(n>0){
        rem  = n%2;
        f = ( rem * pow(10, i) ) + f;
        n = n / 2;
        i++;
    }
    cout<<f;
    return 0;
}
