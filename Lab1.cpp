#include <vector>
#include <iostream>

using namespace std;

int main(){
	
	vector <char> Vcomp;
	vector <int> V2 ={10, 14, 32, 64,  16};
	
	Vcomp. push_back('P'); // add new element
	V2.pop_back(); // remove last element
	
	for (int i=0; i< V2.size(); i++)
	   cout << V2[i] << "";
	   
   }
