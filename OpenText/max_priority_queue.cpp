#include <iostream>
#include <queue> 

using namespace std;

//priority queue by default give max heap 
//tip for min heap : negative the leement whenever u insrt and print also negative of it 
int main()
{
   priority_queue<int> pq ;
   pq.push(2);
   pq.push(4);
   pq.push(1);
   while(!pq.empty())
   {
       cout<<pq.top()<<endl;
       pq.pop();
   }
   
   return 0 ; 
   
}
