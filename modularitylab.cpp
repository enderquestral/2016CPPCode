 //1.	Write a function called DisplayTowson with no arguments that displays:
 
//*****************
//Towson University
//*****************
//Show a sample call.

int main()
{
    DisplayTowson();
}

void DisplayTowson()
{
    cout << "*****************" << endl;
    cout << "Towson University" << endl;
    cout << "*****************" << endl;

}


//2.	Write a function called DisplayCollegeName that has college name as the argument. Show a sample call that will display Towson University.

#include <iostream>
#include <string>
using namespace std;
void displayCollegeName(string collegeName);

int main()
{
    string name;
    cout << "Please enter the name of a college." << endl;
    getline (cin,name);           
    displayCollegeName(name);
}

void displayCollegeName(string collegeName)
{
    cout << "*****************" << endl;
    cout << collegeName << endl;
    cout << "*****************" << endl;

}


//3.	Write a function called DisplayArea that displays the area of a room when the width and length are passed as arguments. Are width and length passed by value or reference?

#include <iostream>
using namespace std;
int displayArea(int width, int length);

int main()
{
    int width;
    int length;
    width = 4;
    length = 10;    

      displayArea(width, length);
}


int displayArea(int width, int length)
{
    int area;
   
    area = width * length;
    cout << "The area is " << area << endl;

}


//4.	Write a function called CalculateArea that calculates the area of a room when the width and length and area are passed as arguments. Are width and length and area passed by value or reference? Show a sample call.
#include <iostream>
using namespace std;
int calculateArea(int width, int length, int area);

int main()
{
      int width;
      int length;
      int area;

      cout << "Enter the width and the length for an area" << endl;
      cin >> width >> length;
      
      calculateArea(width, length, area);
}


int calculateArea(int width, int length, int area)
{
    area = width * length;
    cout << "The area is " << area << endl;

}


//5.	Write a function called Area that calculates the area of a room and returns area when the width and length are passed as arguments. Show a sample call.


#include <iostream>
using namespace std;
int  area(int width, int length);

int main()
{
      int width;
      int length;
     
      cout << "Enter the width and the length for an area" << endl;
      cin >> width >> length;
      
      area(width, length);
}


int  area(int width, int length)
{
    int area;
   
    area = width * length;
    cout << "The area is " << area << endl;

}

//6.	Write a function called CalculatePerimeter that calculates the perimeter when the width and length and perimeter are passed as arguments. Are width and length and perimeter passed by value or reference? Show a sample call.

#include <iostream>
using namespace std;
int calculateperimeter(int width, int length, int perimeter);

int main()
{
      int width;
      int length;
      int perimeter;

      cout << "Enter the width and the length for a perimeter" << endl;
      cin >> width >> length;
      
      calculateperimeter(width, length, perimeter);
}


int calculateperimeter(int width, int length, int perimeter)
{
    perimeter = (width*2) + (length*2);
    cout << "The perimeter is " << perimeter << endl;

}

//7.	Write a function called Perimeter that calculates the perimeter of a room and returns perimeter when the width and length are passed as arguments. Show a sample call.

#include <iostream>
using namespace std;
int  perimeter(int width, int length);

int main()
{
     int width;
     int length;
     int peri;
     
      cout << "Enter the width and the length for an perimeter" << endl;
      cin >> width >> length;
    peri = perimeter(width, length);
    cout << "The perimeter is "<< peri << endl;

}


int  perimeter(int width, int length)
{
   int perimeter;
   perimeter = (width * 2) + (length * 2);
   return (perimeter); 

}



//8.	Write a function called GetDimensions with two arguments width and length that prompts for and receives width and length.

#include <iostream>
using namespace std;
int  getDimensions(int& width, int& length);

int main()
{
     int width;
     int length;
     
    getDimensions(width, length);
    cout << "The width is " << width << " and the length is " << length << endl;

}


int  getDimensions(int& width, int& length)
{
   cout << "Enter the width and the length" << endl;
      cin >> width >> length; 

}


//9.	Write a function called PrintDimensions with two arguments width and length that displays width and length.

#include <iostream>
using namespace std;
int  printDimensions(int width, int length);

int main()
{
    int width;
    int length; 
    printDimensions(width, length);
}


int  printDimensions(int width, int length)
{
   cout << "Enter the width and the length" << endl;
      cin >> width >> length; 
    cout << "The width is " << width << " and the length is " << length << endl;
}


//10.	Write a function called CalculateSalesTax with arguments purchaseAmt and salesTaxrate and salesTax that calculates sales tax.

#include <iostream>
using namespace std;
int  calculateSalesTax(int purchaseAmt, int salesTaxrate, int& salesTax);

int main()
{
    int purchaseAmt;
    int salesTaxrate;
    int salesTax;
    
      cout << "Enter the total purchase amount." << endl;
      cin >> purchaseAmt;
      cout << "Enter the sales tax rate." << endl;
      cin >> salesTaxrate;
salesTaxrate =  salesTaxrate * 0.01;
      
    salesTax = calculateSalesTax(purchaseAmt, salesTaxrate, salesTax);
    cout << "The total sales tax is: "<< salesTax << endl;
}


int  calculateSalesTax(int purchaseAmt, int salesTaxrate, int& salesTax)
{
   salesTax = purchaseAmt * salesTaxrate;
} 






//////////




 
//1. Design an algorithm that will input sales volume records (until -1) from the user and print  the sales commission owing to each salesperson. Input includes salesperson number, name and that person's volume of sales for the month. The commission rate varies according to the sales volume:
//On sales volume of :        Commission rate (%):
//$0.00-$200.00                  5
//$200.01-$1000.00            8
//$1000.01-$2000.00        10
//$2000.01 and above        12
 
//Commission = commission rate * volume
//Your program is to print the salesperson's number, name, volume of sales and calculated commission.
  

#include <iostream>
#include <string>
using namespace std;
int calcCommissionRate(float salesVolume, float& commissionRate);
int calcCommission(float commissionRate, float salesVolume, float& totalCommission);


int main()
{

            float commissionRate;
            float temp;
            float volumeOfSales;
            float totalCommission;
            int salespersonNumber;
            string name;
            
            cout << "Please enter the name of a Salesperson." << endl;
            getline (cin,name); 
    
            cout << "Please enter the number of this Salesperson." << endl;
            cin >> salespersonNumber;
    
            cout << "Please enter the sales volume records, -1 will quit." << endl;
            cin >> temp;
            while (temp != -1)
            {
                        salesVolume = salesVolume + temp;
            }
            calcCommissionRate(salesVolume, commissionRate);
            calcCommission(commissionRate, salesVolume, totalCommission);
            
            cout << "Salesperson number: #" << salespersonNumber<< ". AKA: " << name << endl;
            cout << "Their volume of sales was: " << volumeOfSales << endl;
            cout << "The Calculated Commission we owe them is: " << totalCommission << endl;
            cout << "Thanks!" << endl;
            return 0;
}
 
int calcCommissionRate(float salesVolume, float& commissionRate);
{
    if (salesVolume =< 200.00)
    {
        commissionRate = 0.05;
    }
    else if (salesVolume =< 1000.00)
    {
        commissionRate = 0.08;
    }
    else if (salesVolume =< 2000.00)
    {
        commissionRate = 0.10;
    }
    else if (salesVolume > 2000.01)
    {
        commissionRate = 0.12;
    }
    else
    {
        cout << "ERROR MESSAGE" << endl;
        return 0;
    }
            
}


//2. Design an algorithm that will prompt for and receive your current check book balance, followed by a number of financial transactions. Each transaction consists of a transaction code and a transaction amount. The code can be a 'D' for deposit or 'C' for check. Your program is to add each deposit amount to the balance and subtract each check amount. After each transaction is processed, a new running balance is displayed, with a warning message if the balance becomes negative. When there are no more transactions a 'Q' is entered as the transaction code. Your algorithm is to then display the initial and final balance along with the number of checks and deposits that were made.


#include <iostream>
#include <string>
using namespace std;
void messingWithBalance( char transactionType, float balanceChange, float& checkBookBalance,  int& checkNum, int& deposNum);


int main()
{

            float checkBookBalance;
            float transactionNumber;
            float temp;
            float runningBalance;
            float balanceChange;
            int checkNum;
            int deposNum;
            char transactionType; 
            checkNum = 0;
            deposNum = 0;

            cout << "Please enter the inital balance" << endl;
            cin >> checkBookBalance;
            
            runningBalance = checkBookBalance;
            
            cout << "Please enter the transaction type. C is for Check, and checks take away from total. D is for deposit, and deposits add to total. Enter Q to quit." << endl;
            cin >> transactionType;
            
            
            
            while (transactionType == 'C' || transactionType =='D')
            {
                    if (transactionType == 'C')
                    {
                        cout << "Please enter the amount you're taking out." << endl;
                        cin >> balanceChange;
                        messingWithBalance(transactionType, balanceChange, checkBookBalance, checkNum, deposNum);                        
                        cout << "Please enter the transaction type. C is for Check, and checks take away from total. D is for deposit, and deposits add to total. Enter Q to quit." << endl;
                        cin >> transactionType;
                    }
                    else if (transactionType == 'D')
                    {
                        cout << "Please enter the amount you're putting in." << endl;
                        cin >> balanceChange;
                        messingWithBalance(transactionType, balanceChange, checkBookBalance, checkNum, deposNum);                        
                        cout << "Please enter the transaction type. C is for Check, and checks take away from total. D is for deposit, and deposits add to total. Enter Q to quit." << endl;
                        cin >> transactionType;
                    }
                    else if (transactionType = 'Q')
                    {
                        cout << "Thank you." << endl;
                    }
                    else
                    {
                        cout << "ERROR MESSAGE." << endl;
                        cout << "Please enter the transaction type. C is for Check, and checks take away from total. D is for deposit, and deposits add to total. Enter Q to quit." << endl;
                        cin >> transactionType;
                    }
            }
            
            //When there are no more transactions a 'Q' is entered as the transaction code. Your algorithm is to then display the initial and final balance along with the number of checks and deposits that were made.
            cout << "Initial Balance was: "<< runningBalance << endl;
            cout << "Final Balance was: "<< checkBookBalance << endl;
            cout << "Number of checks made was: "<< checkNum << endl;
            cout << "Number of deposits made was: "<< deposNum << endl;

            
}
 


void messingWithBalance( char transactionType, float balanceChange, float& checkBookBalance, int& checkNum, int& deposNum)
{
    
        if (transactionType == 'C')
        {
            checkBookBalance = checkBookBalance - balanceChange;
            checkNum = checkNum + 1;
            if (checkBookBalance < 0)
                {
                    cout << "WARNING! Current balance is at a negative!" << endl;
                }
        }
        else if (transactionType == 'D')
        {
            checkBookBalance = checkBookBalance + balanceChange;             
            deposNum = deposNum + 1;
            if (checkBookBalance < 0)
                {
                    cout << "WARNING! Current balance is at a negative!" << endl;
                }

        }
        else
        {
            cout << "ERROR" << endl;
        }
}            


