#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	// Convert the sum to float by dividing with a float value
	// Added () around the sum calculation for order of op
	return (i1 + i2 + i3) / 3.0f;
}

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3; // was originaly n2 and was not reading n3
	
	// Call the average function with the three inputs
	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}