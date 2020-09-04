/*WAP to create a class for the dog (maybe a pet dog).

Define data members such as age, color, breed, and it’s pet name.
Define a function to print all the data members.
Declare two objects for the class Dog, initialize their attributes and then print all the data members by calling a function.*/

#include <iostream>
#include<string>
using namespace std;

class Dog{
public:
	int age;
	string colour;
	string breed;
	string petName;

	Dog(int,string,string,string);
	Dog();
	void display();

	~Dog();
};
Dog :: Dog(){
		cout<<"Dog object created\n"; //Default constructor
	}
Dog :: Dog(int age,string colour,string breed,string petName){      //parameterised constructor
	this->age=age;
	this->colour=colour;
	this->breed=breed;
	this->petName=petName;
}
Dog::~Dog(){
	cout<<"Object dog with name:"<<this->petName<<" being deleted."<<endl;
}

void Dog :: display(){
	cout<<"Age:"<<age<<endl;
	cout<<"Colour:"<<colour<<endl;
	cout<<"Breed:"<<breed<<endl;
	cout<<"Pet Name:"<<petName<<endl;
	cout<<"\n"<<endl;
}
int main() {
    Dog d1;
		d1.age=5;
		d1.colour="white";
		d1.breed="labradore";
		d1.petName="elsa";

	d1.display();

	Dog d2(8,"Black and white","German shefard","Rocky");  //parameterised constructor

	d2.display();

	Dog d3=d2;  //copy constructor
	d3.age=4;
	d3.display();

	return 0;
}

/*OUTPUT:
 * Dog object created
Age:5
Colour:white
Breed:labradore
Pet Name:elsa


Age:8
Colour:Black and white
Breed:German shefard
Pet Name:Rocky


Age:4
Colour:Black and white
Breed:German shefard
Pet Name:Rocky


Object dog with name:Rocky being deleted.
Object dog with name:Rocky being deleted.
Object dog with name:elsa being deleted.
 */
