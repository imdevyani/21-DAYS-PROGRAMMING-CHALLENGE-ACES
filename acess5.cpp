/*Destructor in class
Destructor is amember function of the class that is executed whenever its object of its class goes
of out of scope or whenever delete expression is applied to your pointers to the objects of the class*/
#include <iostream>
#include <string>
using namespace std;
class Intro
{
public:
	Intro()
	{
		cout<<"Constructor"<<endl;
	}
	~Intro()
	{
		cout<<"Destructor";
	}
};
int main()
{
	Intro *devyani;
	devyani= new Intro();
	delete devyani;
	return 0;
}