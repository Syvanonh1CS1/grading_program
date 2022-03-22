//
//  main.c
//  
//
//  Created by Syvanonh Boualaphanh on 22/3/22.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int grade;
    printf("\nEnter the score: ");
    scanf("%d",&grade);
    
    if(grade>=97){
        printf("\nThe grade is A+ or a 4.0 on a 4.0 scale.\n");
    } else if(grade>=93){
        printf("\nThe grade is A or a 4.0 on a 4.0 scale.\n");
    } else if(grade>=90){
        printf("\nThe grade is A- or a 3.7 on a 4.0 scale.\n");
    } else if(grade>=87){
        printf("\nThe grade is B+ or a 3.3 on a 4.0 scale.\n");
    } else if(grade>=83){
        printf("\nThe grade is B or a 3.0 on a 4.0 scale.\n");
    } else if(grade>=80){
       printf("\nThe grade is B- or a 2.7 on a 4.0 scale.\n");
    } else if(grade>=77){
        printf("\nThe grade is C+ or a 2.3 on a 4.0 scale.\n");
    } else if(grade>=73){
        printf("\nThe grade is C or a 2.0 on a 4.0 scale.\n");
    } else if(grade>=70){
        printf("\nThe grade is C- or a 1.7 on a 4.0 scale.\n");
    } else if(grade>=67){
        printf("\nThe grade is D+ or a 1.3 on a 4.0 scale.\n");
    } else if(grade>=65){
        printf("\nThe grade is D or a 1.0 on a 4.0 scale.\n");
    } else{
        printf("\nThe grade is E/F or a 0.0 on a 4.0 scale.\n");
    }
    return 0;
}
