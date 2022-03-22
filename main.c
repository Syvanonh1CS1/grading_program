//
//  main.c
//  
//
//  Created by Syvanonh Boualaphanh on 22/3/22.
//

#include <stdio.h>
#include <stdlib.h>

void red();
void reset();
char end();
char input;

void red(){
  printf("\033[0;31m");
}

void reset() {
  printf("\033[0m");
}

int main(){
    int score;
    char grade;
    
    printf("\nEnter the score: ");
    scanf("%d",&score);
    
    if(score>=97){
        printf("\nThe grade is ");
        red();
        printf("A+ ");
        reset();
        printf("or a ");
        red();
        printf("4.0 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='A';
    } else if(grade>=93){
        printf("\nThe grade is ");
        red();
        printf("A ");
        reset();
        printf("or a ");
        red();
        printf("4.0 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='A';
    } else if(grade>=90){
        printf("\nThe grade is ");
        red();
        printf("A- ");
        reset();
        printf("or a ");
        red();
        printf("3.7 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='A';
    } else if(grade>=87){
        printf("\nThe grade is ");
        red();
        printf("B+ ");
        reset();
        printf("or a ");
        red();
        printf("3.3 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='B';
    } else if(grade>=83){
        printf("\nThe grade is ");
        red();
        printf("B ");
        reset();
        printf("or a ");
        red();
        printf("3.0 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='B';
    } else if(grade>=80){
        printf("\nThe grade is ");
        red();
        printf("B-- ");
        reset();
        printf("or a ");
        red();
        printf("2.7 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='B';
    } else if(grade>=77){
        printf("\nThe grade is ");
        red();
        printf("C+ ");
        reset();
        printf("or a ");
        red();
        printf("2.3 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='C';
    } else if(grade>=73){
        printf("\nThe grade is ");
        red();
        printf("C ");
        reset();
        printf("or a ");
        red();
        printf("2.0 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='C';
    } else if(grade>=70){
        printf("\nThe grade is ");
        red();
        printf("C- ");
        reset();
        printf("or a ");
        red();
        printf("1.7 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='C';
    } else if(grade>=67){
        printf("\nThe grade is ");
        red();
        printf("D+ ");
        reset();
        printf("or a ");
        red();
        printf("1.3 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='D';
    } else if(grade>=65){
        printf("\nThe grade is ");
        red();
        printf("D ");
        reset();
        printf("or a ");
        red();
        printf("1.0 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='D';
    } else{
        printf("\nThe grade is ");
        red();
        printf("E ");
        reset();
        printf("or a ");
        red();
        printf("0.0 ");
        reset();
        printf("on a 4.0 scale.\n");
        grade='E';
    }
    switch(grade){
        case 'A':
            printf("\nExcellent! Keep it up.\n");
            break;
        case 'B':
            printf("\nWell done! Keep it up.\n");
            break;
        case 'C':
            printf("\nYou did it, keep improving.\n");
            break;
        case 'D':
            printf("\nNot the worst, but you could do better.\n");
            break;
        case 'E':
            printf("\nTry harder next time with better efforts.\n");
            break;
    }
    end();
    
    return 0;
}

char end(){
    printf("\nTry again (y/n)?: ");
    scanf("%c",&input);

    if(input == 'y' || input == 'n'){
        switch(input){
            case 'y':
                main();
            case 'n':
                break;
        }
    }else{
        printf("Please enter only y or n.");
        end();
    }
    return 0;
}
