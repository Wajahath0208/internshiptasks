// Greater than neighbor
// Rahul lives in a colony, where 
// N
//  houses are built in a single row numbered from 
// 0
//  to 
// N
// −
// 1
// . The first house has the house number 
// 0
// , the second house has house number 
// 1
//  and so on. PrepBuddy wants to know the house number of the houses that are paying more rent than both the neighbors in the row where Rahul lives.
// First and the last house will have only one neighbor.

// Input format
// First line contains test case 
// T
// .
// T
//  test cases follow,
// First line contains 
// N
//  representing the number of houses.
// Second line contains the rent of the 
// N
//  houses.

// Output format
// For each test case, print house numbers(
// 0
// -based indexing) that satisfy the above-mentioned condition.
// If no house satisfies the criterion print 
// −
// 1
// .

// Constraints
// 1
// <=
// T
// <=
// 10

// 2
// <=
// N
// <=
// 100

// 1
// <=
// A
// [
// i
// ]
// <=
// 1000

// Time limit
// 1
//  second

// Example
// Input
// 2

// 5

// 4
 
// 3
 
// 5
 
// 2
 
// 1

// 7

// 7
 
// 2
 
// 8
 
// 4
 
// 3
 
// 9
 
// 1

// Output
// 0
 
// 2

// 0
 
// 2
 
// 5

// Sample test case explanation
// N
// =
// 5

// Array = 
// [
// 4
// ,
// 3
// ,
// 5
// ,
// 2
// ,
// 1
// ]

// 4
//  is greater than 
// 3
//  so print 
// 0
// (house number of the house paying rent=
// 4
// )
// 3
//  is not greater than its neighbor 
// 4
//  and 
// 5
//  so skip it.
// 5
//  is greater than both 
// 3
//  and 
// 2
//  so print 
// 2
// (house number of the house paying rent=
// 5
// )
// 2
//  is greater than 
// 1
//  but smaller than 
// 5
//  so skip it
// 1
//  is smaller than 
// 2
//  so skip it.
// Final answer = 
// 0
 
// 2


#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n,i,c=0;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
      cin>>a[i];
      if(a[0]>a[1]){
            cout<<0<<" ";
            c++;
        }
      for (i=1;i<n-1;i++){
        if(a[i-1]<a[i] && a[i]>a[i+1]){
            cout<<i<<" ";
            c++;
        }

      }
      if(a[n-1]>a[n-2]){
            cout<<n-1<<" ";
            c++;
        }
        if(c==0){
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
  }
