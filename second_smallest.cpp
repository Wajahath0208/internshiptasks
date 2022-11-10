// Second Smallest
// You are given 
// 3
//  distinct integer numbers 
// X
// ,
// Y
//  and 
// Z
// . Task is to print the second smallest number among the three provided numbers.

// Input format
// Input contains 
// 3
//  distinct integers 
// X
// ,
// Y
//  and 
// Z
// .

// Output format
// Print the second smallest integer.

// Time Limit
// 1
//  second

// Constraints
// 1
// <=
// X
// ,
// Y
// ,
// Z
// <=
// 100

// Example
// Input
// 10
 
// 42
 
// 15

// Output
// 15

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y && x>z){
      if(y>z){
        cout<<y<<endl;
      }
      else{
        cout<<z<<endl;
      }
      
    }
    if(y>x && y>z){
      if(x>z){
        cout<<x<<endl;
      }
      else{
        cout<<z<<endl;
      }
    }
    if(z>x && z>y){
      if(x>y){
        cout<<x<<endl;
      }
      else{
        cout<<y<<endl;
      }
    }
    return 0;
  }