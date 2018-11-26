#pragma once
#include "Binary_Tree.h"

class Morse_Tree : Binary_Tree {
public:
	string code; // Variable that will hold the Morse code

	Morse_Tree(); // Default constructor
	void addLetter(char letter, string code, Binary_Tree * binaryTree); // Function that adds letters to the Morse Tree
	void addLetterWrapper(); // Wrapper function to call the add letter function
	string decode(string str); // Function that changes Morse code to letters
	string encoder(string str); // Function that changes letters into Morse code
};