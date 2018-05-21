//1.	Write the statements that allow you to input a series of numbers and print whether it is odd or even. Entering 0 causes the program to quit.
int num;
int amountOfEven;
int amountOfOdd;
amountOfEven = 0;
amountOfOdd=0;
infile >> num;
while (infile)
{
   if (num % 2 == 0) {
        	amountOfEven = amountOfEven + 1;
	infile >> num;
	}
   Else if ( num = 0) {
	Infile >> num;
	}
  Else{
amountOfOdd = amountOfOdd + 1;
	infile >> num;

}
}

//2.	Write the statements to input numeric exam scores from a file and output the appropriate letter grade.
{
     int testScore;
	cout << "Enter test score out of 100" << endl;
	cin >> testScore;
infile >> testScore;
while (infile)
{
 	if (testScore >= 100){
 	      cout << "INVALID" << endl;
infile >> testScore;
 	}
	else if (testScore >= 90){
		cout << "Your grade is A" << endl;
	infile >> testScore;
	}
	else if (testScore >= 80){
		cout << "Your grade is B" << endl;
infile >> testScore;
	}
	else if (testScore >= 70){
		cout << "Your grade is C" << endl;
infile >> testScore;
	}
	else if (testScore >= 60){
		cout << "Your grade is D" << endl;
	infile >> testScore;
	}
	else if (testScore <= 0){
		cout << "INVALID" << endl;
infile >> testScore;
	}
	else {
		cout << "Your grade is F" << endl;
infile >> testScore;
		}
}
	return 0;
}

//3.	Write a loop that will continuously input and print the names of contest participants, until QUIT is entered in place of the name.
String  contestParticipantName;
      cout << endl << "Enter the name of a contest participant.  Enter ‘QUIT’ to exit." << endl;  
      cin >> contestParticipantName;   
      while (contestParticipantName != “QUIT” || contestParticipantName != “quit” || contestParticipantName != “Quit”)    
      {
            cout <<  contestParticipantName << endl; 
      cout << endl << "Enter the name of a contest participant.  Enter ‘QUIT’ to exit." << endl;  
      cin >> contestParticipantName;   
      }


//Implement (4-8) using a while loop and a for loop:
//4. Write code to print Towson University 10 times.
done = FALSE;
while (!done)
{
For (int i =0; i < 10; i++){
	cout << “Towson University” << endl;
}
    	done = TRUE;

}

//5. Write code to print the numbers from 1 to 10.
int numb = 0;
done = FALSE;
while (!done)
{
For (int i =0; i < 10; i++){
numb = numb + 1;
	cout << numb<< endl;
}
    	done = TRUE;

}

//6. Write code to print the numbers from 10 to 1.
int numb = 10;
done = false;
while (!done)
{
For (int i =0; i >0; i--){
cout << numb<< endl;
numb = numb -1;
}
    	done = TRUE;

}

//7. Write code to print the following numbers:
//2 4 6 8 10 12

Int numb = 0;
while (numb < 10)
{
numb = numb + 2;
cout << numb<< endl;
 
}

//8. Write code that prints your name 5 times.
for (int i =0; i< 5; i++)
{
cout << “Hannah Hellerstein”<< endl;
}


//9. Write code that will input a number and print the number, the square of the number, and the cube of the number. Continue the operation until 999 is entered.
int num;
      int numSquared;
      int numCubed;
      cout << endl << "Enter a number for me to square and cube.  Enter 999 to exit." << endl;  
      cin >> num;   
      while (num != 999)    
      {
	numSquared = num *num
	numCubed = numSquared * num
            cout << "Number entered is: " << num << endl; 
            cout << "Number squared is:  " <<numSquared << endl; 
            cout << "Number cubed is:  " <<numCubed << endl; 
          cout << " Enter a number for me to square and cube.  Enter 999 to exit." << endl;
          cin >> num;   
      }
//10. .Write code that will request the length and width of a rectangle until 0 is entered for either the length or the width. Print the area and perimeter for each set of inputs.
int length, width;
int perimeter;
float area; 
cout << endl << "Enter the length and the width of a rectangle.  Enter 0 in either space to exit." << endl;  
      cin >> length >> width;   
      while (length != 999 && width != 0)    
      {
	Perimeter  = width + length + width + length;
	Area = length * width;
	numCubed = numSquared * num
            cout << "The perimeter of the rectangle would be  " << perimeter << endl; 
            cout << "The area of the rectangle would be  " << area << endl; 
          cout << endl << "Enter the length and the width of a rectangle.  Enter 0 in either space to exit." << endl;  
      cin >> length >> width;   
	  }
//11. Write code that reads in integers and then counts and prints out the number of positive integers and negative integers. If a value is zero, it should not be counted. The process should continue until end-of-file occurs.
int num;
int amountOfPosi;
int amountOfNegi;
amountOfEven = 0;
amountOfOdd=0;
infile >> num;
while (infile)
{
   if (num > 0) {
        	amountOfPosi = amountOfPosi + 1;
	infile >> num;
	}
   else if ( num = 0) {
	Infile >> num;
	}
  else{
amountOfNegi = amountOfNegi+ 1;
	infile >> num;

}
}
cout <<  “The amount of positive numbers in this file is ”<< amountOfPosi << endl;
cout <<  “The amount of negative numbers in this file is ”<< amountOfNegi << endl;

//12. What is the output for the following loop?
int number;
number = 1;
while (number < 11)
{
	number = number + 1;
	cout << number << endl;
}
 
 //The output is: 2 3 4 5 6 7 8 9 10 11

//13. What is the output for the following loop?
int number;
bool done;
number = 2;
done = FALSE;
while (!done)
{
	number = number * 2;
	if (number > 12)
    	done = TRUE;
	cout << number << endl;
}

 //The output is: 16. That is the output because in this code it would ONLY print of the number was larger than 12, and only if !done equaled true. 

 //14. What is the output of the following if the file contains: 2 3 4 5 6 7
int sum, num;
sum = 0;
infile >> num;
while (infile)
{
   if (num % 2 == 0)
        	sum = sum + num;
	infile >> num;
}
cout <<  sum << endl;

//The output would be 12, because this program checks for and only adds even numbers to the sum. 

//15. Write a program that prints out the sequence of all the hour and minute combinations in a day, starting with 1:00 and ending at 11:59.
int main()
{
      int hour;
      int min;
 
      for (hour = 1; hour <= 11; hour++)
      {
            for (min = 0; min <= 59; min++)
            {
                  if (min <= 9)
                  {
                        cout << hour << ":0" << min << "AM" << endl;
                  }
                  else
                  {
                        cout << hour << ":" << min << "AM" << endl;
                  }
            }
      }
      return 0;
}
 
//Write the complete code and perform 3 traces. Pick good test data.
//16. Design an algorithm that will prompt for, receive, and total a collection of payroll amounts entered from the user until a sentinel amount of 999 is entered. After the sentinel has been entered, display the total payroll amount to the screen.
#include <iostream>
using namespace std;
int main()
{
      int payrollAmount;
      int totalPayroll;
      totalPayroll = 0;
    cout << "Enter the amount of money earned this payroll.  Enter 999 to exit." << endl;  
    cin >> payrollAmount;   
       while (payrollAmount != 999 ) {
            totalPayroll = totalPayroll + payrollAmount; 
            cout <<  "Enter the amount of money earned this payroll.  Enter 999 to exit." << endl;  
            cin >> payrollAmount;
        }
    cout <<  "The total amount of money earned from the payrolls entered is: " << totalPayroll << endl;  

} 

//17. Design an algorithm that will read a series of integers from the user. The first integer is special, as it indicates how many integers will follow. Your algorithm is to calculate and print the sum and average of the integers, excluding the first integer and display these values to the screen.
 #include <iostream>
using namespace std;
int main()
{
    int specialNum;
    int otherInts;
    int average;
    int sum;
    sum =  0;
    cout << "Enter the first integer. This integer will set how many more integers you have to enter. This integer will not count." << endl;  
    cin >> specialNum;   
    cout << "Thank you." << endl;  
    
    for (int i = 0; i < specialNum; i++){
        cout << "Enter another integer." << endl;  
        cin >> otherInts;
        
        sum = sum + otherInts;
            }

    average = sum / specialNum;

    cout <<  "The sum of the numbers entered is: " << sum << endl;  
    cout <<  "The average of the numbers entered is: " << average << endl;  

}


//18. Design an algorithm that will prompt for and receive the measurement for the diameter of a circle and calculate and display the area and circumference of the circle. Your program is to continue processing until the sentinel of 9999 is entered.
 #include <iostream>
using namespace std;
int main()
{
      float circleDiameter;
      float circleArea;
      float circleCircumference;
      float circleRadius;
      float π;
      π = 3.14159;

    cout << "Enter the diameter of a circle, I will then find its area and circumference.  Enter 9999 to exit." << endl;  
    cin >> circleDiameter;   
       while (circleDiameter != 9999 ) {
            circleRadius = circleDiameter / 2;
            circleArea =  π * (circleRadius * circleRadius);
            circleCircumference = π * circleDiameter;
             cout << "The area of the circle is: " << circleArea << endl;  
            cout << "The circumference of the circle is: " << circlecircumference << endl;  
            cout << "Enter the diameter of a circle, I will then find its area and circumference.  Enter 9999 to exit." << endl;  
            cin >> circleDiameter;   
        }
}


