#include <iostream>  // cin, cout

using namespace std;

/*
Function to define the area of a rectangle

Calculate the len * wid and return this to main

*/
void area(double len, double wid) {

	cout << "Area of a rectangle given a length of " << len
		<< "\nand a width of " << wid << " is "
		<< len * wid << endl; // call the function
}
/*
Function to define the perimeter of a rectangle

calcuate the result of 2*len + 2 *wid

*/
void perimeter(double len, double wid) { 
	cout << "The Perimeter of a rectangle with length of " << len
		<< "\nand a width of " << wid << " is "
		<< 2 * len + 2 * wid << endl; // call the function   
}

void menu() {

	cout << "Welcome to the program\n";
	cout << "Please enter a length and width now\n";
}

int main() {

	// local variables

	double length = 0 , width = 0, area_result = 0;
	int response = 0;

	menu(); // call function

	cin >> length >> width;

	cout << "Please enter 1) for Area calc 2) Perimeter\n";
	cin >> response;

	// processs response
	if(response == 1)
	 area(length, width);

	if (response == 2)
	perimeter(length, width);

	return 0;  //exit

}