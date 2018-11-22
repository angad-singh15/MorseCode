#include <iostream>
#include <fstream>
using namespace std;

struct Binary_Tree {
	Binary_Tree * left = NULL;
	Binary_Tree * right = NULL;
	char root = ' ';

	Binary_Tree(char treeRoot) {
		root = treeRoot;
	}
};

void buildTree();

int main() {
	buildTree();

	system("pause");
	return 0;
}

// This cannot be correct. Until I figure out how to implement using the file, this will be hardcoded.
// Use morseTreeRoot and left/right to traverse the tree. 
// Root will return the letter at each depth and current branch.
void buildTree() {
	Binary_Tree * morseTreeRoot = new Binary_Tree(' ');
	Binary_Tree * morseA = new Binary_Tree('a');
	Binary_Tree * morseB = new Binary_Tree('b');
	Binary_Tree * morseC = new Binary_Tree('c');
	Binary_Tree * morseD = new Binary_Tree('d');
	Binary_Tree * morseE = new Binary_Tree('e');
	Binary_Tree * morseF = new Binary_Tree('f');
	Binary_Tree * morseG = new Binary_Tree('g');
	Binary_Tree * morseH = new Binary_Tree('h');
	Binary_Tree * morseI = new Binary_Tree('i');
	Binary_Tree * morseJ = new Binary_Tree('j');
	Binary_Tree * morseK = new Binary_Tree('k');
	Binary_Tree * morseL = new Binary_Tree('l');
	Binary_Tree * morseM = new Binary_Tree('m');
	Binary_Tree * morseN = new Binary_Tree('n');
	Binary_Tree * morseO = new Binary_Tree('o');
	Binary_Tree * morseP = new Binary_Tree('p');
	Binary_Tree * morseQ = new Binary_Tree('q');
	Binary_Tree * morseR = new Binary_Tree('r');
	Binary_Tree * morseS = new Binary_Tree('s');
	Binary_Tree * morseT = new Binary_Tree('t');
	Binary_Tree * morseU = new Binary_Tree('u');
	Binary_Tree * morseV = new Binary_Tree('v');
	Binary_Tree * morseW = new Binary_Tree('w');
	Binary_Tree * morseX = new Binary_Tree('x');
	Binary_Tree * morseY = new Binary_Tree('y');
	Binary_Tree * morseZ = new Binary_Tree('z');

	morseTreeRoot->left = morseE;
	morseTreeRoot->left->left = morseI;
	morseTreeRoot->left->left->left = morseS;
	morseTreeRoot->left->left->left->left = morseH;
	morseTreeRoot->left->left->left->right = morseV;
	morseTreeRoot->left->left->right = morseU;
	morseTreeRoot->left->left->right->left = morseF;
	morseTreeRoot->left->right = morseA;
	morseTreeRoot->left->right->left = morseR;
	morseTreeRoot->left->right->left->left = morseL;
	morseTreeRoot->left->right->right = morseW;
	morseTreeRoot->left->right->right->right = morseJ;
	morseTreeRoot->left->right->right->left = morseP;
	morseTreeRoot->right = morseT;
	morseTreeRoot->right->left = morseN;
	morseTreeRoot->right->left->right = morseK;
	morseTreeRoot->right->left->right->right = morseY;
	morseTreeRoot->right->left->left = morseD;
	morseTreeRoot->right->left->left->right = morseX;
	morseTreeRoot->right->left->left->left = morseB;
	morseTreeRoot->right->right = morseM;
	morseTreeRoot->right->right->left = morseG;
	morseTreeRoot->right->right->left->left = morseZ;
	morseTreeRoot->right->right->left->right = morseQ;
	morseTreeRoot->right->right->right = morseO;
	morseTreeRoot->right->left->right->left = morseC;
}