//
//  main.cpp
//  rverse
//
//  Created by Hasan Qureshi on 2/12/20.
//  Copyright © 2020 Hasan Qureshi. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

void reverseNum(string &Num);
// Driver program
int main()
{
    string Num;// to reverse exactly what you put in, using string will be more efficent.
    cout<< "Type in the string to check if it is a palindrome."<<endl;
    cin >> Num;// user inputs the number they want to reverse
    cout<< "You chose to reverse: "<<Num<<endl;
    reverseNum(Num);// the function reverses Num
    cout<< "Your input reversed is: "<<Num<<endl;// displays reversed number
    return 0;
}
void reverseNum(string &Num)// prototype for reversing numbers and uses str as a reference
{
    int NumL = Num.length();
    // NumL is the length of the string and is determined by the numbers entered
    
    // the program reverses the strings from both sides of the string
    int i;
    for (i = 0; i < NumL/2; i++){//i is a counter which cannot exceed the string lenght.
        swap(Num[i], Num[NumL-i-1]);
    }
    if (Num[i]==Num[NumL-i-1]){
    cout<<"Your input is a palindrome."<<endl;
    }
    else{
    cout<<"What you entered is not a palindrome."<<endl;
    }
}
