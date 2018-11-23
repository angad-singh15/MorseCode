#include "Binary_Tree.h"
#include <iostream>
using namespace std;

int main() {
	Binary_Tree morseCodeTree;
	morseCodeTree.addLetterWrapper();

	string str = "._ _. __. ._ _..";

	cout<<morseCodeTree.decode(str);
	system("pause");
	return 0;
}