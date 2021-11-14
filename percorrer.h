#ifndef PERCORRER_H_INCLUDED
#define PERCORRER_H_INCLUDED

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void pegaLetras(char *letras)
{
    char c ;
    int i=0;
    do
    {
        c = getch(); // pega o caractere digitado pelo usuario
        if(isalpha(c)!=0 || c==32)
        {
            letras[i] = c; //armazena no vetor
            i++;
            printf("%c",c); //exibe na tela o que foi digitado
        }
        else if (c==8&&i) // se for pressionado backspace e ouver caracteres ja digitados
        {
            letras[i] ='\0'; // o indice atual do vetor recebe termina��o de string
            i--; // o indice do vetor de caracteres decrementado
            printf("\b \b");  // o caractere digitado apagado da tela
        }
    }
    while (c!=13)  ;   //executa o loop ate que seja pressionado ENTER
     letras[i] ='\0';
}

void pegaDigito(char *digito)
{
    char c ;
    int i=0;
    do
    {
        c = getch(); 
        if(isdigit(c)) 
        {
            digito[i] = c; 
            i++;
            printf("%c", c); 
        }
        else if (c==8&&i) 
        {
            digito[i] ='\0'; 
            i--; 
            printf("\b \b");  
        }
    }
    while (c!=13);
 digito[i] ='\0';
}

void pegaEmail(char *letras)
{
    char c ;
    int i=0;
    do
    {
        c = getch(); 
        if(isalpha(c)!=0 ||  isdigit(c) || c==95 || c==45 || c==64 || c==46 ) //se for letra, numero, -, . ,_, @
        {

            letras[i] = c; 
            i++;
            printf("%c", c);
        }
        else if (c==8&&i) 
        {
            letras[i] ='\0'; 
            i--;
            printf("\b \b");  
        }
    }
    while (c!=13)  ;  
     letras[i] ='\0';
}
#endif