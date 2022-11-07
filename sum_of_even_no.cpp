#include <iostream>
using namespace std;

int main() {
    cout<<"enter a number";
    int number,sum=0;
    cin>>number;
   
    
    for(int i = 1 ; i<number;i++){
        if(i%2==0){
        sum+=i;
        }  
    }
     cout<<sum;
    return 0;
}
