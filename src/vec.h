#ifndef VEC_H
#define VEC_H

typedef struct 
{
    int is_init;
	int index;
    int maxSize;
    int *data;
    
    

}vecI;

void init(vecI *v);
void resize(vecI *v);
void put(vecI *v,int e);
int get(vecI *v, int i);
int size(vecI *v);
void printVec(vecI *v);
void byteSize(vecI *v);
int empty(vecI *v);


#endif
