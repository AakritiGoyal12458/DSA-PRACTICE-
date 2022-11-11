#include <iostream>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i<n;i++){
        int ans= n%i;
        if( ans==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cin>>num;
    cout<<isPrime(num);
    return 0;
}
