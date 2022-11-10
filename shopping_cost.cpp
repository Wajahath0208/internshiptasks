// Shopping Cost
// Tina is preparing a shopping list containing 
// N
//  items. She knows the quantity and price of each item on the list. The shop is offering a 
// 20
// %
//  discount on the items with a quantity of more than 
// 100
//  units. Given the quantity and price of each of the 
// N
//  items, your task is to calculate how much each item will cost.

// Input format
// The first line of the input contains an integer 
// N
//  denoting the number of items
// Each of the next 
// N
//  lines contains two space-separated integers denoting the quantity and price of the item.

// Output format
// Print the final cost that Tina has to bear for each item. Print till a single digit after the decimal point.

// Constraints
// 1
// <=
// N
// <=
// 10

// 1
// <=
// q
// u
// a
// n
// t
// i
// t
// y
// ,
// p
// r
// i
// c
// e
// <=
// 10
// 3

// Time Limit
// 1
//  second

// Example
// Input
// 3

// 100
 
// 120

// 200
 
// 100

// 50
 
// 50

// Output
// 12000.0

// 16000.0

// 2500.0
#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
   
    int n;
    cin>>n;
    while(n!=0)
    {
      int q;
      float p;
      cin>>q>>p;
      if(q>100)
      {
        p=(p-(p*0.2));
        cout<<fixed<<setprecision(1)<<q*p<<endl;
      }
      else
      cout<<fixed<<setprecision(1)<<q*p<<endl;
      n=n-1;
    }
    
    return 0;
  }