#ifndef TAGREMOVER_H
#define TAGREMOVER_H

#include "iostream"

class TagRemover {
public:
    TagRemover(std::ifstream& in);
	
    void print(std::ostream& out);

private:
    std::string text;
};
std::string replacer(std::string &code);

#endif
