#include "Binary_Tree.h"

Binary_Tree::Binary_Tree() {
	root = NULL;
	left = NULL;
	right = NULL;
	letter = ' ';
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