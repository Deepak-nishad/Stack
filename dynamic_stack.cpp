#include<climits>
#include<iostream>
using namespace std;
class stack{
	int *data;
	int next_index;
	int capacity;
	public:
		stack()
		{
			data=new int[4 ];
			next_index=-1;
			capacity=4;
		}
		
		// lets create function how many element present in array
		int size()
		{
			return next_index;
		}
		
		//lets create finction our stack is empty or not 
		
		int is_empty()
		{
			if(next_index==-1)
			return true ;
			else
			return false;
			
			//return next_index==-1;
		}
		
		// push value in stack 
		
		void push(int value)
		{
			if(next_index==capacity-1)
			{
			int *newdata=new int[2*capacity];
			for(int i=0;i<capacity;i++)
			{
				newdata[i]=data[i];
			}	
				capacity *=2;
			delete []data;
			data=newdata;
			}
			next_index++;
			data[next_index]=value;	
		}
		// delete the element from stack
		int pop()
		{
			int pop_value;
			if(next_index==-1)
			{
				cout<<"Nothing is in stack ";
				return INT_MIN;
			}
			else
			{
				 pop_value=data[next_index];
				next_index--;
			}
			return pop_value; 
		}
		
		// what element is on the top
		int top()
		{
			return data[next_index];
		}
};

int main()
{
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(40);
	s.push(50);
	 
	 int pop_value=s.pop();
	 cout<<pop_value<<endl;
	  pop_value=s.pop();
	 cout<<pop_value<<endl;
	  pop_value=s.pop();
	 cout<<pop_value<<endl;
	  pop_value=s.pop();
	 cout<<pop_value<<endl;
	  pop_value=s.pop();
	 cout<<pop_value<<endl;
	  pop_value=s.pop();
	 cout<<pop_value<<endl;
	 
	 cout<<s.size()<<endl;
	 s.push(50);
	 s.push(100);
	 s.push(100);
	 s.push(100);
	 s.push(100);
	 s.push(1000);
	 cout<<s.top()<<endl;
	 
	
}
