#include <iostream>
using namespace std;

int main()
{
	int age;

	cout << "Enter an age" << endl;
	cin >> age;
	if (age >= 21){
	    cout << "Legal to drink" << endl;
	    cout << "Please drink responsibly." << endl;		

	}
	else {
	    cout << "Too young to drink" << endl;
	    cout << "Please leave the bar." << endl;		
	}

	return 0;
}
