//cl ocamlmerlin.cpp

#include <iostream>
#include <string>
#include <sstream>
int main(int argc, char *argv[]) {
  std::stringstream cmd{""};
  std::string resp{" "};
  cmd << "bash -c \"/path/to/ocamlmerlin";
  for (int i = 1; i < argc; i++) {
    cmd << resp << argv[i];
  }
  cmd << "\"";
  system(cmd.str().c_str());
  return 0;
}