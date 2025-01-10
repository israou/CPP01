#include <iostream>
#include <string>

// class Robio
// {
// 	private:
// 		std::string _login;
// 	public:
// 		Robio(std::string login) : _login(login)
// 		{
// 			std::cout << this->_login << " is born" << std::endl;
// 		}
// 		~Robio()
// 		{
// 			std::cout << this->_login << " died" << std::endl;
// 		}
// };

// int main()
// {
// 	Robio bob = Robio("gryffondor");//stack
// 	Robio* beb = new Robio("serpentar");//heap

// 	delete beb;
// 	return 0;//bob mat
// }

class Student
{
	private:
		std::string _login;
	public:
		Student() : _login("ldefault")
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		~Student()
		{
			std::cout << "Student " << this->_login << " is died" << std::endl;
		}
};

int main()
{
	Student* students = new Student[42];

	delete [] students;
}