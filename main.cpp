#include <iostream>

#include <iostream>
#include <string>
using namespace std;

int GetNumOfNonWSCharacters(const string usrStr) {
   int count = 0;
   unsigned i = 0;



   return count;
}

int GetNumOfWords(const string usrStr) {
   int count = 0;
   unsigned i = 0;



   return count;
}

int FindText(const string toFind, string usrStr) {
   int count = 0;
   int where = 0;



   return count;
}

void ReplaceExclamation(string& usrStr) {
   unsigned i = 0;


}

void ShortenSpace(string& usrStr) {
   unsigned i = 0;
   string tmp;


   return;
}


char PrintMenu(string& usrStr) {
   char menuOp = ' ';
   string toFind;
   int numFinds = 0;



   if (menuOp == 'c') {
      cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(usrStr) << endl
      << endl;
      menuOp = ' ';
   }

   else if (menuOp == 'w') {
      cout << "Number of words: " << GetNumOfWords(usrStr) << endl << endl;
      menuOp = ' ';
   }

   else if (menuOp == 'f') {
      cin.ignore();
      cout << "Enter a word or phrase to be found:" << endl;
      getline(cin, toFind);

      numFinds = FindText(toFind, usrStr);

      cout << "\"" << toFind << "\"" << " instances: "
      << numFinds << endl << endl;
      menuOp = ' ';
   }

   else if (menuOp == 'r') {
      ReplaceExclamation(usrStr);
      cout << "Edited text: " << usrStr << endl << endl;
      menuOp = ' ';
   }

   else if (menuOp == 's') {
      ShortenSpace(usrStr);
      cout << "Edited text: " << usrStr << endl << endl;
      menuOp = ' ';
   }

   return menuOp;
}

int main() {
   string userString;
   char menuChoice = ' ';

   cout << "Enter a sample text:" << endl;
   getline(cin, userString);
   cout << endl;

   cout << "You entered: " << userString << endl << endl;

   while (menuChoice != 'q') {

   }

   return 0;
}