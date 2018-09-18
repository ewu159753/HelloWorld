#pragma once //essentially the same thing as header guards. 
//this is not supported by all compilers
//start of the header guard. ADD_H can honestly be anything that makes 1/2 a gram of sense
//the header guard protects you from defining something twice and getting an error
#ifndef ADD_H //this says if add is not defined
#define ADD_H

//this is the where the content and all the declarations go
int add(int x, int y);

//end of the header
#endif //basically says end of the if loop

