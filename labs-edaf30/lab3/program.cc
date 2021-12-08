#include "UserTable.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main(){
	
	UserTable ut {"users.txt"};
	
	cout << ut.find(21330) << endl;
	cout << ut.find(21331) << endl;
	cout << ut.find("Jens Holmgren") << endl;
	
	cout <<  ""<< endl;
	cout <<  ""<< endl;
	
	
	
	
	return 0;
}