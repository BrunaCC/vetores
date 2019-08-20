#ifndef MYSTRING_H
#define MYSTRING_H
void preencherstring( int tam, char c, char dest[]){
int i;
for(i=0;i<tam;i++)
    dest    [i]=c;
    dest[i]='\0';
}
#endif 
