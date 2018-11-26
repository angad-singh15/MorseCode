#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <iterator>
#include <string>
using namespace std;

class Binary_Tree {

public:
	Binary_Tree* root; // The first node in the tree
	Binary_Tree * left; // Node immediately left of the current
	Binary_Tree * right; // Node immediately right of the current
	char letter; // This is the data point that each node stores

	Binary_Tree(); // Default Constructor
	char getLetter(); // Return letter of the current node
	char getLeftLetter(); // Return letter of the node immediately left
	char getRightLetter(); // Return letter of the node immediately right
};