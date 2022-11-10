// Character Value
// You are provided with this table containing a character and its value. Given one of this character as input you need to print it's corresponding value.
// | P or p 	- PrepBytes      	|
// | Z or z 	- Zenith         	|
// | E or e 	- Expert Coder   	|
// | D or d 	- Data Structure 	|

// Input format
// A single character

// Output format
// For each test case print the corresponding value of the given character.

// Time Limit
// 1
//  second

// Example
// Input
// e

// Output
// Expert Coder
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    char ch;
    cin>>ch;
    if(ch == 'P' || ch == 'p'){
      cout<<"PrepBytes";
    }
    else if (ch == 'Z' || ch == 'z'){
      cout<<"Zenith";
    }
    else if (ch == 'E' || ch == 'e'){
      cout<<"Expert Coder";
    }
    else if(ch == 'D' || ch == 'd'){
      cout<<"Data Structure";
    }
    
    return 0;
  }