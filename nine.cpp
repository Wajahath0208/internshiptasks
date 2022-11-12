// Problem
// Ada gives John a positive integer N. She challenges him to construct a new number (without leading zeros), that is a multiple of 9, by inserting exactly one digit (0 … 9) anywhere in the given number N. It is guaranteed that N does not have any leading zeros.

// As John prefers smaller numbers, he wants to construct the smallest such number possible. Can you help John?

// Input
// The first line of the input gives the number of test cases, T. T test cases follow.

// Each test case has a single line containing a positive integer N: the number Ada gives John.

// Output
// For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the new number constructed by John. As mentioned earlier, y cannot have leading zeros.

// Limits
// Memory limit: 1 GB.
// 1≤T≤100.
// Test Set 1
// Time limit: 20 seconds.
// 1≤N≤105.
// Test Set 2
// Time limit: 40 seconds.
// For at most 10 cases:
// 1≤N≤10123456.
// For the remaining cases:
// 1≤N≤105.

// Sample Input
// 3
// 5
// 33
// 12121
// Sample Output
// Case #1: 45
// Case #2: 333
// Case #3: 121212


#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,t,c=1,a,b=0,d=0,e,f,g,i=0;
    int x=0,y,z,p=1,q=0,result=0,sort[100];
    cin>>t;
    while(t-->0){
        cin>>n;
        a=n;
        z=n;
        while(a>0){
            b=a%10;
            a=a/10;
            sort[i]=b;
            d++;
            x=x+b;
            i++;
        }
        f=d;
        if(x%9!=0){
        e=x%9;
        g=9-e;
        for(i=d-1;i>=0;i--){
            if(sort[i]>g && q==0){
                q=1;
                
                result=result+(g*pow(10,f));
                f--;
            }
            
            result=result+(sort[i]*pow(10,f));
            f--;
        }
        if(q==0 && i<0){
             
            result=result+(g*pow(10,f));
           f--;
        }
        cout<<result+1<<endl;
    }
    }
}