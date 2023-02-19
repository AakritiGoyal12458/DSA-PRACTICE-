#include <iostream>
using namespace std;
//sum of nth term in an AP is a(n-1)+d
int AP(int n ){
    int count=0;
    for(int i = 1;i<=n;i++){
        count+=3*n+7;
    }
    return count;
}
int main()
{
    
    
    int num ; 
    cout<<"Enter value of num";
    cin>>num;
    cout<<"sum of n Terms of AP IS: "<<AP(num);
    return 0;
}
