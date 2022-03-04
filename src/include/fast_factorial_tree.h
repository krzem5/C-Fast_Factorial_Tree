#ifndef __FAST_FACTORIAL_TREE_H__
#define __FAST_FACTORIAL_TREE_H__ 1
#include <stdint.h>



typedef uint32_t level_t;



typedef uint64_t index_t;



typedef void (*callback_t)(level_t,index_t);



void fast_factorial_tree(level_t l,callback_t cb);



#endif
