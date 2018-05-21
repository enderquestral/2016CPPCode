#include <iostream>
using namespace std;
int main()
{
      int num1;
      int num2;
      int sum;
      int  diff;
      int  prod;
      float quot;
      float modulus;
      
      cout << "Enter two integer values" << endl;
      cin >> num1 >> num2;

      sum = num1 + num2; 
cout << num1 << " + " << num2 << " is " << sum << endl;

      diff = num1 - num2; 
cout << num1 << " - " << num2 << " is " << diff << endl;

      prod = num1 * num2; 
cout << num1 << " * " << num2 << " is " << prod << endl;

	quot = (float) num1 / num2;   
	
	     if (num2 == 0)
            {
   		       cout << "You cannot divide by zero!" << endl;
            }
            else
                  {
                  cout << num1 << " / " << num2 << " is " << quot << endl;
                  } 

      modulus = num1 % num2;
      cout << num1 << " % " << num2 << " is " << modulus << endl;
      return 0;
}
