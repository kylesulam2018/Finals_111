#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	float sum, t;
	double n;
	sum =0;

	cout << "Input Number of Terms : ";
	cin >> t;
	cout << "The series is given by : " << endl;

		for (n=1; n <= t; n++)
		{
			sum = sum + 1/n;
		}

	for (n=1; n < t; n++)
	cout << "1/" << n << " + ";
	cout << "1/" << t << "\n";
	
	cout << "The sum is of the " << t << " terms is : " << fixed << showpoint << setprecision (4) << sum << endl;

		

	getch();
	return 0;			
}




