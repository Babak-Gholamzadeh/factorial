#include <iostream>
#include <conio.h>

using namespace std;

const int arraysize=1000;
void fact(int);
void print(int[],int[]);
int main(){
	int a;
	while(1){
		//clrscr();
	loop1:
		cout << "Enter the number:";
		cin >> a;
		if (a<0){
			//clrscr();
			cout << "Number>=0\n";
			goto loop1;}
		fact(a);
		cout << "\ndobare adad vared mikonid?(Y/N):";
		if (getch()=='n')
			break;
	}
	return 0;
}
void fact(int a){
	register int i,j,k;
	int s[arraysize],n[arraysize];
	s[arraysize-1]=1;n[arraysize-1]=1;
	for (i=0;i<999;i++){
		s[i]=0;n[i]=0;}
	for (i=1;i<a;i++){
		for (j=1;j<=i;j++)
			for (k=arraysize-1;k>=0;k--)
				if (s[k]+n[k]<100)
					s[k]+=n[k];
				else{
					s[k-1]+=(s[k]+n[k])/10000;
					s[k]=(s[k]+n[k])%10000;
				}
		for (j=0;j<arraysize;j++)
			n[j]=s[j];
	}
	print(s,n);
}
void print(int s[arraysize],int n[arraysize]){
	register int i;
	char f='0';
	cout << "Fact The Number=";
	for (i=0;i<1000;i++)
		if ((s[i]==0)&&(f=='0'))
			continue;
		else{
			f='1';
			if (s[i]==0)
				cout << "0000";
			else
				cout << s[i];
		}
}

