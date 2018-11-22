#include "Binary_Tree.h"

Binary_Tree::Binary_Tree() {
	left = NULL;
	right = NULL;
	code = "";
	letter = ' ';
}

void Binary_Tree::addLetter(char letter, string code, Binary_Tree * binaryTree) {
	Binary_Tree * temp = binaryTree; // Create a temp pointer to traverse the tree and modify it

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