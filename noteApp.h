#include <string> 

class func
{
    public:
    int static getPageTitle();
    int createPage(const std::string &input);
    int openPage(const std::string &pageTitle);
    
    private:
    std::string pageTitle;
    std::string input;
};
