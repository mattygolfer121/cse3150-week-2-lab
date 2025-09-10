#include <iostream>
#include <string>
#include "parser.h"


int main(){
	std::cout << "Please Enter Full Name: " << std::endl;
	std::string fullname;
	std::getline(std::cin, fullname);
	const std::string& fullNamePTR = fullname;
	
	std::string* first = new std::string;
	std::string* last = new std::string; 
	
	StringUtils::parseName(fullNamePTR, first, last);
	
	std::cout << "Please Enter Email Address: " << std::endl;
	std::string username;
	std::getline(std::cin, username);
	const std::string& email = username;
	
	std::cout << "First Name: " << *first << std::endl;
	std::cout << "Last Name: " << *last << std::endl;
	
	delete first;
	delete last;

	std::cout << "Username: " << StringUtils::getUsername(email) << std::endl;
	return 0;
}

