#pragma once
#include <string>
#include <fstream>
using namespace std;

class Binary_Tree {
private:
	Binary_Tree * left;
	Binary_Tree * right;
	string code;
	char letter;

public:
	Binary_Tree(); // Default Constructor
	void addLetter(char letter, string code, Binary_Tree * binaryTree); // Function to add the letters to the tree
	void addLetterWrapper(); // Wrapper function to call the addLetter function
};