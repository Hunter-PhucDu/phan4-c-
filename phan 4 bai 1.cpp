#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <string>

using namespace std;

void xoakhoangtrang(char *s)
{
	  // xoa ktrang o dau
	  while (s[0]==' ') 
	         strcpy(&s[0], &s[1]);
      // xoa ktrang o cuoi
	  while (s[strlen(s) -1] -1 == ' ') 
	         strcpy(&s[strlen(s) -1], &s[strlen(s)]);
      
cout<<s;
}

int main()
{
cout << "Phan 4. Bai 1:\n";
char St[100];
cout<< "nhap chuoi: ";
fgets(St, sizeof(St)+1, stdin);
cout<< "chuoi vua nhap la: "<< St << endl;;
cout<< "chuoi sau khi sua la: ";
xoakhoangtrang(St);		
cout<<endl;
getch();
return 0;
} 