#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include "input_image.h"
#include "images.h"


int main(void)
{

	FILE* images = fopen("new_array.txt","w");
	for(int i = 0; i<784; i++)
	{	
		
		fprintf(images, "0x%.4X,",hdl_dskw_image[i]);
		if((i+1)%28==0)
			fprintf(images,"\n");

	}
	return 0;


}
