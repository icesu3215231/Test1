#include <iostream>
#include <string>
using namespace std;
int main()
{
	/*cout << ceil(56.8)<< endl;
	char str1[30] = "Hello world";
	char str2[30] = "Hi world";
	cout << strchr(str1,'o') << endl;
	cout << strcmp(str2,str1) << endl;
	cout << strcpy(str1,str2) << endl;
	cout << str1 << endl;
	cout << strlen(str1) << endl;
	return 0;*/
	char str[10];
	cout << "Enter string :";
	cin >> str;
	cout << strlen(str) << endl;
	for (int i=0;i<=strlen(str);i++)
	{ cout << str[i]<< endl;
	cout << "*" << endl;
	}





	return 0;

}
