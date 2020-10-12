#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char s[] = {};
char snl[]={};
int getint;
float getfloat;
char gech;
int get_int(){
    
    scanf("%d",&getint);
    return getint;
}
int get_float(){
    
    scanf("%d",&getfloat);
    return getfloat;
}
char get_char(){
    
    scanf("%c",&gech);
    return gech;
}
char *get_string_EOF(){
    char a;
    
    int i =0;
    a = getchar();
    while(a!=EOF){
        s[i] = a;
        i++;
        a = getchar();
    }
    s[i] = '\0';

    return s;
}
char *get_string_NL(){
    char a;
    
    int i =0;
    a = getchar();
    while(a!= '\n'){
        snl[i] = a;
        i++;
        a = getchar();
    }
    snl[i]='\0';
    return snl;
}
