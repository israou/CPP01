
#include <iostream>

int main()
{
	int numberofballs = 42;
	int* ballsPtr = &numberofballs;
	int& ballsRef = numberofballs;//je ne peux pas changer sur quoi ma reference pointe
	// int& ballsRef2;//faux c est une reference qui ne pointe sur rien

	std::cout << numberofballs << " " << *ballsPtr << " " << ballsRef << " "
		<< &numberofballs << " " << ballsPtr << std::endl;

	*ballsPtr = 21;
	std::cout << numberofballs << std::endl;
	ballsRef = 84;
	std::cout << numberofballs << std::endl;
	return 0;
}