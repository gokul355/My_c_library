#include<stdio.h>
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
char* get_string_EOF(){
    char a;
    
    int i =0;
    while((a = getchar()!=EOF)){
        s[i] = a;
        i++;
    }
    return (char *)s;
}
char* get_string_NL(){
    char a;
    
    int i =0;
    while((a = getchar()!= '\n')){
        snl[i] = a;
        i++;
    }
    return (char *)snl;
}
