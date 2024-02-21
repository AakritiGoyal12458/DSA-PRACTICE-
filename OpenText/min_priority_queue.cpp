#include <iostream>
#include <queue> 

using namespace std;

//tip for min heap : negative the leement whenever u insrt and print also negative of it 
int main()
{
   int arr[5]={68,90,12,35,69};
   priority_queue<int> pq ;
   
   for(int i :arr)
   {
       pq.push(-i);
       cout<<i<<endl;
   }
   while(!pq.empty())
   {
       cout<<(-pq.top())<<endl;
       pq.pop();
   }
   
   return 0 ; 
}
