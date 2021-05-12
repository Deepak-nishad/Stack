#include<iostream>
using namespace std;
#include<stack>
int main()
{
	stack <int> s;
	s.push(10);
	s.push(200);
	s.push(30);
	s.push(400);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.size()<<endl;
	cout<<s.empty();
	
//	cout<<s.top()<<endl;
//	cout<<s.top()<<endl;
}
