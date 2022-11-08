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