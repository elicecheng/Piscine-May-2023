/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:36:30 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/27 17:36:33 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int** initial(int i)
{
    int**   matrix = (int**)malloc(i * sizeof(int*));

    int row;
    
    row = 0;
    while (row < i)
    {
        matrix[row] = (int*)malloc(i * sizeof(int));
        int col;

        col = 0;

        while (col < i)
        {
            matrix[row][col] = 0;
            printf("%d ", matrix[row][col]);
            col++;            
        }
        printf("\n");
        row++;
    }
    
    row = 0;
    while (row <i)
    {
        free(matrix[row]);
        row++;
    }
    free(matrix);
    return(matrix);
}
int main() {
    int size = 4;

    initial(size);

    return 0;
}