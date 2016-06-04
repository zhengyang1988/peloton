//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// main.cpp
//
// Identification: src/main/main.cpp
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#include <unistd.h>
#include <iostream>

#include "common/macros.h"
#include "brain/sample.h"

/*
 * Any Postgres server process begins execution here.
 */
int main(UNUSED_ATTRIBUTE int argc, UNUSED_ATTRIBUTE char *argv[]) {
  printf("foo\n");

  peloton::brain::Sample sample(2);
  std::cout << sample;

  return 0;
}