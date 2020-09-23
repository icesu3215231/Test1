#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DispalyMenu ();
float Area (const float Radius);
	float Area (const float Length,const float Widht,const float Hight);
	int main()
	{
	char choice;
	bool flag = true;
	do
	{
		DispalyMenu();
		cin >> choice;
		if (choice == '1'){
			float Radius;
			cout << "\nEnter radius : ";
			cin >>  Radius;
			cout << "Area of Circle = " << fixed;
			cout  << setprecision(2) << Area(Radius) << endl;
		
	}
		else if (choice == '2')
		{
			float Length,Widht;
			cout << "Enter length and width";
			cin >> Length >> Widht;
			cout << "Area of Recrangle = " << fixed;
			cout << setprecision(2) << Area(Length,Widht);
			cout << endl;
		}
		else if (choice == '3')
		{
			float Length,Widht,Hight;
			cout << "Enter width and hight =";
			cin >> Widht,Hight;
			cout << "Area of Triangle = " << fixed;
			cout << setprecision(2) << Area(Length,Widht);
		}
		else if (choice == '4')
		{
		flag  = false;
		}
		else 
		{
			cout << "\nYou choose out of range is";
			cout << "not process.\n";
		}
		} while (flag);
			cout << "\n . . .Exit program . . . \n";
		return (0);
}
	float Area (const float Radius)
	{
		return (3.14159F*Radius*Radius);
	}
	float  Area(const float Length,const float Widht)
	{
	return (Length*Widht);
	}
	float  Area(const float Hight,const float Widht)
	{
	return (0.5*Widht*Hight);
	}
	void DisplayMenu(){
		cout << endl;
		cout << "Program Calculate Area" << endl;
		cout << "1. Clrcle" << endl;
		cout << "2. Rectangle" << endl;
		cout << "3. Triangle" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice number:";
	}
	