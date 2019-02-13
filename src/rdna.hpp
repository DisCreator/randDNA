#include <random>
#include <string>
using namespace std;


string randDNA(int seed, string bases,int len ){
	
	string randDNAs = "";
	mt19937 eng1(seed);
	uniform_int_distribution<int> un(0, bases.size()-1);
	
	for(int i=0; i<len; i++){
		int random = un(eng1);
		randDNAs += bases[random]
	}
	
	return randDNAs;
}
