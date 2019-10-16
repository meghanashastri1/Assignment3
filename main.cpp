#include <cstdlib>
#include <iostream>
#include <fstream>
#include "GenStack.h"

using namespace std;

int main(int argc, char** argv) {
  //fileName user enters
  string fileName;
  //user input on whether they want to analyze a file or not
  string userInput;
  //each line in the file
  string line;
  //starting count of lines in a file
  int lineNum = 0;
  //start with a basic genstack of char type
  GenStack<char> delimStack(20);


  while (true) {
    cout << "Do you want to enter a file to analyze? Enter 'yes' or 'no' " << endl;
    cin >> userInput;
    if (userInput == "no") {
      break;  //break out of while loop if user doesn't want to analyze a file
    }
    cout << "input a file to analyze" << endl;
    cin >> fileName;
    ifstream file(fileName);
    file.open()
    while(getline(file, line)) {
      lineNum += 1;
      //lineCount += 1;
      //for each character in line
      //help from Peter Chen
      for (char c : line) {
        if (c == '{' || c == '[' || c == '(') {
          delimStack.push(c);
        } else if (c == '}' || c == ']' || c == ')') {

          if (delimMatch(c) == delimStack.peek()) {
            //pops closing delimiter from the stack so that there can be a new opening and closing pair to analyze
            delimStack.pop();
          } else {
            cout << "there is an error at line " << lineNum << "the delimiter " << c << "needs a closing pair of " << delimStack.pop() << endl;
          }
          return false;
        }
      }
    }
    if (delimStack.isEmpty()){
      cout << "file is done being analyzed" << endl;
    }
    file.close();
  }
  return 0;
}

char delimMatch(char delimiter) {
  if (delimiter == '{') {
    return '}';
  } else if (delimiter == '(') {
    return ')';
  } else if (delimiter == '[') {
    return ']';
  } else if (delimiter == '}') {
    return '{';
  } else if (delimiter == ')') {
    return '(';
  } else if (delimiter == ']') {
    return '[';
  } else {
    cout << "delimiters do not match" << endl;
  }
}
