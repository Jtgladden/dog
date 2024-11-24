#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

using namespace std;

int main() {

  const char dog[] = "      / \\__\n"
                     "     (    @\\___\n"
                     "     /         O\n"
                     "    /   (_____/\n"
                     "   /_____/   U\n"
                     "  /           \\\n"
                     " /             \\\n"
                     "|               |\n"
                     " \\_           _/\n"
                     "   \\_________/\n";
  fstream MyFile;
  int count;

  cout << "How many Dog?" << endl;
  cin >> count;

  for (int i = 1; i < count; i++) {

    MyFile.open("dogger_" + to_string(i) + ".txt", fstream::out);

    // This prints the dog to a file
    if (MyFile.is_open()) {
      MyFile << dog << endl;
      MyFile.close();
    }
  }
  MyFile.clear();

  string line;
  streampos savedPos = MyFile.tellp();

  for (int i = 1; i < count; i++) {
    cout << "Iteration: " << i << endl;
    MyFile.open("dogger_" + to_string(i) + ".txt");

    if (MyFile.is_open()) {
      cout << "File opened" << endl;

      savedPos = MyFile.tellp();
      while (getline(MyFile, line)) {
        MyFile.seekp(savedPos);
        for (int j = 1; j < i; j++) {
          MyFile << " ";
          cout << "Space Printed for the " << j << "th time" << endl;
        }
        if (MyFile << line << endl)
          cout << "line printed: " << line << endl;
      }
    }
    MyFile.close();
    MyFile.clear();
  }

  return 0;
}
