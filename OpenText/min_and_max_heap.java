import java .util.* ;

//java by default give min heap 
public class Main
{
	public static void main(String[] args) {
	    PriorityQueue<Integer> pq= new PriorityQueue();
	//PriorityQueue<Integer> pq= new PriorityQueue(Collections.reverseOrder());//max heap

	    
	    pq.add(1);
	    pq.add(-8);
	    pq.add(7);
	    
	    while(!pq.isEmpty())
	    {
	        	System.out.println(pq.peek());
	        	pq.poll();
	    }
		System.out.println("Thank you");
	}
}
