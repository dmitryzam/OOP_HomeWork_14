#include<iostream>
#include"String.hpp"

int main() {

	String str1("Hello");
	std::cout << "1 Size is " << str1.length() << '\n';
	//str1.clear();
	String str2(" World!!!");
	std::cout << "2 Size is " << str2.length() << '\n';
	String str3 = str1 + str2;
	std::cout << "3 Size is " << str3.length() << '\n';
	//std::cout << str1 << '\n';


	return 0;
}