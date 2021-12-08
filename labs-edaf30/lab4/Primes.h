#ifndef PRIMES_H
#define PRIMES_H

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <assert.h>

	class Primes
	{
		public:
			
		Primes (size_t size);
			
		std::vector<int> get_primes();	
		int get_highest_prime();
		
		private:
		std::string primes; 	
			
			
	};



#endif