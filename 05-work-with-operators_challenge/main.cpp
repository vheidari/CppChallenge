#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "hello from work with operators challnege !" << endl;
	cout << "------------------------------------------" << endl;

	// Operators `+` `-` `*` `/` `%`
	int numOne = 20; 
	int numTwo = 20;
	int result =  numOne + numTwo;
	cout << "result of numOne + numTwo : " << result << endl;
	result = 0;
	result =  numOne - numTwo;
	cout << "result of numOne - numTwo : " << result << endl;
	result = 0;
	result =  numOne * numTwo;
	cout << "result of numOne * numTwo : " << result << endl;
	result = 0;
	result =  numOne / numTwo;
	cout << "result of numOne / numTwo : " << result << endl;
	result = 0;
	result =  numOne % numTwo;
	cout << "result of numOne % numTwo : " << result << endl;
	cout << "------------------------------------------" << endl;

	// Operators `++` and `--`  postfix and prefix
	int number = 15;
	cout << "number++ : " << number++ << endl;
	cout << "postfix number now is  : " << number << endl;
	cout << "------------------------------------------" << endl;

	number = 15;
	cout << "number-- : " << number-- << endl;
	cout << "postfix number now is  : " << number << endl;
	cout << "------------------------------------------" << endl;

	number = 15;
	cout << "++number : " << ++number << endl;
	cout << "prefix number now is   : " << number << endl;
	cout << "------------------------------------------" << endl;

	number = 15;
	cout << "--number : " << --number << endl;
	cout << "prefix number now is   : " << number << endl;
	cout << "------------------------------------------" << endl;

	// Operators `==` and `!=` and `<` and `>` and `<=` and `>=` 

	int myAge = 25;
	bool isEqual25 = ( myAge == 25 );
	cout << "is equal 25 : " << isEqual25 << " :: => 1 == true " << endl;

	bool isNotEqual30 = ( myAge !=30 );
	cout << "is not equal 30 : " << isNotEqual30 << " :: => 1 == true " << endl;

	bool lessThan20 = ( myAge < 20);
	cout << "less that 20 : " << lessThan20 << " :: => 0 == false " << endl;
	
	bool moreThan20 = ( myAge > 20);
	cout << "more that 20 : " << moreThan20 << " :: => 1 == true " << endl;

	bool lessOrEqual18 = (myAge <= 18);
	cout << "less or equal 18 : " << lessOrEqual18 << " :: => 0 == false " << endl;
	
	bool moreOrEqual25 = (myAge >= 25);
	cout << "more or equal 25 : " << moreOrEqual25 << " :: => 1 == true " << endl;	
	cout << "------------------------------------------" << endl;

	// Operators `&&` and  `||` and `!`
	// note : and , or , not
	bool valOne = true;
	bool valTwo = true;
	cout << "valOne && valTwo : " << (valOne && valTwo) << endl;
	cout << "valOne || valTwo : " << (valOne || valTwo) << endl;
	cout << "!valOne : " << !valOne << endl;
	cout << "!valTwo : " << !valTwo << endl;
	cout << "------------------------------------------" << endl;


}