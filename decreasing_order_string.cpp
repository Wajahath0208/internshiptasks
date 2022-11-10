// Decreasing Order Strings
// Sorting numbers is something we are very much comfortable with. Let's get comfortable with sorting strings as well. The task is simple, given a string 
// S
//  you have to sort the characters of the string in lexicographically-decreasing order.

// Note - Do not use inbuilt sorting function.

// Input format
// The first line contains an integer 
// T
// , denoting the number of test cases.
// Each test case consists of a string 
// S
//  containing only lowercase characters.

// Output format
// For each test case on a new line, print the string sorted in lexicographically-decreasing order.

// Constraints
// 1
// <=
// T
// <=
// 5

// 1
// <=
// |
// S
// |
// <=
// 10
// 6
// , where 
// |
// S
// |
//  denotes length of string 
// S
// .

// Time limit
// 1
//  second

// Example
// Input
// 2

// prepbytes
// algorithm

// Output
// ytsrppeeb
// tromlihga


#include <bits/stdc++.h>
  using namespace std;
  
  
  int main()
  {
    int n;
    cin>>n;
    
    while(n--)
    {
      string str;
      cin>>str;
      
      char temp;
      
      for(int i=0;i<str.length();i++)
      {
        for(int j=i+1;j<str.length();j++)
        {
          if(str[j]>str[i])
          {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
          }
        }
      }
      
      for(int i=0;i<str.length();i++)
      {
        cout<<str[i];
      }
      cout<<endl;
    }
  }
