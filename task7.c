#include <stdio.h>
#include <stdbool.h>
#define false 0
#define true 1
#define SIZE 26

bool isIn(char el, char *array,int array_size) {

	for (int x =0; x < array_size; ++x)
	
	{
	if (el == array[x]) return true;
        //printf("%c",array[x]);	
	
	}
	return false;

}



int main() {
FILE *inp_file;
FILE *out_file;
inp_file = fopen("input.txt","r");
out_file = fopen("output.txt","w");

char first_set[SIZE] = {NULL};
char second_set[SIZE] = {NULL};

fscanf(inp_file,"%s", first_set);
fscanf(inp_file,"%s", second_set);

fclose(inp_file);

char output_set[SIZE] = {NULL};
for (int x = 0; x < SIZE; ++x)

	{
		char el = first_set[x];
		
		if ( !isIn(el,second_set,SIZE)) {fprintf(out_file,"%c",el);}


	}	

fclose(out_file);
return 0;
}
