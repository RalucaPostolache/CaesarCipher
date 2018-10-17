#include <iostream>
#include "Caesar.h"
using namespace std;

//the default constructor
Caesar::Caesar() {
	shift = 3;
}

//overload constructor
Caesar::Caesar(int overShift) {
	shift = overShift % 26;
}

//encode method
string Caesar::encode(string words) {
	string wordChar = words;
	for (int i = 0; i<wordChar.length(); i++)
	{
		if (wordChar[i] >= 65 && wordChar[i] <= 90)
		{ //if character is an uppercase letter, encode it
			wordChar[i] += shift;
			if (wordChar[i]>90)
			{ //if character went over 90
				wordChar[i] = (wordChar[i] - 90) + 65;
			}
		}
		else if (wordChar[i] >= 97 && wordChar[i] <= 122)
		{ //else if character is a lowercase letter, encode it
			wordChar[i] += shift;
			if (wordChar[i]>122)
			{ //if character went over 90
				wordChar[i] = (wordChar[i] - 122) + 97;
			}
		}
		else
		{ //character is a non letter, transfer as is

		}
	}
	return wordChar;
}

//decode method
string Caesar::decode(string words) {
	string wordChar = words;
	for (int i = 0; i < wordChar.length(); i++)
	{
		if (wordChar[i] >= 65 && wordChar[i] <= 90)
		{ //if character is an uppercase letter, decode it
			wordChar[i] -= shift;
			if (wordChar[i] < 65)
			{ //if character went under 65
				wordChar[i] = (65 - wordChar[i]) + 65;
			}
		}
		else if (wordChar[i] >= 97 && wordChar[i] <= 122)
		{ //else if character is a lowercase letter, decode it
			wordChar[i] += shift;
			if (wordChar[i] > 122)
			{ //if character went over 90
				wordChar[i] = (122 - wordChar[i]) + 97;
			}
			else
			{ //character is a non letter, transfer as is

			}
		}
		
	}
	return wordChar;
}