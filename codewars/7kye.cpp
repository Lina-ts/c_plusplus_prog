#include <iostream>
#include <string>
#include <cmath>

int findNextSquare(int square)
{
	double powCurrentSquare = sqrt(square);
	std::cout << "sqrt(square) " << powCurrentSquare << std::endl;
	if (floor(powCurrentSquare) == powCurrentSquare) {
		int nextSquare = (powCurrentSquare+1)*(powCurrentSquare+1);
		return nextSquare; }
	else
		return -1;
}

int main()
{
	std::cout << "Enter the square: ";
	int square;			
	std::cin >> square;
	
	int next = findNextSquare(square);
	std::cout << "Current square = " << square << " Next square = " << next << std::endl;

	return 0;
}
