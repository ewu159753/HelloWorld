// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream> //the <> signifies that the library is already built in
#include "Add.h" //this essentially imports everything declared in add.h
//the "" denotes that the header file is user made. we need to add .h for non std library shit
//we can opt to load microsoft symbols but it makes the program significantly slower
void DoNothing(const int &v)
{
	//The DoNothing function makes it so that the cpu thinks v is being used
}

//int add(int x, int y); //this would let us access the add funct defined in adding

int main()
{
	//v is uninitialized or has no value
	//it is wise to try to avoid this as it can cause errors
	int v;
	DoNothing(v);
	std::cout << "Enter a value:"; 
	std::cin >> v; //takes a value from the console and stores it in v
	// the arrows are in the other direction as the input goes into v
    //std::cout << "Hello World!\n";
	v = add(v, 2);
	std::cout << v<< " "<<
		sizeof(size_t);
	return 10;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
/*
this is a comment yeet xd lmaozhidong
*/

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
