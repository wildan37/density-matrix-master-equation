#include "stdio.h"
#include "stdlib.h"
#include "math.h"

typedef struct {

//independent variables
	int atom_i;
	int atom_j;
	int Natoms;
	int Nfact;
	double Omega;
	double delta;
	double Gamma;

//vector
	double **rij;
	double *y;
}params;

int factorial (int N);
void init_mem_var (params *p);
void fill_array(params *p);
void free_mem_var (params *p);

