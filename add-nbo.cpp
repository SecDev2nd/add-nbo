#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>

uint32_t returnValue(char *fname);
void returnAdd(int a, int b);


// 출력 : 1000(0x3e8) + 500(0x1f4) = 1500(0x5dc)
uint32_t returnValue(char *fname){
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

void returnAdd(int a, int b){
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", a, a, b, b, a + b, a + b);
}

int main(int argc, char *argv[]){
	if (argc != 3) {
        fprintf(stderr, "Usage: %s <file1> <file2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    char *path1 = argv[1];
    char *path2 = argv[2];

	returnAdd(returnValue(path1),returnValue(path2));
	return 0;
}

