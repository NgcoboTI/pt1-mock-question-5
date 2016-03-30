///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 
#include <iostream>

using namespace std;
class Animal{
public :
virtual void name(){
		cout << "Animal" << endl;
	}
virtual void does(){
		cout << "Nothing" << endl;
	}
};

class Bird : public Animal{
public:
	void name(){
		cout << "Bird" << endl;
	}
	void does(){
		cout << "Fly" << endl;
	}
};

class Dog : public Animal{
public:
	void name(){
		cout << "Dog" << endl;
	}
	void does(){
		cout << "Bark" << endl;
	}
};


int main(){
	Animal *ptr;

	ptr = &Animal();

	ptr->name();
	ptr->does();

	ptr = &Bird();
	ptr->name();
	ptr->does();

	ptr = &Dog();
	ptr->name();
	ptr->does();

      

}