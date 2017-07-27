#include <iostream>
#include <string>
#include <sstream>
int main(int argc, char *argv[]) {
  std::stringstream cmd{""};
  std::string resp{" "};
  cmd << "linux-bash -c \"/home/nil/.opam/system/bin/ocamlmerlin";
  for (int i = 1; i < argc; i++) {
    cmd << resp << argv[i];
  }
  cmd << "\"";
  printf(cmd.str().c_str());
  system(cmd.str().c_str());

  return 0;
}

//bash -c "/home/nil/.opam/system/bin/ocamlmerlin --help"