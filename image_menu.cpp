#include <string>
#include <iostream> 
#include "image_menu.h"

std::string getString( std::istream& is, std::ostream& os, const std::string& prompt ) {

std:: string answer;

os << prompt;
is >> answer;
return answer;

}

int getInteger( std::istream& is, std::ostream& os, const std::string& prompt ) {

int answer;

os << prompt;
is >> answer;
return answer;

}

double getDouble( std::istream& is, std::ostream& os, const std::string& prompt ) {

double answer;

os << prompt;
is >> answer;
return answer;

}

int assignment1( std::istream& is, std::ostream& os ) {

std:: string color;
int inum, i;
double fnum;


color = getString( is, os, "What's your favorite color? ");
inum = getInteger( is, os, "What's your favorite integer? ");
fnum = getDouble( is, os, "What's your favorite number? ");


for(i = 1; i <= inum; i++) {
	os << i << " " << color << " " << fnum << std::endl;
}

return inum;
}