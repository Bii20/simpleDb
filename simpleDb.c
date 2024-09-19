#include<stdio.h>

int main(int argc ,char*argv[]){
    InputBuffer* inputBuffer = newInputBuffer();

    while (true)
    {
    
        /* code print*/
        printPrompt();
        readInput(inputBuffer);
        if (strcmp(inputBuffer -> buffer, ".exit")== 0)
        {
            /* code */
            closeInputBuffer(inputBuffer);
            exit(EXIT_SUCCESS);
        }else{
            printf("Unrecognises commad %s .\n",inputBuffer->buffer);
        }
        
    }
    

} 
