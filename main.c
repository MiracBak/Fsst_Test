#include <stdio.h>

int leet (char text[], int len){
    for (int i = 0, hits = 0; i < len; i++){
        if (text[i] == 'E' || 'e'){
            text[i] = '3'; // "E" wird mit "3" ersetzt
            hits++; // wie viele e's es gibt
        }
    }
    //printf("%c\nTreffer: %d", text, hits);
}

int main(){
    char text[12];
    printf("Geben Sie einen Wort mit 12 Buchstaben oder Zahlen ein: ");
    scanf("%d", text); // Wort eingeben
    int len = sizeof(text); //Länge von text
    leet(text, len); //ausführen
}