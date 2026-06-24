//73. Implement a class for Student (name, roll no, marks).

#include<iostream>
#include<string.h>
 using namespace std;
 
 class student{
 	private:
 		string name;
 		int roll_no;
 		int marks;
 	public:
 		void setdata(int roll_no,int marks,string name)
 		{
 			this->name=name;
 			this->roll_no = roll_no;
 			this->marks=marks;
		}
		
		void display()
		{
			cout<<"Name  : "<<name<<endl;
			cout<<"Roll No : "<<roll_no<<endl;
			cout<<"Marks : "<<marks<<endl;
		}
 };
 
int main()
{
	student s;
	
	s.setdata(1,90,"bharat");
	s.display();	
}
