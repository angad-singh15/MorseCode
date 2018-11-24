#include "Binary_Tree.h"
#include <map>
#include <iterator>
string encoder();

int main() {
	Binary_Tree morseCodeTree;
	morseCodeTree.addLetterWrapper();

	string str = "._ _. __. ._ _..";

	cout << morseCodeTree.decode(str);

	cout << encoder();
	system("pause");
	return 0;
}

string encoder() {
	ifstream morseFile;
	morseFile.open("morse.txt");

	char morseChar; // Variable to hold the letter from the text file
	string morseRep; // Variable to hold the Morse code representation of the letter from the text file

	map <char, string> morse; // Map to hold all alphabetical characters with their respective Mores code representations


	while (morseFile.good()) {
		morseFile >> morseChar;
		morseFile >> morseRep;

		morse[morseChar] = morseRep; // Add the letter as a key and the Morse code representation as a value into the map
	}

	string letters = "ac"; // Variable that will store the letters we want to convert into Morse code
	string morseCode = ""; // Variable that will store the Morse code encoding (will be what we print out onto the screen)

	// Change all characters in the letters variable into Morse code, and then store that into the morseCode variable
	for (int i = 0; i < letters.length(); i++) {
		for (map<char, string>::iterator it = morse.begin(); it != morse.end(); ++it) {
			if (letters[i] == it->first)
				morseCode = morseCode + it->second + " ";
		}
	}

	morseFile.close();

	// Return the Morse code representation of the characters
	return morseCode;
}