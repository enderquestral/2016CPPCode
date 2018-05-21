#include <iostream>
#include <string>
using namespace std;
int main ()
{
	//declarations
string name;
string lastName;
int age;
float bodyTemp;
float weight;
char sex;
int heightInches;
int heightFeet;

	//input
cout <<"Enter your first name" << endl;
	cin >> name;
	
cout <<"Enter your last name" << endl;
	cin >> lastName;
	
cout << "Enter your age" << endl;
	cin >> age;
	
cout << "Enter your height, first feet then inches." << endl;
	cin >> heightFeet;
	cin >> heightInches;

cout << "Enter your weight in pounds" << endl;
	cin >> weight;
	
cout << "What is your body temperature?" << endl;
	cin >> bodyTemp;
	
cout << "What is your biological sex? M or F?" << endl;
	cin >> sex;
	
	
	//output
	cout << "Hello " << name << " " << lastName << "! " << endl;
	
	cout << "Your biological sex is " << sex << "! " << endl;

	cout << "You're " << age << " years old! " << endl;

	cout << "You weigh " << weight << " pounds! " << endl;

	cout << "You're " << heightFeet << " feet and " << heightInches<< " inches tall! " << endl;

	cout << "You have a current temperature of " << bodyTemp << " degrees! " << endl;

	return 0;
}
