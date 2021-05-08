#include<climits>
#include<iostream>
using namespace std;
template <typename T>
class stack{
	T *data;
	int next_index;
	int capacity;
	public:
		stack()
		{
			data=new T[4 ];
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
		
		void push(T value)
		{
			if(next_index==capacity-1)
			{
			T*newdata=new T[2*capacity];
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
		T pop()
		{
			int pop_value;
			if(next_index==-1)
			{
				cout<<"Nothing is in stack ";
				return 0;
			}
			else
			{
				 pop_value=data[next_index];
				next_index--;
			}
			return pop_value; 
		}
		
		// what element is on the top
		T top()
		{
			if(is_empty())
			{
			cout<<"Stack is empty "<<endl;
			return 0;
				
			}
			return data[next_index];
		}
};

int main()
{
	stack<char>s;
	s.push(100);
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104);
	s.push(105);
	 
	 cout<<s.size()<<endl;	
	 cout<<s.pop()<<endl;
	 cout<<s.pop()<<endl;
	 cout<<s.pop()<<endl;
	 cout<<s.pop()<<endl;
	 cout<<s.pop()<<endl;
	 cout<<s.pop()<<endl;
	
	
	 cout<<s.size()<<endl;
	 cout<<s.top()<<endl;
	 
	
}
