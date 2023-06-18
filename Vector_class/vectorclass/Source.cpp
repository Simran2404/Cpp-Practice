#include<iostream>
#include<cassert>
#include"vector.hpp"

int main()
{
	Vector < std::string >vector;
	vector.pushback("simran");
	vector.pushback("c++");
	vector.pushback("personalised vector class");

	std::cin.get();
}