#include "a1.h"
#include "gflags/gflags.h"
#include <iostream>

DECLARE_string(message);

A1::A1(/* args */) {
  std::cout << "a1::message = " << FLAGS_message << std::endl;
}

A1::~A1() {}
