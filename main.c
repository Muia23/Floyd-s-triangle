/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: wil
 *
 * Created on 9 November 2020, 13:32
 */

#include <stdio.h>
/*
 * 
 */
int main() {
    int rows, i, j, number = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i= 1; i <= rows; i++){
        for( j = 1; j <= i; ++j){
        printf("%d ", number);
        ++number;        
        }
        printf("\n");
    }
    return 0;
}

