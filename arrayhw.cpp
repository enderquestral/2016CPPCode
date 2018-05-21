//1.	Declare an integer array named stuff with 20 elements
//2.	Initialize each element of the array stuff to to value 100.
//3.	Ask the user to enter each value of the array stuff (prompt and input)
//4.                 Print all elements of the stuff array
//5.	Print all elements of the array stuff in reverse order
//6.                 Sum all elements of the array stuff
//7.                 Determine the average of all elements in the array stuff
//8.                 Find the largest element in the array stuff
//9.                 Subtract 1 from every element of the stuff array.
//10.             Divide all even-numbered elements in the stuff array (stuff[2],stuff[4],..stuff[20]) by 5,  i.e. stuff[2] = stuff[2]/5;...




#include <iostream>
using namespace std;

int main() 
{
int largestNum;
int sum = 0; 
float avg;
int maxValue = 20;    
int stuff[maxValue]; // 1.

for (int i = 0; i < maxValue; i++)
      {
//            stuff[i] = 100;    2. [Assuming this is what was meant by 'initialize each element to value 100']
            cout << "Enter each value of the array: "; //3.
            cin >> stuff[i];
      }
      
for (int i = 0; i < maxValue; i++) //4.
      {
            cout << stuff[i] << endl;
      }      

cout<<endl; 

for (int i = (maxValue - 1); i >= 0; i--) //5.
      {
            cout << stuff[i] << endl;
      }  
      
cout<<endl; 

for (int i = 0; i < maxValue; i++) //6.
      {
        sum = sum + stuff[i];
      }
cout << sum << endl;

cout<<endl; //7.
avg = (float)sum/maxValue;
cout << avg << endl;


for (int i = 0; i < maxValue; i++) //8.
      {
        if (stuff[i] > largestNum){
            largestNum = stuff[i];
        }
      }
cout << largestNum << endl;

cout<<endl;  
for (int i = 0; i < maxValue; i++) //9.
      {
          stuff[i] = stuff[i] - 1;
      }
for (int i = 0; i < maxValue; i++)
      {
            cout << stuff[i] << endl;
      }      

cout<<endl;  
for (int i = 0; i < maxValue; i++) //10.
      {
        if (i % 2 == 0){
            stuff[i] = stuff[i]/5;
        }
      }
for (int i = 0; i < maxValue; i++)
      {
            cout << stuff[i] << endl;
      }  

}

//15.             Print out the tic tac toe board
#include <iostream>
using namespace std;

int main() 
{

char table[3][4]; //12.

for (int col = 0; col < 3; col++) { //13.
				table[3][col] = '?';
	}
for (int col = 0; col < 3; col++) {
		cout << table[3][col] << " ";
	}

	cout << endl;
	cout << endl;

    
char ttttable[3][3]; //14.

for (int row = 0; row < 3; row++) //15.
{
	for (int col = 0; col < 3; col++) {
				ttttable[row][col] = '?';
	}
}
for (int row = 0; row < 3; row++)
{
	for (int col = 0; col < 3; col++) {
		cout << ttttable[row][col] << " ";
	}
	cout << endl;
}

} 


//16.             Write complete code for a program  that will input (prompt the user) an array of exactly 200 characters and display to the screen a count of the occurrences of each of the vowels (a, e, i, o, u) in the array.

#include <iostream>
using namespace std;

int main() 
{
int maxValue = 200;  //Make it be 200 by the end
int numOfA = 0;
int numOfE = 0;
int numOfI = 0;
int numOfO = 0;
int numOfU = 0;
int numOfTotalVowels = 0;
char stuff[maxValue]; 

for (int i = 0; i < maxValue; i++)
      {
            cout << "Enter Characters: "; //3.
            cin >> stuff[i];
      }
cout<<endl;  

for (int i = 0; i < maxValue; i++)
      {
            if( stuff[i] == 'A'||stuff[i] == 'a'){
                numOfA = numOfA + 1;
                numOfTotalVowels = numOfTotalVowels + 1;
            }
            else if( stuff[i] == 'E'||stuff[i] == 'e'){
                numOfE = numOfE + 1;
                numOfTotalVowels = numOfTotalVowels + 1;
            }
            else if( stuff[i] == 'I'||stuff[i] == 'i'){
                numOfI = numOfI + 1;
                numOfTotalVowels = numOfTotalVowels + 1;
            }
            else if( stuff[i] == 'O'||stuff[i] == 'o'){
                numOfO = numOfO + 1;
                numOfTotalVowels = numOfTotalVowels + 1;
            }
            else if( stuff[i] == 'U'||stuff[i] == 'u'){
                numOfU = numOfU + 1;
                numOfTotalVowels = numOfTotalVowels + 1;
            }
      }
      
cout<<endl;  
cout << " There are: " << numOfA << " A's in the array." << endl;
cout << " There are: " << numOfE << " E's in the array." << endl;
cout << " There are: " << numOfI << " I's in the array." << endl;
cout << " There are: " << numOfO << " O's in the array." << endl;
cout << " There are: " << numOfU << " U's in the array." << endl;

cout << " The total amount of vowels is: " << numOfTotalVowels <<  endl;

}


//17. Write a program that will prompt for and receive exactly 10 integers, and count the number of integers whose value is less than the average value of the integers. Your program is to display the average integer value and the count of integers less than average. Hint, you will need at least two loops.

#include <iostream> //17.
using namespace std;

int main() 
{
int maxValue = 10;  
float avg;
int sum = 0;
int numLessThanAvg = 0;
int stuff[maxValue]; 

for (int i = 0; i < maxValue; i++)
      {
            cout << "Enter integers: "; //3.
            cin >> stuff[i];
      }
cout<<endl;  

for (int i = 0; i < maxValue; i++)
      {
            sum = sum + stuff[i];
      }

avg = (float)sum/maxValue;
cout << "Average integer value is: " << avg << endl;
cout<<endl;  

for (int i = 0; i < maxValue; i++)
      {
        if (stuff[i] < avg){
            numLessThanAvg = numLessThanAvg + 1; 
        }
      }
cout << "There are " << numLessThanAvg << " less than the adverage. " << endl;


}

//18. Write a program that will prompt for and input up to 20 integers (the number 999 wil quit) from the user and display to the screen the average of the integers.
 
#include <iostream> //18.
using namespace std;

int main() 
{
int maxValue = 19; 
float avg;
int sum = 0;
int number;
//int i = 0;
int stuff[maxValue]; 


      // Inputting the numbers....
cout << "Enter number, 999 to quit" << endl;
                cin >> number;  
    for (int q = 0; q < maxValue; q++) 
          {
              
            if (number != 999)
                {
                 stuff[q] = number; 
                cout << "Enter number, 999 to quit" << endl;
                cin >> number;
                }
                
            else
                {
                    stuff[q] = 0;
                }
            
          }


    
    // Try and get the average of what's already there.
    for (int i = 0; i < maxValue; i++) 
          {
            sum = sum + stuff[i];
          }
      
     cout<<endl; 
     
     avg = sum/maxValue;
     
     cout << avg << endl;

}

