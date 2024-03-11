#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>

uint32_t returnAdd(char *fname){
	FILE *fp;
	u_int32_t buffer[10];
	u_int32_t a,b;
	size_t n_size;
	
	fp = fopen(fname,"r");
	while(0<(n_size = fread(buffer,1,sizeof(u_int32_t),fp))){	
		b = ntohl(buffer[0]);
	}

	fclose(fp);
	return b;
}

int main(){
	char path[] = "../thousand.bin";
	char path2[] = "../five-hundred.bin";

	printf("%d",returnAdd(path)+returnAdd(path2));
	return 0;
}

