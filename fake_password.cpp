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