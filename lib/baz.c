/**************************************************************************************************
  baz.c - A simple math program to demonstrate features of flymake and flydoc
  Copyright 2024 Drew Gislason
  license: <https://mit-license.org>
**************************************************************************************************/
#include "baz.h"
#include "qux.h"

/*!------------------------------------------------------------------------------------------------
  @defgroup baz square numbers (integers)

  Does not detect overflow
*///-----------------------------------------------------------------------------------------------

/*!------------------------------------------------------------------------------------------------
  square a single number

  @param    number   a number
  @return   square of number, that is number * number
*///-----------------------------------------------------------------------------------------------
int baz_square(int number)
{
  return qux_power(number, 2);
}
