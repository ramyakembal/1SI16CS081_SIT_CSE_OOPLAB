#include   <iostream>
using namespace std;
int main()
{
	int n,t,i;
	cout<<"enter the size of the array\n"<<endl;
	cin>>n;
	int a[n];
	//cout<<"before swapping alternating array";
	cout<<"enter the elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"before swapping\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
    cout<<"\n"<<"after swapping\n";
    
    for(i=0;i<n && i+1<n;i=i+2)
    {
    	t=a[i];
    	a[i]=a[i+1];
    	a[i+1]=t;
    	//cout<<a[i];
    }
    for(i=0;i<n;i++)
    	cout<<a[i]<<"\t";

    return 0;
}