#include "head_ad.h"

int factorial(int N){

	int i;
	int total;

	total = 1;
	for (i = N; i > 0; i-=1){
		total*=i;
	}

	return total;

}

void init_mem_var (params *p){

	p->y = malloc(p->Nfact * sizeof (double));
	p->rij = malloc(p->Nfact * sizeof(double*));
	
	for (p->atom_j=0; p->atom_j < p->Nfact; p->atom_j+=1)
	p->rij[p->atom_j] = malloc(p->Natoms * sizeof(double));

}

void fill_array (params *p){

	for (p->atom_i=0; p->atom_i<p->Nfact; p->atom_i+=1){
		p->y[p->atom_i] = p->atom_i * factorial(p->Nfact);
		printf("%.2lf\n", p->y[p->atom_i]);
	}


	for (p->atom_i=0; p->atom_i<p->Nfact; p->atom_i+=1){
	    for (p->atom_j=0; p->atom_j<p->Natoms; p->atom_j+=1){
			p->rij[p->atom_i][p->atom_j] = p->atom_i * p->Natoms + p->atom_j;
		    printf("%.2lf\t", p->rij[p->atom_i][p->atom_j]);
		}
		printf("\n");
	}	
}

void free_mem_var (params *p){

	for (p->atom_j=0;p->atom_j<p->Nfact; p->atom_j+=1)
	free(p->rij[p->atom_j]);

	free(p->y);
}
