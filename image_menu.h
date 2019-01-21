#ifndef IMAGE_MENU_H
#define IMAGE_MENU_H

#include <string>
#include <iostream>

std::string getString( std::istream& is, std::ostream& os, const std::string& prompt );
int getInteger( std::istream& is, std::ostream& os, const std::string& prompt );
double getDouble( std::istream& is, std::ostream& os, const std::string& prompt );
int assignment1( std::istream& is, std::ostream& os );
#endif // IMAGE_MENU_H