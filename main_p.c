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
#define n 5

int main (int argc, char *argv[]){

  int a1;
  int in;
  double a2;
  double a3;
  double w[n];

  a1 = faktorial (5);
  a2 = pangkat (2, 2);

  for (in = 0; in < n; in+=1){
    w[in] = pangkat(1, in);
  }
  a3 = jumlah(w, n);

  printf ( "%d\t%.2lf\t%.2lf\t%.2lf\n", 
      a1, a2, a3, a3/n );
  
  return 0;
}
