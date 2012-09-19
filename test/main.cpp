//*****************
//Jacob C. Ting
//CS 287
//Tests
//*****************
// Reading a text file.
#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

int main () {
  list<string> contestants;
  string line;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
      getline (myfile,line);
      cout << line << endl;
    }
    myfile.close();
  }

  else cout << "Unable to open file";
  cout << contestants;
  return 0;
}
