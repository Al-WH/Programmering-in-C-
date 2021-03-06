#include "TagRemover.h"
#include <iostream>
#include <fstream>

using std::ifstream;
using std::ofstream; 
using std::ostream;
using std::find;
using std::string;
using std::endl;
using std::cin;

 TagRemover::TagRemover(ifstream& file)
 {
	 string line ;
 
	while(getline(file, line)) {
		 text.append(line);
		 text.append("\n");
	}
	
	int start = text.find("<");
	int end = text.find(">");
	
	while (start > -1 && end > -1 ){
		text.erase(start, end-start+1);
		start= text.find("<");
		end = text.find(">");
	} 

    int start2 = text.find('&');
	
	while (start2 != -1 ){
		int end2 = text.find(';', start2);
	
        int rep_length =  end2 - start2 + 1; // rep_length
        auto rep = text.substr(start2, rep_length); //find string to replace
        text.replace(start2, rep_length, replacer(rep));
        start2 = text.find('&', start2 + 1);
	} 

}
		std::string replacer(string& code)
	{
		if (code.compare("&amp;") == 0)
			return "&";
		if (code.compare("&nbsp;") == 0)
			return " ";
		if (code.compare("&lt;") == 0)
			return "<";
		if (code.compare("&gt;") == 0)
			return ">";
		return code;
	}
		void TagRemover::print(ostream& out) {
			out << text << endl;
		}





int main() {
		
	std::ifstream file("test.html");

    if (file.is_open()) {

        TagRemover tagRemover(file);
        tagRemover.print(std::cout);
    } 
	
}