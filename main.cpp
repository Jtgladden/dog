#include <fstream>
#include <iostream>

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

  MyFile.open("dogger.txt");

  // This prints the dog to a file
  if (MyFile.is_open()) {
    MyFile << dog << endl;
    cout << "It Worked" << endl;
    MyFile.close();
  }

  cout << dog << endl;

  return 0;
}
