#include "Binary_Tree.h"
#include <map>
#include <iterator>

string encoder();

int main() {
	Binary_Tree morseCodeTree;
	morseCodeTree.addLetterWrapper();

	cout << encoder();

	system("pause");
	return 0;
}

string encoder() {
	string letters = "ac"; // Variable that will store the letters we want to convert into Morse code
	string morseCode = ""; // Variable that will store the Morse code encoding 

	map <char, string> morse; // Map to hold all alphabetical characters with their respective Mores code representations

	morse['a'] = ".-";
	morse['b'] = "-...";
	morse['c'] = "-.-.";
	morse['d'] = "-..";
	morse['e'] = ".";
	morse['f'] = "..-.";
	morse['g'] = "--.";
	morse['h'] = "....";
	morse['i'] = "..";
	morse['j'] = ".---";
	morse['k'] = "-.-";
	morse['l'] = ".-..";
	morse['m'] = "--";
	morse['n'] = "-.";
	morse['o'] = "---";
	morse['p'] = ".--.";
	morse['q'] = "--.-";
	morse['r'] = ".-.";
	morse['s'] = "...";
	morse['t'] = "-";
	morse['u'] = "..-";
	morse['v'] = "...-";
	morse['w'] = ".--";
	morse['x'] = "-..-";
	morse['y'] = "-.--";
	morse['z'] = "--..";

	// Change all characters in the letters variable into Morse code, and then store that into the morseCode variable
	for (int i = 0; i < letters.length(); i++) { 
		for (map<char, string>::iterator it = morse.begin(); it != morse.end(); ++it) {
			if (letters[i] == it->first)
				morseCode = morseCode + it->second + " ";
		}
	}

	// Return the Morse code representation of the characters
	return morseCode;
}