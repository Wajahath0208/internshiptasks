// Problem
// There are N houses for sale. The i-th house costs Ai dollars to buy. You have a budget of B dollars to spend.

// What is the maximum number of houses you can buy?

// Input
// The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a single line containing the two integers N and B. The second line contains N integers. The i-th integer is Ai, the cost of the i-th house.

// Output
// For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum number of houses you can buy.

// Limits
// Time limit: 15 seconds.
// Memory limit: 1 GB.
// 1 ≤ T ≤ 100.
// 1 ≤ B ≤ 105.
// 1 ≤ Ai ≤ 1000, for all i.
// Test Set 1
// 1 ≤ N ≤ 100.
// Test Set 2
// 1 ≤ N ≤ 105.
// sample:
// 3
// 4 100
// 20 90 40 90
// 4 50
// 30 30 10 10
// 3 300
// 999 999 999
// sample ouput:
// Case #1: 2
// Case #2: 3
// Case #3: 0
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t,var=1;
    cin>>t;
    while(t-->0){
        vector<int> v{};
        int x,n,b,i;
        cin>>n;
        cin>>b;
        for(i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(i=1;i<n;i++){
            v[i]=v[i]+v[i-1];
            if(v[0]>b){
                cout<<"Case #"<<var<<": "<<0<<endl;
                break;
            }
            else if(v[i]>b){
                cout<<"Case #"<<var<<": "<<i<<endl;
                break;
            }
        }
        if(i>=n){
            cout<<"Case #"<<var<<": "<<i<<endl;
        }
        var++;
    }
}