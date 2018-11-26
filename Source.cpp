#include "Binary_Tree.h"
#include "Morse_Tree.h"

int main() {
	Morse_Tree morseCodeTree;
	morseCodeTree.addLetterWrapper();

	cout << morseCodeTree.decode("._ _. __. ._ _..") << endl;
	cout << morseCodeTree.encoder("ac") << endl;

	system("pause");
	return 0;
}