#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
	char test[]="The quick brown fox jumps over the lazy dog",input[strlen(test)],ch;

	puts(test);

	for(int i=0;i<strlen(test);++i)
	{
		while((ch=getch())!=test[i])
			cout<<"\a";
		cout<<ch;
		input[i]=ch;
	}
	//system("time");
	if(!strcmp(test,input))
		cout<<"\nCongratulations!";
	return 0;
}