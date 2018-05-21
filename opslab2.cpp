//Write a program to input the price of an item, the sales tax rate and calculate the total price.
int main1()
{
      float priceOfItem;
      float salesTaxRate;
      float moneyFromTax;
      float totalPrice;
      cout << "Enter the price of an item in dollars." << endl;
      cin >> priceOfItem;
      cout << "Enter the sales tax percentage rate." << endl;
      cin >> salesTaxRate;
      salesTaxRate =  salesTaxRate/100;
      moneyFromTax = priceOfItem * salesTaxRate;
      totalPrice = priceOfItem + moneyFromTax;       
    cout << " The total price is $" << totalPrice  << endl;
}


//2.	A program is required which will receive two numbers, calculate, and display to the screen their sum, difference, product, quotient.
int main2()
{
      int num1;
      int num2;
      int sum;
      int  diff;
      int  prod;
      float quot;

      cout << "Enter two numbers" << endl;
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

// 3.	Write a program to input three test scores and calculate the average. Print the average.
int main3()
{
      int test1;
      int test2;
      int test3;
      int avgScore;

      cout << "Enter three test scores." << endl;
      cin >> test1 >> test2 >> test3;

      avgScore = (float) (test1 + test2 + test3)/3 ; 
cout << " The average of those three scores equates to " << avgScore << endl;

}



// 4.	A program is required that will read in a tax rate (as a percentage), tip rate (as a percentage) and the price of three items (use 3 variables). 
//The program is to calculate the total price before tax, the tax payable, bill after tax, tip and total bill. Print all values.
int main4()
{
      int priceOfItem1;
      int priceOfItem2;
      int priceOfItem3;
      int priceBeforeTax;
      float salesTaxRate;
      float moneyFromTax;
      float billAfterTax;
      float   tipValue;
      float totalPrice;
      cout << "Enter the prices of three separate items in dollars." << endl;
      cin >> priceOfItem1 >> priceOfItem2 >> priceOfItem3;
      cout << "Enter the sales tax percentage rate." << endl;
      cin >> salesTaxRate;
      salesTaxRate =  salesTaxRate/100;

      priceBeforeTax = priceOfItem1 + priceOfItem2 + priceOfItem3;
     cout << " The price before tax is $" << priceBeforeTax  << endl;
      tipValue = priceBeforeTax * 0.15;
      cout << " The tip is $" << tipValue  << endl;
     moneyFromTax = priceBeforeTax * salesTaxRate;
      cout << " The tax payable is $" << moneyFromTax  << endl;
      billAfterTax = priceBeforeTax + moneyFromTax; 
      cout << " The bill after tax is $" << billAfterTax  << endl;
      totalPrice = billAfterTax + tipValue
      cout << " The total price is $" << totalPrice  << endl;
}
