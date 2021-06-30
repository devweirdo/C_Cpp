#include <stdio.h>

// typedef struct student
// {
//     char* name;
//     char* gender;
//     int age;
// } student;

// void main(){
//     student st1;
//     st1.age = 20;
//     st1.gender = "male";
//     st1.name = "A";
//     printf("%d\n",st1.age);
// }

typedef struct data_decode
{
    char numbers[100];
    char characters[100];
    char spec_chars[100];
} decode_data_t;

decode_data_t decode(char* buffer){
    decode_data_t data;
    int count_num = 0;
    int count_char = 0;
    int count_other = 0;
    while (*buffer != '\0'){
        if (*buffer >='0' && *buffer <='9'){
            data.numbers[count_num++] = *buffer;
        }
        else if (*buffer >='a' && *buffer <='z' || *buffer >='A' && *buffer <='Z'){
            data.characters[count_char++] = *buffer;
        }
        else {
            data.spec_chars[count_other++] = *buffer;
        }
        buffer++;
    }
    data.numbers[count_num] = '\0';
    data.characters[count_char] = '\0';
    data.spec_chars[count_other] = '\0';
    return data;
}

void main(){
    char buffer[] = "12a?b2;cd";
    decode_data_t data = decode(buffer);
    printf("%s\n",data.numbers);
    printf("%s\n",data.characters);
    printf("%s\n",data.spec_chars);
}    