#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	// initializing an array
	// note: myNumber have 4 element
	int myNumber [4] =  {12, 20, 16, -10};

	// initializing an array with a constant number	
	// note: other Number have 3 fixed element
	const int numberOfMyArray = 3;
	int otherNumber[numberOfMyArray] =  {35, 85, 12};

	// initializing an array without length of element
	// note: no limit on the number of elements
	int mySecondNumber [] = {20, 15, 36, 99, 100, 250, -150, 71};

	cout << "work on array and string challenge !" << endl;
	cout << "---------------------- " << endl;
	cout << "show myNumber Index 0 " << myNumber[0] << endl;
	cout << "show myNumber Index 1 " << myNumber[1] << endl;
	cout << "show myNumber Index 2 " << myNumber[2] << endl;
	cout << "show myNumber Index 3 " << myNumber[3] << endl;
	cout << "----------------------" << myNumber[0] << endl;
	cout << "show otherNumber Index 0 " << otherNumber[0] << endl;
	cout << "show otherNumber Index 1 " << otherNumber[1] << endl;
	cout << "show otherNumber Index 2 " << otherNumber[2] << endl;
	cout << "---------------------- " << endl;
	cout << "show mySecondNumber index 0 " << mySecondNumber[0] << endl;
	cout << "show mySecondNumber index 1 " << mySecondNumber[1] << endl;
	cout << "show mySecondNumber index 2 " << mySecondNumber[2] << endl;
	cout << "show mySecondNumber index 3 " << mySecondNumber[3] << endl;
	cout << "show mySecondNumber index 4 " << mySecondNumber[4] << endl;
	cout << "show mySecondNumber index 5 " << mySecondNumber[5] << endl;
	cout << "show mySecondNumber index 6 " << mySecondNumber[6] << endl;
	cout << "show mySecondNumber index 7 " << mySecondNumber[7] << endl;
	cout << "----------------------------" << endl;


	// initializing two array and update a index 
	const int numberOfAppleInBox = 5;
	string appleBox [numberOfAppleInBox] = {"red", "green", "yellow", "yellow", "green"};

	cout << "color of apple in apple box array :" << endl;
	cout << "-----------------------------------" << endl;
	cout << "apple color by index 0 in apple box : " << appleBox[0] << endl;
	cout << "apple color by index 1 in apple box : " << appleBox[1] << endl;
	cout << "apple color by index 2 in apple box : " << appleBox[2] << endl;
	cout << "apple color by index 3 in apple box : " << appleBox[3] << endl;
	cout << "apple color by index 4 in apple box : " << appleBox[4] << endl;
	cout << "-----------------------------------" << endl;

	// update appleBox index
	int numberOfIndexBeUpdate = 0;
	string appleColor = "";
	cout << "please insert number of index that you want update : " << endl;
	cin >> numberOfIndexBeUpdate;
	cout << "please insert new color that replace by old color : " << endl;
	cin >> appleColor;
	appleBox[numberOfIndexBeUpdate] = appleColor;

	cout << "-----------------------------------" << endl;
	cout << "congratulation your apple box is an update :" << endl;
	cout << "-----------------------------------" << endl;
	cout << "apple color by index 0 in apple box : " << appleBox[0] << endl;
	cout << "apple color by index 1 in apple box : " << appleBox[1] << endl;
	cout << "apple color by index 2 in apple box : " << appleBox[2] << endl;
	cout << "apple color by index 3 in apple box : " << appleBox[3] << endl;
	cout << "apple color by index 4 in apple box : " << appleBox[4] << endl;
	cout << "-----------------------------------" << endl;


	// Initializing multidimensional arrays
	int books [3][5];

	int bookInfo [5][3] = { {1, 2, 3} , {0, 1, 2}, {0, 0, 0}, {6, 7, 8}, {23, 7, 9} };

	cout << "show bookInfo array info : " << endl;
	cout << "---------------------------" << endl;
	cout << "bookInfo show information of block 0: " << bookInfo [0][0] << ", " << bookInfo[0][1] << ", " << bookInfo[0][2] << endl;
	cout << "bookInfo show information of block 1: " << bookInfo [1][0] << ", " << bookInfo[1][1] << ", " << bookInfo[1][2] << endl;
	cout << "bookInfo show information of block 2: " << bookInfo [2][0] << ", " << bookInfo[2][1] << ", " << bookInfo[2][2] << endl;
	cout << "bookInfo show information of block 3: " << bookInfo [3][0] << ", " << bookInfo[3][1] << ", " << bookInfo[3][2] << endl;
	cout << "bookInfo show information of block 4: " << bookInfo [4][0] << ", " << bookInfo[4][1] << ", " << bookInfo[4][2] << endl;
	cout << "---------------------------" << endl;

	// Declaring a dynamic array

	vector<int> dynamicArray (2);

	dynamicArray[0] = 155;
	dynamicArray[1] = -155;

	cout << "show dynameArray key" << endl;
	cout << "---------------------------" << endl;
	cout << "dynamicArray index 0 " << dynamicArray[0] << endl;
	cout << "dynamicArray index 1 " << dynamicArray[1] << endl;
	cout << "---------------------------" << endl;

	//show number of integer in array
	cout << "show number of integer in dynamicArray : " << dynamicArray.size() << endl;

	// now add a element to dynamic array
	dynamicArray.push_back(300);
	dynamicArray.push_back(-300);

	//show number of integer in array affter add new element with push_back funtion
	cout << "show number of integer in dynamicArray affter push_back : " << dynamicArray.size() << endl;

	cout << "show dynameArray key" << endl;
	cout << "---------------------------" << endl;
	cout << "dynamicArray index 0 " << dynamicArray[0] << endl;
	cout << "dynamicArray index 1 " << dynamicArray[1] << endl;
	cout << "dynamicArray index 2 " << dynamicArray[2] << endl;
	cout << "dynamicArray index 3 " << dynamicArray[3] << endl;
	cout << "---------------------------" << endl;


	// c-style store character in array
	// note: this is worked really like this code `cout << "Hello Guys" << endl;`
	// note: if add `'\0'` (null-terminating) in middle of an array will be mean that stop string processing at this point but don't affect the size of the array
	char cStyleChar [] = {'H', 'e', 'l', 'l', 'o',' ' ,'G', 'u', 'y', 's', '\0' };

	cout << "show cStyleChar store char : " << cStyleChar << endl; 
	cout << "show size of cStyleChar 	: " << sizeof(cStyleChar) << endl;


	// `'\0'` (null-terminating) in middel of cStyleCahr array
	cStyleChar [5] = '\0';
	cout << "show cStyleCahr store char : " << cStyleChar << endl;
	cout << "show size of cStyleChar 	: " << sizeof(cStyleChar) << endl;
	cout << "---------------------------" << endl;

	// add a sting and work with string
	string text ("hey, How are you from string!");
	cout << text << endl;

	// anather declaring string
	string myName =  "Adam";
	cout << "what is your name ? my name is " << myName << endl;
	string myFamily;
	cout << "please input your family : ";
	cin  >> myFamily;
	cout << "your name and family is : " << myName << " " << myFamily << endl;
	string fullname =  myName+myFamily;
	cout << "this info is for fun -> your length of Fullname is : " << fullname.length() << endl;

}	