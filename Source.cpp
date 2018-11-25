#include "Binary_Tree.h"
#include "Morse_Tree.h"


int main() {
	
	MorseTree morseCodeTree;
	
	morseCodeTree.addLetterWrapper();  

	string str = "._ _. __. ._ _..";
	
	cout << morseCodeTree.decode(str)<<endl;
	cout << morseCodeTree.encoder("ac") << endl;

	system("pause");
	return 0;
}

