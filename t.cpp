
#include <iostream>

// int main()
// {
// 	int numberofballs = 42;
// 	int* ballsPtr = &numberofballs;
// 	int& ballsRef = numberofballs;//je ne peux pas changer sur quoi ma reference pointe
// 	// int& ballsRef2;//faux c est une reference qui ne pointe sur rien

// 	std::cout << numberofballs << " " << *ballsPtr << " " << ballsRef << " "
// 		<< &numberofballs << " " << ballsPtr << std::endl;

// 	*ballsPtr = 21;
// 	std::cout << numberofballs << std::endl;
// 	ballsRef = 84;
// 	std::cout << numberofballs << std::endl;
// 	return 0;
// }

//--------==============------------------


void	byPtr(std::string* str)
{
	*str += " and ho";
}

void	byConstPtr(std::string const * str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string& str)
{
	str += " and ouis";
}

void	byConstRef(std::string const & str)
{
	std::cout << str << std::endl;
}

int main()
{
	std::string str = " i love robio";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i love me";
}