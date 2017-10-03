// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int countletters(char myphr[]);


int main() {
	char myphrase[100];
	
	cout << "Enter Phrase" << endl;
	gets_s(myphrase);

	int c = countletters(myphrase);

	cout << "You have " << c << " letters" << endl;

	return 0;

}

int countletters(char myphr[100]) {

	int count = 0;

	for (int i = 0; i < strlen(myphr); i++) {
		if (myphr[i] != ' ' && myphr[i] != '.' && myphr[i] != '!')
		{
			count += 1;
		}

	}


	return count;
}


