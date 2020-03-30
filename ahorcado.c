#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>
//Adriana Ku 
/*ahorcado
ejemplo de compilacion, usted puede meter n cantidad de palabras
./main  carro casa moto

*/
char juego( int argc, char** argv){
  
int numero = rand() % argc; //elegimos una palabra del arreglo al azar
//printf("%d",numero);
int longi = strlen(argv[numero]);
//printf("%d",longi);
//printf("%s",argv[numero]);
char palabra[20];
char palabra2[20];
 strcpy(palabra,argv[numero]);
 //printf("%s",palabra);
int intentos=0;
int i=1;
int j=1;

while(intentos<6){ //comienza el juego
  
  ++intentos;
      printf("Escribe una letra de la palabra \n");
      char letra;
        scanf(" %c", &letra);


      for(j=0;j<strlen(argv[numero]);j++){
         
          if(letra==palabra[j]){
            printf("usted  a adivinado tiene la letra %c \n",palabra[j]);
           palabra2[j]=letra;
        printf("%c \n",palabra2[j]);
         


          }
          
       
         

      }
      

       if( !memcmp( palabra2, palabra, sizeof( palabra2 ))){ //comprobamos que los dos arreglos sean iguales
     printf( "LOGRO ADIVINAR LA PALABRA" ); 
      printf( "la palabra es %s",palabra ); 
     break;}
     
   

     
   }
  if(intentos>6) { //cuando el intento llegue a 5 usted a perdido la partida
     printf( "Usted ha perdido" );
     
      //printf("%c \n",letra);


}

 



  
}


int main(int  argc, char** argv){

juego(argc,argv);
}
