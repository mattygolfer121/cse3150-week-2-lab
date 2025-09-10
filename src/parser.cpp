#include <iostream>
#include <string>

#include "parser.h"



namespace StringUtils {
	void parseName(const std::string& fullName, std::string* firstName, std::string* lastName){
		size_t space_pos = fullName.find(' ');
		
		*firstName = fullName.substr(0, space_pos);
		*lastName = fullName.substr(space_pos + 1);			
}	
	std::string getUsername(const std::string& email){
		size_t at_pos = email.find('@');
		std::string username = email.substr(0, at_pos);
		return username;
}

}
