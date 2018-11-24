#include "Binary_Tree.h"

Binary_Tree::Binary_Tree() {
	left = NULL;
	right = NULL;
	code = "";
	letter = ' ';
}

void Binary_Tree::addLetter(char letter, string code, Binary_Tree * binaryTree) {
	Binary_Tree * temp = binaryTree; // Create a temp pointer to traverse the tree and modify it
	root = binaryTree;  //used later for traversing
	// Using the morse code variable, traverse through the tree until the correct position to insert the letter is found
	for (int i = 0; i < code.length(); i++) {
		if (code[i] == '.') {
			if (temp->left != NULL) // If a tree (letter or NULL) is already here, continue past it
				temp = temp->left;

			else { // If a tree (letter or NULL) does NOT exist, create one, set it to NULL, and continue on
				temp->left = new Binary_Tree();
				temp = temp->left;
			}
		}
		else if (code[i] == '_') { // Do the same for traversing right
			if (temp->right != NULL)
				temp = temp->right;

			else {
				temp->right = new Binary_Tree();
				temp = temp->right;
			}
		}
	}

	temp->letter = letter; // Set the letter of the node to the letter we want it to be, now that we are at the correct position in the tree
	binaryTree = temp; // Update the original binary tree with the new addition
}

void Binary_Tree::addLetterWrapper() {
	// Create an input stream and open the morse code file with it
	ifstream binaryFile;
	binaryFile.open("morse.txt");

	// Place holder variables
	char letter;
	string code;

	while (binaryFile.good()) { // Continue reading from the file until the EOF is reached
		binaryFile >> letter;
		binaryFile >> code;

		addLetter(letter, code, this); // Call the addLetter function, and give it the variables read in from the file as well as the calling object (this)

	}

	binaryFile.close(); // Close the file, now that we're done with it
}

char Binary_Tree::getLetter() {
	if (this == NULL) {
		cout << "Current is NULL. Returning empty char." << endl;
		return ' ';
	}

	return this->letter;
}

char Binary_Tree::getLeftLetter() {
	if (this->left == NULL) {
		cout << "Left is NULL. Returning empty char." << endl;
		return ' ';
	}

	return this->left->letter;
}

char Binary_Tree::getRightLetter() {
	if (this->right == NULL) {
		cout << "Right is NULL. Returning empty char." << endl;
		return ' ';
	}

	return this->right->letter;
}

string Binary_Tree::decode(string str) {

	Binary_Tree* current = root; //setting the current node to root of tree for traversing
	string result = "";  //output string

	for (int i = 0; i <= str.size(); i++) { //search for the morse code 

		if (str[i] == '.') {
			if (current->left != NULL) // If left node is not null(has a letter) 
				current = current->left; //get the left subtree

			else { // If left node is empty, make a new one, set it to NULL, and continue on
				current->left = new Binary_Tree();
				current = current->left;
			}
		}
		else if (str[i] == '_') {  // traversing right
			if (current->right != NULL)  // If left node is not null(has a letter) 
				current = current->right;    //get the right subtree

			else {
				current->right = new Binary_Tree();   // If right node is empty, make a new one, set it to NULL, and continue on
				current = current->right;
			}
		}
		else {
			result += (current->getLetter());  //else just append the current letter to the output string
			current = root;  //go back to the root node 

		}
	}
	result += (current->getLetter()); //append the current letter to the output string

	return result;
}