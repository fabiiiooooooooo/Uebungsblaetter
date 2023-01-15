#include <stdio.h>
#include <stdlib.h>

void createIdentityMatrix(double *matrix, int rows, int cols) {
        int i, j;

        for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                        if (i == j) {
                                *(matrix + i*cols + j) = 1;
                        } else {
                                *(matrix + i*cols + j) = 0;
                        }
                }
        }
}

void multiplyMatrixByScalar(double *matrix, int rows, int cols, double scalar){
        int i, j;

        for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                        *(matrix + i*cols + j) *= scalar;
                }
        }
}

void swapRows(double *matrix, int rows, int cols, int row1, int row2){
        int i;
        double temp;

        if (row1 < 0 || row1 >= rows || row2 < 0 || row2 >= rows) {
                printf("Ungueltige Zeilen\n");
                return;
        }
        for (i = 0; i < cols; i++) {
                temp = *(matrix + row1*cols + i);
                *(matrix + row1*cols + i) = *(matrix + row2*cols + i);
                *(matrix + row2*cols + i) = temp;
        }
}

void swapCols(double *matrix, int rows, int cols, int col1, int col2) {
        int i;
        double temp;

        if (col1 < 0 || col1 >= cols || col2 < 0 || col2 >= cols) {
                printf("Ungueltige Spalten\n");
                return;
        }

        for (i = 0; i < rows; i++) {
                temp = *(matrix + i*cols + col1);
                *(matrix + i*cols + col1) = *(matrix + i*cols + col2);
                *(matrix + i*cols + col2) = temp;
        }
}

void changeMatrixSize(double **matrix, int *rows, int *cols) {
        int newRows, newCols;
        double *newMatrix;

        printf("Neue Anzahl von Zeilen und Spalten eingeben: ");
        scanf("%d%d", &newRows, &newCols);
        newMatrix = (double *)malloc(newRows * newCols * sizeof(double));
        createIdentityMatrix(newMatrix, newRows, newCols);

        free(*matrix);
        *matrix = newMatrix;
        *rows = newRows;
        *cols = newCols;
}

int main(void) {
        int rows, cols;
        int row1, row2;
        int col1, col2;
        int i, j;
        double scalar;
        double *matrix;

        printf("Anzahl von Zeilen und Spalten eingeben: ");
        scanf("%d%d", &rows, &cols);

        matrix = (double *)malloc(rows * cols * sizeof(double));
        createIdentityMatrix(matrix, rows, cols);

        printf("Faktor zum multiplizeiren eingeben: ");
        scanf("%lf", &scalar);
        multiplyMatrixByScalar(matrix, rows, cols, scalar);

        printf("Zeilen die getauscht werden sollen eingeben: ");
        scanf("%d%d", &row1, &row2);
        /*cheeky ich weiß :)*/
        row1 -= 1;
        row2 -= 1;
        swapRows(matrix, rows, cols, row1, row2);

        printf("Spalten die getauscht werden sollen eingeben: ");
        scanf("%d%d", &col1, &col2);
        col1 -= 1;
        col2 -= 1;
        swapCols(matrix, rows, cols, col1, col2);

        printf("Die Matrix ist: \n");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                        printf("%.2lf ", *(matrix + i*cols + j));
                }
                printf("\n");
        }

        changeMatrixSize(&matrix, &rows, &cols);
        multiplyMatrixByScalar(matrix, rows, cols, scalar);
        swapRows(matrix, rows, cols, row1, row2);
        swapCols(matrix, rows, cols, col1, col2);

        printf("Die Matrix nach änderung ist: \n");
        for (i = 0; i < rows; i++){
                for (j = 0; j < cols; j++) {
                        printf("%.2lf ", *(matrix + i*cols + j));
                }
                printf("\n");
        }
        free(matrix);
        return 0;
}
