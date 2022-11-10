// Ten from Two
// O
// M
// G
// !
//  You made up to this question, Congrats for that
// !
//  Let us solve a fun maths question now. Just do the simple calculation behind it and you are done. You are given a number 
// n
//  and you are asked to make 
// n
//  divisible by 
// 10
// . The only operation you can do on 
// n
//  is to multiply 
// n
//  by 
// 2
// .
// Given 
// n
//  find out how many operations are required to make 
// n
//  divisible by 
// 10
// .

// Input format
// First-line contains an integer 
// T
// , denoting number of test cases. 
// Then follows 
// T
//  test cases. Each test case consists of a single variable 
// n
// .

// Output format
// Print 
// T
//  values. Each line will print number of operations
// (
// 0
//  or more
// )
//  if it is possible to make 
// n
//  divisible by 
// 10
//  else print 
// −
// 1
// .

// Constraints
// 1
// <=
// T
// <=
// 5

// 1
// <=
// N
// <
// 50

// Time Limit
// 1
//  second

// Example
// Input:
// 3
// 10
// 25
// 1

// Output:
// 0
// 1
// -1

// Sample Test case Explanation
// In the first test case, 
// n
// =
// 10
//  is already divisible by 
// 10
//  so the number of operations performed 
// =
// 0
// .
// In the second test case, 
// n
// =
// 25
//  will be divisible by 
// 10
//  after multiplying 
// n
//  by 
// 2
//  once. 
// 25
// ∗
// 2
// =
// 50
//  and 
// 50
//  is divisible by 
// 10
// .
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t!=0)
    {
      int n;
      cin>>n;
      if (n%10==0)
      cout<<0<<endl;
      else if ((n*2)%10==0)
      cout<<1<<endl;
      else
      cout<<-1<<endl;
      t=t-1;
    }
    
    return 0;
  }