#include "stdio.h"


//Пункт №4
char Comparison(int n, char* str1, char* str2){

    int c = 0;
    for (int i = 0; i < n; ++i) {
        if (str1[i] == str2[i]){
            c++;
        }
    }

    if (c==n){
        return "YES";
    }else{
        return "NO";
    }
}

//Пункт №7
int Length(char* str){
    int count = 0;
    while (str != "\0"){
        count++;
    }
    return count;
}

//Пункт №10
int Search(char* str, char symbol){
    int out;
    for (int i = 0; i < 10; ++i) {
        if (str[i] == symbol) {
            out = i;
            break;
        }
    }

    return out;
}

//Пункт №12
int LenSearch(char* str1, char* str2)
{
    int c = 0;
    for (int i = 0; i < 10; ++i) {
        if (str2[i] == str1[0] || str2[i] == str1[1])
            str2[i] = '!';
    }
    for (int i = 0; i < 10; ++i) {
        if (str2[i] != '!')
            ++c;
    }

    return c-1;
}

int main(){
    //Задание 1
    char string1[10];
    char string2[10];
    int i=0, j=0;
    char *str1,*str2;
    str1=string1;
    str2=string2;
    scanf("%s\n", string1);
    scanf("%s", string2);
    while(string1[i]!='\0')
    {
        ++str1;
        i++;  }
    while(string2[j]!='\0')
    {
        *str1=*str2;
        str1++;
        str2++;
        j++; }
    printf("%s \0", string1);

    //Задание 4
    int n2;
    scanf("%d", &n2);
    char str11[10];
    char str22[10];


    scanf("%c", str11);
    scanf("%c", str22);

    printf("%c\n", Comparison(n2, str11, str22));

    //Задание 7
    char str[10];
    scanf("%c", &str);
    printf("%d", Length(str));

    //Задание 10
    char str3[10];
    char symb;
    scanf("%s", str3);
    scanf("%s", &symb);

    printf("%d\n", Search(str3, symb));

    //Задание 12
    char str51[2] = "ab";
    char str52[10];
    scanf("%s", str52);

    printf("%d\n", LenSearch(str51, str52));
}