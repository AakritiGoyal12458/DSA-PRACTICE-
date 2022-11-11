#include <iostream>
using namespace std;
int setbitCount(int a){
    int count=0;
    for(int i = 0 ;a!=0;i++){
    if(a&1==1){
        count++;
    }
    a=a>>1;
}
    return count;
}
int main()
{
    //setbit 1 
    int a,b;
    cout<<"enter 2 number";
    cin>>a;
    cin>>b;
    cout<<setbitCount(a)+setbitCount(b);
    return 0;
}
