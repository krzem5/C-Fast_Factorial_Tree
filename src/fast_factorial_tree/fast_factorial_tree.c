#include <fast_factorial_tree.h>



void fast_factorial_tree(level_t l,callback_t cb){
	if (!l){
		return;
	}
	if (l==1){
		cb(0,0);
		return;
	}
	index_t f=1;
	index_t i=0;
	level_t j=0;
	while (1){
		for (level_t k=j;k<l;k++){
			cb(k,i);
		}
		i++;
		if (i==f){
			if (j==l){
				return;
			}
			f*=j+2;
			j++;
		}
	}
}
