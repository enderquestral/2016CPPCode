#include <iostream>
using namespace std;
int main()
{
      float applePrice;
float orangePrice;
 
      cout << "Please enter apple price" << endl;
      cin >> applePrice;
      cout << "Please enter orange price" << endl;
      cin >> orangePrice;
 
      if (applePrice > orangePrice)
      {
            cout <<"Apples Cost More" << endl;
      }
      else if (orangePrice > applePrice)
      {
            cout <<"Oranges Cost More" << endl;
      }
      else 
      {
            cout <<"Apples and Oranges Cost the Same" << endl;
      }
      return 0;
}
