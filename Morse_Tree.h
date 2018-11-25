#pragma once
#include "Binary_Tree.h"

class MorseTree : public Binary_Tree{
public:
	MorseTree() {};  //constructor
	string encoder(string str);  //Encodes a morse code message 
	void addLetter(char letter, string code, Binary_Tree * binaryTree); // Function to add the letters to the tree
	void addLetterWrapper(); // Wrapper function to call the addLetter function
	string decode(string str);  //Decodes a morse code message 
};