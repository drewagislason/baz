/**************************************************************************************************
  baz.h
  Copyright 2024 Drew Gislason
  license: <https://mit-license.org>
**************************************************************************************************/
#ifndef BAZ_H
#define BAZ_H

// allows source to be compiled with C or C++ compilers
#ifdef __cplusplus
  extern "C" {
#endif

#define SZ_BAZ_VER  "1.0"

int baz_square(int number);

#ifdef __cplusplus
  }
#endif

#endif // BAZ_H
