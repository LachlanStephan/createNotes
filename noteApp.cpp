#include "config.h"
#include "noteApp.h"
#include <iostream>
#include <fstream>
#include <unistd.h>

func f;
config c;


// Path for files to be stored
std::string dirPath = c.dirPath;

int main () 
{
	f.getPageTitle(); 
	return 0;
}

int func::openPage(const std::string &pageTitle)
{
	std::string pageOpen = "";
	pageOpen = "vi "+pageTitle+".txt";
	std::cout << pageOpen << std::endl;
    chdir(dirPath.c_str());
	system(pageOpen.c_str());
	return 0;
}

int func::createPage(const std::string &input) 
{
	std::string pageTitle = input; 
	std::ofstream outfile (dirPath+"/"+pageTitle+".txt"); 
	outfile << pageTitle << std::endl;
	outfile.close();
	f.openPage(pageTitle);
	return 0;
}

int func::getPageTitle()
{
	std::string input; 
	std::cout << "Enter title ";
	std::cin >> input;
	std::cout << "Your new page will be: " << input << std::endl;
	f.createPage(input);
	return 0;
}


