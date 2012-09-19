//*****************
//Jacob C. Ting
//CS 287
//Tests
//*****************
// Reading a text file.
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main () {

  vector<string> raffle;
  string line;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
      getline (myfile,line);
      raffle.push_back(line);
    }
    myfile.close();
  }

  else cout << "Unable to open file";

  cout << "The contents of fifth are: " << endl;
  for (vector<string>::iterator it = raffle.begin(); it != raffle.end(); it++)
  cout << *it << " " << endl;

  string str = raffle[1];
  cout << str;
  cout << endl;

  return 0;
}
