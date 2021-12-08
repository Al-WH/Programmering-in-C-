#include "Primes.h"
#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::endl;


		int main ()
		{
		Primes p{200};
		Primes p1{35};
		Primes p2 {100000};
		
		for(auto s : p1.get_primes() )
		{
			//cout << s << endl;
			cout << s << endl;
		}
			cout << "---"<< p2.get_highest_prime() <<"---" << endl;
			
			return 0;
		}


		Primes::Primes (size_t size)
		{
					
			primes.assign(size + 1, 'P');
			primes[0] = 'C';
			primes[1] = 'C';
			for (size_t i = 2; i < primes.length(); i++)
			{
				if (primes[i] == 'P')
				{
					size_t counter = i * 2;
					while (counter <= size)
					{
						primes[counter] = 'C';
						counter += i;
					}
				}
			}
	
		}

		std::vector<int> Primes::get_primes()
		{
			std::vector<int> tmp_v{} ; 
			for (size_t i = 2; i < primes.length(); i++)
			{
				if (primes.at(i) == 'P')
					{
						tmp_v.push_back(i);
					}
			}
				
			return tmp_v;	
		}	
		
		
		int Primes::get_highest_prime()
		{
			    return primes.rfind('P');
			
		}