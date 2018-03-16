#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
      int n;
      cout<<"\nEnter the size of the array:";
      cin>>n;
      int a[n],i;

      for(i=0;i<n;++i)
            a[i]=rand()%100+1;

      cout<<"\nArray elements:"<<endl;

      for(i=0;i<n;++i)
      {
            if(i%10==0)
                  cout<<endl;
            cout<<a[i]<<"\t";
      }
      return 0;
}
