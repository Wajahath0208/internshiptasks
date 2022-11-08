// You have gathered N bags of candy and you want to distribute the candy amongst M kids. The i-th bag contains Ci pieces of candy. You want to make sure that every kid get the same amount of candy and that the number of pieces of candy they receive is the greatest possible. You can open each bag and mix all pieces of candy before distributing them to the kids.

// How many pieces of candy will remain after you share the candy amongst kids, based on the rules described above?

// Input
// The first line of the input gives the number of test cases, T. T test cases follow.

// Each test case consists of two lines. The first line of each test case contains two integers: integer N, the number of candy bags, and M, the number of kids.

// The next line contains N non-negative integers C1,C2,…,CN representing array C, where the i-th integer represents the number of candies in the i-th bag.

// Output
// For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of candies that will remain if you divide candies between kids according to the rules described above.

// Limits
// Time limit: 40 seconds.
// Memory limit: 1 GB.
// Test Set 1
// 1≤T≤100.
// 1≤N≤105.
// 1≤M≤104.
// 0≤Ci≤1000, for all i from 1 to N.
// Sample:
// 2                                   
// 7 3
// 1 2 3 4 5 6 7
// 5 10
// 7 7 7 7 7
// Sample ouput:
// Case #1: 1
// Case #2: 5

#include<iostream>
using namespace std;
int main(){
    int n,m,t,k;
    cin>>t;
    while((t--)>=0){
        cin>>n;
        cin>>m;
        int i,var=1;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=1;i<n;i++){
            arr[i]=arr[i]+arr[i-1];
        }
        k=arr[i-1] % m;
        cout<<"Case #"<<var<<": "<<k<<endl;
        var++;
    }
}