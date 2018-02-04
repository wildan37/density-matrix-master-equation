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

  int in;
  double a[n];
  double w[n];

  a[0] = faktorial (5);
  a[1] = pangkat (2, 2);

  for (in = 0; in < n; in+=1){
    w[in] = pangkat(1, in);
  }
  a[2] = jumlah(w, n);
  a[3] = rata2 (w, n); 
  a[4] = stdev(w, n);

  for (in = 0; in < n; in+=1){
   printf ("%.2lf\n", a[in] );
  }

  return 0;
}
