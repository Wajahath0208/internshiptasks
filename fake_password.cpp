// Fake Password
// And you thought array rotation has no real-life use? PrepBud has a password for his locker which he has written on a piece of paper. He leaves the paper on the table and goes out for grabbing some food. When he comes back he finds that paper is replaced and hence the password is changed. He does not remember his password exactly but he tries his best to recall his old password. After a long time and lots of effort, he came up with a guess that the original password can be obtained by rotating a fake password by 
// 2
//  places.
// Since you are learning programming and you have become a good programmer by now, he wants you to write this code to check whether the original password can be obtained by rotating a fake password by 
// 2
//  places.

// Input Format
// The first line contains an integer 
// T
// , denoting the number of test cases. 
// Each test case consists of two lines,
// The first line contains the original password as a string 
// O
//  (containing only lowercase characters).
// The second line contains a fake password as a string 
// F
//  (containing only lowercase characters).

// Output Format
// For each test case on a new line, print Yes or No depending upon whether the condition is satisfied or not.

// Constraints
// 1
// <=
// T
// <=
// 10

// 2
// <=
// |
// O
// |
// ,
// |
// F
// |
// <=
// 10
// 7
// , where 
// |
// O
// |
//  and 
// |
// F
// |
//  are length of string 
// O
//  and 
// F
//  respectively.

// Time Limit
// 1 second

// Example
// Input
// 2
// string
// ngstri
// study
// ystud

// Output
// Yes
// No


#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t-->0)
    {
        int flag=0,n;
      string str1,str2,str3;
		cin>>str1;
        n=str1.length();
        cin>>str2;
        str3=str2;
        reverse(str2.begin(), str2.begin()+2);
        reverse(str2.begin()+2, str2.end());
         reverse(str2.begin(), str2.end());

        if(str2==str1){
            flag=1;
        }
        reverse(str3.begin(), str3.begin()+(n-2));
        reverse(str3.begin()+(n-2), str3.end());
         reverse(str3.begin(), str3.end());
         if(str3==str1){
            flag=1;
         }
         if(flag==0)
           cout<<"No"<<endl;
        else if(flag==1)
            cout<<"Yes"<<endl;
    }
    return 0;
  }
