/* #include <stdio.h>

int main() {
    int a;
    int b;
    float c;
    float d;
    int somma;

    printf("programma che esegue la somma tra due interi\n");
    printf("inserisci il primo numero intero:");
    scanf("%d", &a);
    printf("inserisci il secondo numero intero:");
    scanf("%d", &b);
    somma = a + b;
    printf("la somma dei due numeri interi e\': %d", somma);
}*/

#include <stdio.h>
#include


typedef enum {A, B, ZERO, AB} GS;
//definizione strutture
//...
typedef struct{
    int eta;
    float peso;
    int altezza;
}Persona;

typedef struct{

    Persona datipersona;
    GS grupposanguigno;
    int codiceIdentificativo;
}Paziente;

int main() {

    /*Dichiarazione di variabili relativi ai pazienti*/

    Paziente ricoverato = {{40,65.5,173},ZERO,27498237}; // Dichiarazione ricoverato
    Paziente ricoverato2; // Dichiarazione ricoverato 2

    /*stampa dati paziente 1 */

    printf{"\nEta\' persona: %d: ", ricoverato.datiPersona.eta};
    printf{"\nPeso persona: %.2f: ", ricoverato.datiPersona.peso};
    printf{"\naltezza persona: %d: ", ricoverato.datiPersona.altezza};
    printf{"\nGruppo sanguigno ricoverato: %d", ricoverato.grupposanguigno};
    printf{"\nCodice identificativo ricoverato : %d:", ricoverato.codiceIdentificativo};


    //acuisizione dati ricoverato da utente

    printf("Inserisci eta paziente:");
    scanf("%d", &ricoverato2.datiPersona.eta);
    printf("Inserisci peso paziente:");
    scanf("%f", &ricoverato2.datiPersona.peso);
    printf("Inserisci altezza paziente (cm):");
    scanf("%d", &ricoverato2.datiPersona.altezza);
    printf("Inserisci gruppo sanguigno paziente:");
    printf("\n[A=0, B=1, ZERO=2, Ab=3]");
    scanf("%d", &ricoverato2.grupposanguigno);
    printf("Inserisci codice identificativo paziente:");
    scanf("%d", &ricoverato2.codiceIdentificativo);

    return 0;

    /*stampa dati paziente 2 */

    printf{"\nEta\' persona: %d: ", ricoverato2.datiPersona.eta};
    printf{"Peso persona: %.2f: ", ricoverato2.datiPersona.peso};
    printf{"altezza persona: %d: ", ricoverato2.datiPersona.altezza};
    printf{"Gruppo sanguigno ricoverato: %d: ", ricoverato2.grupposanguigno};
    printf{"Codice identificativo ricoverato : %d:", ricoverato2.codiceIdentificativo};


}





/*generazione casuale dati ricoverato*/
ricoverato3.datiPersona.eta = 5 + rand
