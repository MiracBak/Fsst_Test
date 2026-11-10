#include <stdio.h>

int leet (const char text[]){
    int len = sizeof(text);
    for (int i = 0, hits = 0; i < len; i++){
        if (text[i] == 'E' || 'e'){
            hits++;
        }
    }
}

int main(){
    const char text[] = "REDBULL4EVER";
}