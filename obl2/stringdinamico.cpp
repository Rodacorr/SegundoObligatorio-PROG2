#include "stringdinamico.h"
void strcrear (strings &s)
{
s = new char[1];
s[0] = '\0';
}
void strdestruir (strings &s)
{
delete [] s;
s = NULL;
}
int strlar (strings s)
{
int i = 0;
 while (s[i] != '\0')
i++;
return i;
}
void strcop (strings &s1,strings s2)
{
int i = 0;
int largo = strlar(s2) + 1;
 delete [] s1;
s1 = new char[largo];
while (s2[i] != '\0')
{
 s1[i] = s2[i];
i++;
}
s1[i] = '\0';
}
void scan (strings &s)
{
strings aux = new char[MAX];
int i=0;
char c;
scanf ("%c", &c);
while (c!= '\n' && i < MAX-1)
{
 aux[i] = c;
 i++;
scanf ("%c", &c);
}
aux[i] = '\0';
strcop (s,aux);
strdestruir (aux);
}
void strcon (strings &s1,strings s2)
{
 strings aux;
 strcrear (aux);
 strcop (aux, s1);
 int largo = strlar (s1) + strlar (s2) + 1;
 if (largo > MAX)
 largo = MAX;
 delete [] s1;
 s1 = new char[largo];
 int i = 0;
 while (aux[i] != '\0')
 {
 s1[i] = aux[i];
 i++;
 }
 int j = 0;
 while (s2[j] != '\0' && i < MAX-1)
 {
 s1[i] = s2[j];
 i++;
 j++;
 }
 s1[i] = '\0';
 strdestruir (aux);
}
void strswp (strings &s1, strings &s2)
{
strings aux;
aux = s1;
s1 = s2;
s2 = aux;
}
void print (strings s)
{
int i = 0;
while(s[i]!= '\0')
{
printf ("%c", s[i]);
i++;
}
}
boolean strmen (strings s1, strings s2)
{
int i = 0;
 boolean encontre = FALSE;
 boolean menor = FALSE;
 while ((!encontre) && (s1[i] != '\0') && (s2[i] != '\0'))
{
 if (s1[i] != s2[i])
 encontre = TRUE;
 if (s1[i] < s2[i])
 menor = TRUE;
 i++;
}
 if ((!encontre) && (s2[i]!='\0'))
 menor = TRUE;
 return menor;
}

boolean streq(strings s1,strings s2)
{
 int i = 0;
 boolean iguales = TRUE;
while (iguales && (s1[i] != '\0') && (s2[i] != '\0'))
{
 if (s1[i] != s2[i])
 iguales = FALSE;
 i++;
}
 if ((s1[i] != '\0') || (s2[i] != '\0'))
 iguales = FALSE;
return iguales;
}
