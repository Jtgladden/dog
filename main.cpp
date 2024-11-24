#include <chrono>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <thread>

using namespace std;

int main() {
  const string dog[] = {"      / \\__\n",      "     (    @\\___\n",
                        "     /         O\n",  "    /   (_____/\n",
                        "   /_____/   U\n",    "  /           \\\n",
                        " /             \\\n", "|               |\n",
                        " \\_           _/\n", "   \\_________/\n"};
  int size = sizeof(dog) / sizeof(dog[0]);
  int count = 10;
  for (int x = 0; x < count; x++) {
    this_thread::sleep_until(chrono::system_clock::now() + chrono::seconds(1));
    system("clear");
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < x; j++) {
        cout << "\t";
      }
      cout << dog[i];
    }
  }

  return 0;
}
