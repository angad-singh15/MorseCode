#include "Morse_Tree.h"
#include "Binary_Tree.h"

Morse_Tree::Morse_Tree() {
	code = "";
}

void Morse_Tree::addLetter(char letter, string code, Binary_Tree * binaryTree) {
	Binary_Tree * temp = binaryTree; // Create a temp pointer to traverse the tree and modify it
	root = binaryTree;  // used later for traversing

	// Using the morse code variable, traverse through the tree until the correct position to insert the letter is found
	for (int i = 0; i < code.length(); i++) {
		if (code[i] == '.') {
			// If a tree (letter or NULL) is already here, continue past it
			if (temp->left != NULL) 
				temp = temp->left;

			// If a tree (letter or NULL) does NOT exist, create one, set it to NULL, and continue on
			else {
				temp->left = new Binary_Tree();
				temp = temp->left;
			}
		}

		// Do the same for traversing right
		else if (code[i] == '_') {
			if (temp->right != NULL)
				temp = temp->right;

			else {
				temp->right = new Binary_Tree();
				temp = temp->right;
			}
		}
	}

	// Set the letter of the node to the letter we want it to be, now that we are at the correct position in the tree
	// Also update the original binary tree with the new addition
	temp->letter = letter; 
	binaryTree = temp;
}

void Morse_Tree::addLetterWrapper() {
	// Create an input stream and open the morse code file with it
	ifstream binaryFile;
	binaryFile.open("morse.txt");

	// Place holder variables
	char letter;
	string code;

	// Continue reading from the file until the EOF is reached
	while (binaryFile.good()) { 
		binaryFile >> letter;
		binaryFile >> code;

		// Call the addLetter function, and give it the variables read in from the file as well as the calling object (this)
		addLetter(letter, code, this); 

	}

	// Close the file, now that we're done with it
	binaryFile.close(); 
}

string Morse_Tree::decode(string str) {
	Binary_Tree* current = root; // Setting the current node to root of tree for traversing
	string result = "";  // Output string

	// Search for the morse code 
	for (int i = 0; i <= str.size(); i++) {
		// Traversing left
		if (str[i] == '.') {
			// If left node is not NULL (has a letter) 
			if (current->left != NULL) 
				current = current->left; // Get the left subtree

			// If left node is empty, make a new one, set it to NULL, and continue on
			else { 
				current->left = new Binary_Tree();
				current = current->left;
			}
		}
		// Traversing right
		else if (str[i] == '_') {
			if (current->right != NULL)
				current = current->right;

			// If right node is empty, make a new one, set it to NULL, and continue on
			else {
				current->right = new Binary_Tree(); 
				current = current->right;
			}
		}
		// Else just append the current letter to the output string
		else {
			result += (current->getLetter());
			current = root;  // Go back to the root node 

		}
	}

	result += (current->getLetter()); // Append the current letter to the output string

	return result;
}

string Morse_Tree::encoder(string str) {
	ifstream morseFile; // Input stream
	morseFile.open("morse.txt"); // Our file

	char morseChar; // Variable to hold the letter from the text file
	string morseRep; // Variable to hold the Morse code representation of the letter from the text file
	string morseCode = ""; // Variable that will store the Morse code encoding (will be what we print out onto the screen)
	map <char, string> morse; // Map to hold all alphabetical characters with their respective Mores code representations

	// Read in all the data from the file
	while (morseFile.good()) { 
		morseFile >> morseChar;
		morseFile >> morseRep;

		// Add the letter as a key and the Morse code representation as a value into the map
		morse[morseChar] = morseRep;
	}

	// Change all characters in the letters variable into Morse code, and then store that into the morseCode variable
	for (int i = 0; i < str.length(); i++) {
		for (map<char, string>::iterator it = morse.begin(); it != morse.end(); ++it) {
			if (str[i] == it->first)
				morseCode = morseCode + it->second + " ";
		}
	}

	// Close the file, now that we're done with it
	morseFile.close();

	// Return the Morse code representation of the characters
	return morseCode;
}