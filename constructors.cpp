#include<bits/stdc++.h>
using namespace std;
class Human{
private:
	string name;
	int age;
public:
	Human() //default constructor or non paramertized
	{
		name="no name";
		age=0;
	}
	Human(string word,int val) //parametrized constructor
	{
		this->name=word;
		this->age=val;
	}
	Human(string word)
	{
		this->name=word;
		age=0;
	}
	Human(int val)
	{   name="no name";
		this->age=val;
	}
	void display()
	{
		cout<<name<<" "<<age<<endl;
	}
};
int main()
{
	Human Archana;
	Human A1("Archana");
	Human A2(18);
	Human A3("Archana",18);
	A1.display();
	A2.display();
	A3.display();
	Archana.display();
	
}