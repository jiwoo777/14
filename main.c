#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){
	char *pc = NULL;
	int i =0;
	
	pc = (char*)malloc(100*sizeof(char));//멜록을 통해 100바이트 메모리 할당 받음. 
	if(pc == NULL){
		printf("메모리 할당 오류\n");
		exit(1);//에러 헨들링 코드  
	}
	//할당이 잘 된 경우만 아래 동장 
	for(i=0; i<26; i++){
		pc[i] = 'a'+i;
	}
	pc[i] = 0;
	printf("%s\n", pc);
	free(pc);
}
