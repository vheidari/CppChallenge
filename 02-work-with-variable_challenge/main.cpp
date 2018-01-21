#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	// c++ boollina type 
	bool variableA;

	// c++ char type 
	char variableB;

	// c++ integer type
	int variableC;
	signed int variableCB;
	unsigned int variableCC;
	unsigned short variableCE;
	unsigned long variableCF;
	unsigned long long variableCG;

	// c++ float and double type
	float variableD;
	double variableE;

	// c++ auto type
	/* note: auto can store all of type */ 
	auto variableF = true;
	auto variableG = 'V';
	auto variableH =  20000000;
	auto variableI = 3.14;



	cout << "size of -- bool 				-- type " << sizeof(variableA) 	<< endl;
	cout << "size of -- char 				-- type " << sizeof(variableB)	<< endl;
	cout << "size of -- int  				-- type " << sizeof(variableC) 	<< endl;
	cout << "size of -- signed int 			-- type " << sizeof(variableCB) << endl;
	cout << "size of -- unsigned int 		-- type " << sizeof(variableCC) << endl;
	cout << "size of -- unsigned short 		-- type " << sizeof(variableCE) << endl;
	cout << "size of -- unsigned long 		-- type " << sizeof(variableCF) << endl;
	cout << "size of -- unsigned long long 	-- type " << sizeof(variableCG) << endl;
	cout << "size of -- float 			 	-- type " << sizeof(variableD) 	<< endl;
	cout << "size of -- double 			 	-- type " << sizeof(variableE) 	<< endl;
	cout << "---------------------------------------" << endl;
	cout << "show auto->bool  type " << variableF << endl;
	cout << "show auto->char  type " << variableG << endl;
	cout << "show auto->int   type " << variableH << endl;
	cout << "show auto->float type " << variableI << endl;


}	


