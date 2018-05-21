//If an angle is equal to 90 degrees, print the message "The angle is a right angle" else print the message "the angle is not a right angle."
	if (angle = 90){
	    cout << "The angle is a right angle." << endl;
	}
	else {
	    cout << "The angle is not a right angle." << endl;
	}

//If the temperature is above 100 degrees (celsius), display the message "above the boiling point of water," else display the message "below the boiling point of water."
if (temp <  100){
	    cout << "Above the boiling point of water." << endl;
	}
	else {
	    cout << " Below the boiling point of water." << endl;
	}

//If the number is positive, add the number to a variable called posSum, otherwise add the number to negSum.
if (numb1 > 0){
	    posSum = numb1  + posSum; 
	}
	else {
	    negSum = numb1  + negSum;
	}

//If the slope is less than .5, set a variable named flag to zero, else set flag to one.
if (slope <  .5){
	    var flag = 0;
	}
	else {
	    flag = 1;
	}

//Write a program to input an integer number. The program should then output the number and a message saying whether the number is positive, negative, or zero.
cout << "Enter an interger number" << endl;
	cin >>num1;
if ( num1 >  0){
	    cout << "The number is positive." << endl;
	}
	else if (num1  < 0) {
    cout << "The number is negative." << endl;
	}
else {
	    cout << " The number is zero." << endl;
	}


//Write a program to input three numbers and print out the largest number.
cout << "Enter  three numbers" << endl;
	cin >>num1 >> num2 >>num3;
if ((num1  > num2) && (num1 > num3)){
	    cout << "The largest number is : " << num1 << endl;
	}
	else if ((num2  > num1) && (num2 > num3)){
	    cout << "The largest number is : " << num2 << endl;
	}
else {
	    cout << " The largest number is : << num3 << endl;
	}

//Write the statements to input a water temperature (in Fahrenheit) and print out the state of the water – freezing, boiling, liquid
 cout << "You have some water. Enter the temperature of the water in fahrenheit." << endl;
	cin >>waterTemp;
if ( waterTemp < = 32){
	    cout << "Your water is frozen. It is currently solid ice." << endl;
	}
	else if (waterTemp >=  212 ) {
    cout << "Your water is boiling. It is becoming vapor. " << endl;
	}
else {
	    cout << " Your water is in its basic liquid form." << endl;
	}

 

//1.	Design an algorithm that will receive two integers items and display to the screen their sum, difference, product, and quotient. Do not allow divide by zero to occur. [I…. did we not do this already in the Ops Lab as well as in the OpsHW? I may be confused here. I’ll copy-paste my answers from that onto this, though I’m not sure how this is relevant to the selection stuff.]
#include <iostream>
using namespace std;
int main1()
{
      int num1;
      int num2;
      int sum;
      int  diff;
      int  prod;
      float quot;
      
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
}


//2. Design an algorithm that will read two numbers and an integer code from the screen (print a menu of the choices first). If the code is 1, compute the sum of the two numbers. If the code is 2, compute the difference of the first number minus the second. If the code is 3, compute the product. If the code is 4 and the second number is not 0, compute the quotient (divide the first number by the second). If the code is not 1,2,3, or 4, display an error message. Finally, display the two numbers, the code, and the result (echo the input). 
#include <iostream>
using namespace std;
int main2()
{
            char opt;
            int num1;
            int num2;
            int solutionForThis;

            cout << "Enter two integer values" << endl;
            cin >> num1 >> num2;
            
            // print menu
            cout << "-----------------------------" << endl;
            cout << "1. Compute the sum of the numbers" << endl;
            cout << "2. Compute the difference of the numbers " << endl;
            cout << "3. Compute the product of the numbers " << endl;
            cout << "4. Compute the quotient " << endl;

            cin >> opt;

            switch(opt)
            {
                  case '1': {
                        solutionForThis = num1 + num2; 
                          cout << "You chose numbers: " << num1 << ", "<< num2 << endl;
                          cout << "You chose to add. Your first number added to your second results in " << solutionForThis << endl;
                        break;
                  }
                              
                  case '2': {
                        solutionForThis = num1 - num2;
                        cout << "You chose numbers: " << num1 << ", "<< num2 << endl;
                        cout << "You chose to subtract. Your first number minus your second results in " << solutionForThis << endl;
                        break;                        
                  }
                  
                  case '3': {
                        solutionForThis = num1 * num2;
                        cout << "You chose numbers: " << num1 << ", "<< num2 << endl;
                        cout << "You chose to multiply. Your first number multiplied by your second results in " << solutionForThis << endl;
                        break;                        
                  }                  

                  case '4': {
                        if (num2 == 0)
                        {
   		                   cout << "You cannot divide by zero!" << endl;
                           break;       

                        }
                        else
                        {
                          solutionForThis = num1 / num2; 
                          cout << "You chose numbers: " << num1 << ", "<< num2 << endl;
                          cout << "You chose to divide. Your first number divided by your second results in " << solutionForThis << endl;

                          break;       
                        }                           
                  }
                  default: {
                        cout << "ERROR MESSAGE" << endl;
                        break;                        
                  }
            }
                   return 0;
}

