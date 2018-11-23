//
//  main.cpp
//  project2
//
//  Created by 이승호 on 11/21/18.
//  Copyright © 2018 이승호. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<char,string> morse;
    
    morse['a'] = "._";
    morse['b'] = "_...";
    morse['c'] = "_._.";
    morse['d'] = "_..";
    morse['e'] = ".";
    morse['f'] = ".._.";
    morse['g'] = "__.";
    morse['h'] = "....";
    morse['i'] = "..";
    morse['j'] = ".___";
    morse['k'] = "_._";
    morse['l'] = "._..";
    morse['m'] = "__";
    morse['n'] = "_.";
    morse['o'] = "___";
    morse['p'] = ".__.";
    morse['q'] = "__._";
    morse['r'] = "._.";
    morse['s'] = "...";
    morse['t'] = "_";
    morse['u'] = ".._";
    morse['v'] = "..._";
    morse['w'] = ".__";
    morse['x'] = "_.._";
    morse['y'] = "_.__";
    morse['z'] = "__..";
    
    map<char,string>::iterator itr;
    for(itr = morse.begin(); itr != morse.end(); ++itr){
        if(itr->first == letter){
            morseCode = morseCode + itr->second;
        }
        //cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    cout << endl;
    
    return 0;
}
