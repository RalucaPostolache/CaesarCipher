#pragma once
#ifndef CAESAR
#define CAESAR

//using namespace System;
using namespace std;

class Caesar {
public:
	Caesar();				//default constructor, sets shift data to 0
	Caesar(int overShift);	//overload constructor, sets shift data to the value of its argument mod 26
	string encode(string);	//encode method, takes a string and returns a string encoded
	string decode(string);	//decode method, takes a string and returns a string decoded

private:
	int shift;				//private data member shift

};
#endif #pragma once
