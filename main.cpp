#include <fstream>
#include <iostream>
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

  for (int i; i < 10; i++) {

    MyFile.open("dogger_" + to_string(i) + ".txt", fstream::out);

    // This prints the dog to a file
    if (MyFile.is_open()) {
      MyFile << dog << endl;
      cout << "It Worked" << endl;
      MyFile.close();
    }
  }

  cout << dog << endl;

  return 0;
}
