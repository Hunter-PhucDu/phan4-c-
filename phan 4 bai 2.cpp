#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <string>

using namespace std;

void thayThe(char *St, char c)
{
	char *p = St;
    while(*p != NULL)
    {
        if (*p == '!')
        {
            *p = c;
        }
        p++;
    }
cout<<St;
}

int main()
{
cout << "Phan 4. Bai 2:\n";
char St[100];
char c = '.';
cout<< "nhap chuoi: ";
fgets(St, sizeof(St)+1, stdin);
cout<< "chuoi vua nhap la: "<< St << endl;;
cout<< "chuoi sau khi sua la: ";
thayThe(St, c);		
cout<<endl;
getch();
return 0;
} 