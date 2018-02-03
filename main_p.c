/*
 * =====================================================================================
 *
 *       Filename:  main_p.c
 *
 *    Description:  Main program of practice
 *
 *        Version:  1.0
 *        Created:  02/03/2018 20:48:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Wildan Abdussalam (), edun_as@icloud.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "func_math.h"

int main (int argc, char *argv[]){

  int a1;
  double a2;

  a1 = faktorial (5);
  a2 = pangkat (2, 2);

  printf ( "%d\t%.2lf\n", a1, a2 );
  
  return 0;
}
