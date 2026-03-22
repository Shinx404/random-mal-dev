#include <stdio.h>


int main(){
	FILE *file = fopen("example.txt","rb");
	int buffer[1000];
	
	fread(buffer,1,1000,file);
	
	for(int i = 0; i < 1000; i++){
		printf("%x",buffer[i]);
	}
	return 0;
}
