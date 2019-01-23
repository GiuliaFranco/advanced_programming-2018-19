#include <iostream>
#include "utility.h"
#include <src1.h>

static inline std::string greetings(){
  std::string s{"Welcome\n"};
  return s;
}


void print_upper(const std::string& s){
  std::cout << to_upper(greetings()) << to_upper(s) << std::endl;
}