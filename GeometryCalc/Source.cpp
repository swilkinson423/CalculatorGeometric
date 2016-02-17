#include <iostream>
#define PI 3.14 // Used t define constants (similar to "const double")

using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaRectangle(double, double);
double areaTriangle(double, double);

int main()
{
	int choice;
	char cont;

	do
	{
		system("cls");
		initMenu();
		cin >> choice;

		menuDecision(choice);

		cout << "Do you want to continue with this program? (Y/N)" << endl;
		cin >> cont;
	} while (cont == 'y' || cont == 'Y');


	return 0;
}

void initMenu()
{
	cout << "Enter Option:" << endl;
	cout << "1. Circle" << endl;
	cout << "2. Square" << endl;
	cout << "3. Rectangle" << endl;
	cout << "4. Triangle" << endl;
}

void menuDecision(int choice)
{
	double r, l, h;
	switch (choice)
	{
	case 1:
		cout << "Enter the redius: " << endl;
		cin >> r;
		areaCircle(r);
		break;
	case 2:
		cout << "Enter the length of a side:" << endl;
		cin >> l;
		areaRectangle(l, l);
		break;
	case 3:
		cout << "Enter the length of the rectangle:" << endl;
		cin >> l;
		cout << "Enter the height of the rectangle:" << endl;
		cin >> h;
		areaRectangle(l, h);
		break;
	case 4:
		cout << "Enter the width of the triangle:" << endl;
		cin >> l;
		cout << "Enter the height of the triangle:" << endl;
		cin >> h;
		areaTriangle(l, h);
		break;
	default:
		cout << "You did not choose a correct option." << endl;
	}
}

double areaCircle(double r)
{
	double result = PI * r * r;
	cout << "The area of a circle with radius " << r << " is: " << result << endl;
	return result;
}

double areaRectangle(double l, double h)
{
	double result = l * h;
	if (l == h)
		cout << "The area of a square with sides equal to " << l << " is: " << result << endl;
	else
		cout << "The area of a rectangle with length " << l << " and height " << h << " is: " << result << endl;

	return result;
}

double areaTriangle(double l, double h)
{
	double result = (l * h) / 2;
	cout << "The area of a triangle with length " << l << " and height " << h << " is: " << result << endl;

	return result;
}
