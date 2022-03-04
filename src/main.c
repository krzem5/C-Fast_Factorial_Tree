#include <fast_factorial_tree.h>
#include <inttypes.h>
#include <stdio.h>



static void func(level_t level,index_t index){
	printf("Level: %u -> Index %"PRIu64"\n",level,index);
}



int main(int argc,const char** argv){
	fast_factorial_tree(4,func);
	return 0;
}
