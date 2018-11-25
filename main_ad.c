#include "head_ad.h"

int main (int argc, char *argv[]){

	if (argc!=3){
		printf("masukan input\n");
		exit(-1);
	}

	params p;

	p.Nfact = atoi(argv[1]);
	p.Natoms = atoi(argv[2]);
	init_mem_var(&p);
	fill_array(&p);
	free_mem_var(&p);
	printf("%d\n", factorial(p.Nfact));
	return 0;
}
