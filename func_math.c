/*
 * =====================================================================================
 *
 *       Filename:  func_math.c
 *
 *    Description: Math functions 
 *
 *        Version:  1.0
 *        Created:  02/03/2018 20:32:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Wildan Abdussalam (), edun_as@icloud.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "func_math.h"

int faktorial (int x) {

  int i;
  int total;

  total = 1;
  i = x;
  while (i > 0){
    total*=i;
    i-=1;
  }

  return total;
}

double pangkat (double x, int N){

  int i;
  double total;
  double sum;

  if (N > 0) {
    i = 0;
    sum  = 1;
    while (i < N){
      sum*=x;
      i+=1;
    }
    total = sum;
  }
  else if (N==0) total = 1.0;
  else{
    i = 0;
    sum = 1;
    while (i < N){
      sum*=x;
      i+=1;
    }
    total = 1/sum;
  }

  return total;
}

double jumlah (double x[], int N){

  int i;
  double sum;

  sum = 0.0;
  for (i = 0; i < N; i+=1){
    sum += x[i];
  }

  return sum;
}

double rata2 (double x[], int N){

  int i;
  double sum;

  sum = 0.0;
  for (i = 0; i < N; i+=1){
    sum += x[i];
  }

  return sum/N;
}

double stdev (double x[], int N){

  int i;
  double sum;
  double ave;

  sum = 0.0;
  for (i = 0; i < N; i+=1){
    sum += x[i];
  }

  ave = sum/N;
  sum = 0.0;
  for (i = 0; i < N; i+=1){
    sum += ( (x[i] - ave)*(x[i] - ave) );
  }
  
  return sqrt(sum);

}
