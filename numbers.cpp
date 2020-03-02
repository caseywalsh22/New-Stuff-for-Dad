/*
Author: Casey Walsh
Course: CSCI 136
Instructor: Nyugen
Assignment: Lab 5A
This program asks the user for two inputs. 
Then, using a seperatare function and bool, prints if the first number 
Is divisible by the second number
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d);

bool isPrime ( int n);

int main()
{
    int num1;
    int num2;

    cout << "Enter the first number: " << endl;
    cin >> num1;
   // cout << "Enter the second number: " << endl;
    //cin >> num2;

   // isDivisibleBy(num1, num2);
   
    cout << isPrime(num1);

    
    return 0;
}


bool isDivisibleBy(int num1, int num2)
{
    if (num2 == 0)
    {
        //cout << "No" << endl;
        return false;
    }
    
    if ( num1%num2 == 0)
    {
       // cout << "Yes" << endl;
        return true;

    }
    else
    {
       // cout << "No" << endl;
        return false;
    }


}



bool isPrime(int n)
{
    if ( n == 0 || n ==1)
    {
        cout << "False" << endl;
        return false;
    }
    
    for (int j = 2; j< (n/2); j++) //If n is divisible by any of these numbers
    { //Change n/2 to an interger????
    
        if (isDivisibleBy(n, j))
        {
          cout << "False"; 
          return false;
       
        } 
        else
        {  cout << "True";
            return true;
           
            
        }
        
        /*if (n%j == 0)
        {
            cout <<"False" << endl; //Return false
            return false;
            break;
        }
       else
        {
            cout << "True" << endl; //Otherwise n is prime
            return true;
        }*/
    }

    
     
    
}