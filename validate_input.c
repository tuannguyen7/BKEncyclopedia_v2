#include <stdio.h>

char check_main_program_input(char* buffer){
    for(int i = 0; i < strlen(buffer); i++){
        if(isdigit(buffer[i])){
            clear_stdin();
            return buffer[i];
        }
    }
    clear_stdin();
    return 0;
}

void clear_stdin(){
    char tmp_ch;
    tmp_ch = getchar();
    while(tmp_ch != '\n' && tmp_ch != EOF){
        tmp_ch = getchar();
    }
}