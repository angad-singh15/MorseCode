#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Binary_Tree {

public:
	Binary_Tree * left;  //left node
	Binary_Tree * right; //right node
	Binary_Tree* root;  //root of the tree
	string code;
	char letter;
	Binary_Tree(); // Default Constructor
	char getLetter(); // Return letter of current node
	char getLeftLetter(); // Return letter of node to the left
	char getRightLetter(); // Return letter of node to the right
};