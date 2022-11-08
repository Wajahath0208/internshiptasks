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