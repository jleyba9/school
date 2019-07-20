#include <stdlib.h>
#include <stdio.h>
#include "vec.h"


void init(vecI *v)
{
    v->is_init=1;
    v->index=0;
    v->maxSize=4;
    v->data=malloc(sizeof(int)*v->maxSize);

}

void resize(vecI *v)
{
    int *i;
    v->maxSize=v->maxSize+10;
    i=realloc(v->data,sizeof(int)*v->maxSize);
    if(i !=NULL)
    {
        v->data=i;
    }
}

void put(vecI *v,int e)
{
	if(v->is_init==1)
    {
		if(v->index< v->maxSize)
    	{
    		v->data[v->index]=e;
    		v->index++;
		}
    	else
		{
			resize(v);
			put(v,e);
		}
	}
    else
	{
		init(v);
        put(v,e);
	}
}

int get(vecI *v, int i)
{
    if(v->is_init==1)
	{
    	if(i< v->index)
    	{
        	return(v->data[i]);
    	}
    	else
    	{   
        	printf("index out of used range ");
        	return(-1);
    	}
	}
	else
    {
		printf("vector not init\n");
        return(-1);
	}	
}

int size(vecI *v)
{
	if(v->is_init==1)
	{
    	return(v->index);
	}
	else
	{
		printf("vector not init\n");
        return(-1);
	}
}

void printVec(vecI *v)
{
    int i;
    for(i=0;i<v->index;i++)
    {
        printf("%d\n",get(v,i));
    }

}
void byteSize(vecI *v)
{
	printf("size in bytes %ld\n",(sizeof(int)*v->maxSize));
}

int empty(vecI *v)
{
    if(v->index<1)
	{
		return(1);
	}
    else
	{
		return(0);
	}
}
