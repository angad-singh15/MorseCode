#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Binary_Tree {

public:
	Binary_Tree * left;
	Binary_Tree * right;
	Binary_Tree* root;
	string code;
	char letter;
	Binary_Tree(); // Default Constructor
	char getLetter(); // Return letter of current node
	char getLeftLetter(); // Return letter of node to the left
	char getRightLetter(); // Return letter of node to the right
	void addLetter(char letter, string code, Binary_Tree * binaryTree); // Function to add the letters to the tree
	void addLetterWrapper(); // Wrapper function to call the addLetter function
	string decode(string str);
};