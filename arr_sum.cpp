
#include <iostream>
using namespace std;

int sum_array(int arr[],int size){
    int sum=0;
    for(int i =0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int a[]={2,3,4,5};
    int size;
    size=sizeof(a)/sizeof(int);
    cout<<sum_array(a,size);
    
    
}

