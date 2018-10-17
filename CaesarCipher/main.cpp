#include <iostream>
#include <fstream>
#include <string>
#include "Caesar.h"

using namespace std;

int main()
{

	string wordsToEncode[100];
	string wordsToDecode[100];
	string encodedWords[100];
	string decodedWords[100];
	Caesar driver;
	int i = 0;
	string task;
	cout << "Would you like to encode (enter 'E'), decode (enter 'D'), or quit (enter 'Q')?" << endl;
	cin >> task;
	while (true)
	{
		if (task == "E")
		{ //encode words
			cout << "Input the words to encode, max 100, end with #" << endl;
			while (i<100)
			{
				cin >> wordsToEncode[i];
				encodedWords[i] = driver.encode(wordsToEncode[i]);
				if (i == 0)
				{
					cout << "Words Encoded:";
				}
				cout << encodedWords[i];
				i++;
			}

		}
		if (task == "D")
		{ //decode words
			cout << "Input the words to decode, max 100, end with #" << endl;
			while (i<100)
			{
				cin >> wordsToDecode[i];
				decodedWords[i] = driver.decode(wordsToDecode[i]);
				if (i == 0)
				{
					cout << "Words Decoded:";
				}
				cout << decodedWords[i];
				i++;
			}

		}
		if (task == "Q")
		{ //quit
			break;
		}
		else
		{ //invalid input
			continue;
		}
		cout << "Would you like to encode (enter 'E'), decode (enter 'D'), or quit (enter 'Q')?" << endl;
		cin >> task;
	}

	return 0;
}