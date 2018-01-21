#include <iostream>

using namespace std;

// declaring `constexpr` function befor `main` function
constexpr int numberOfRightHandFinger();
constexpr int numberOfLeftHandFinger();
constexpr int numberOfHandFinger();

// declaring `typedef` 
typedef unsigned int U32;


//declaring enum 
enum RGB {
	red = 16711680,
	green = 65280,
	blue = 255,
};

int main(int argc, char* argv[])
{
	// use of `typedef`
	U32 apples = 32;


	// declaring and use of `const` 
	const float pi =  3.14;
	const int numberOfDaysInWeek = 7;
	const int numberOfHoursInDayAndNight = 24;



	cout << "result for use of  `typedef` apples number is : " << apples << endl;
	cout << "result for use of  `const` pi is : " << pi << endl;
	cout << "result for use of  `const` number of days in week is : " << numberOfDaysInWeek << endl;
	cout << "result for use of  `const` number of Hours in day and night is : " << numberOfHoursInDayAndNight << endl;
	cout << "result for use of  `constexpr` number of right hand finger is : " << numberOfRightHandFinger() << endl;
	cout << "result for use of  `constexpr` number of left hand finger is : " << numberOfLeftHandFinger() << endl;
	cout << "result for use of  `constexpr` number of hand finger is : " << numberOfHandFinger() << endl;
	cout << "result for use of  `enum` int number of red color is :  " << red << endl;
	cout << "result for use of  `enum` int number of green color is :  " << green << endl;
	cout << "result for use of  `enum` int number of blue color is :  " << blue << endl;

}


// declaring of `constexpr`
constexpr int numberOfRightHandFinger() 
{ 
	return 5;
}
constexpr int numberOfLeftHandFinger()
{ 
	return 5; 
}
constexpr int numberOfHandFinger() 
{ 
	return numberOfRightHandFinger() + numberOfRightHandFinger();
}
