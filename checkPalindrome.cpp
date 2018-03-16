#include <iostream>
#include <cstring>
using namespace std;

int main()
{
      char a[50];
      cout<<"Enter a string:";
      cin>>a;
      int i,j,flag=0;
      for(i=0,j=strlen(a)-1;i<strlen(a)/2;++i,--j)
      {
            if(a[i]!=a[j])
            {
                  flag=1;
                  break;
            }
      }
      if(flag)
            cout<<"Not palindrome";
      else
            cout<<"palindrome";

      cout<<endl;
      return 0;
}
