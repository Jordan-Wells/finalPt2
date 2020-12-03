#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include "function.h"

using namespace std;

int countLine(string pName){
    int count = 0;
    ifstream ins(pName);
    for(char x: pName){
        if(x == '\n'){
            count++;
        }
    }
    ins.close();
    return count;
}

int countChar(string pName){
    int count = 0;
    for(char x: pName){
        if(isalpha(x)){
            count++;
        }
    }
    return count;
}

int main(int argc, char **argv){
    string input1 = (argv[1]) ? argv[1] : "Ohio University";
    string input2 = (argv[2]) ? argv[2] : "Athens";
    cout << "Number of Lines: " << countLine(input1) << endl;
    cout << "Number of characters: " << countChar(input2) << endl;
    return 0;
    
}
