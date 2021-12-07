#include "easyfind.hpp"

const char* NOT_FOUND::what() const throw()
{
	return "Error: Not Found";
}

int main ()
{
	std::vector<int> vec;// { 10, 20, 30, 40 };
	std::string s;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);


	try
	{
		easyfind(vec, 90);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	// it = fin÷
		
	return 0;
}
