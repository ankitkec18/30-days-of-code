#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
   {
       string s,s1,s2;
       getline(cin>>ws,s);
       for(int j=0;j<s.size();j++)
       {
           if(j%2==0)
           s1+= s[j];
           else
           s2+= s[j];
       }
       cout<<s1<<" "<<s2<<endl;
   }  
    return 0;
}
