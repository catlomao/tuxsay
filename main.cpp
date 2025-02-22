#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "what do you want tux to say?" << endl; return 1;}
    string m = argv[1];

    string tux = R"(
 ----------
)" + m + R"(
 ----------
   \
    \
        .--.
       |o_o |
       |:_/ |
      //   \ \
     (|     | )
    /'\_   _/`\
    \___)=(___/
    )";

    cout << tux << endl;
    return 0;
}
