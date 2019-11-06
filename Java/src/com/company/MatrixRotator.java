package com.company;

public class MatrixRotator {

    void test(){
        int[][] mat = {
                {1, 2, 3},
                {5, 4, 6},
                {7, 8, 9}
        };

        MatrixRotator matrixRotator = new MatrixRotator();

        matrixRotator.rotate(mat);
    }

    boolean isInFirstQuadrant(int rows, int cols, int i, int j){
        return  (i < ((rows / 2) - (1 - rows % 2))) &&
                (j < ((cols / 2) - (1 - cols % 2)));
    }
    boolean isInSecondQuadrant(int rows, int cols, int i, int j){
        return  (i > ((rows / 2) - (1 - rows % 2))) &&
                (j < ((cols / 2) - (1 - cols % 2)));
    }
    boolean isInThirdQuadrant(int rows, int cols, int i, int j){
        return  (i < ((rows / 2) - (1 - rows % 2))) &&
                (j > ((cols / 2) - (1 - cols % 2)));
    }
    boolean isInFourthQuadrant(int rows, int cols, int i, int j){
        return  (i > ((rows / 2) - (1 - rows % 2))) &&
                (j > ((cols / 2) - (1 - cols % 2)));
    }

    public int[][] rotate(int[][] matrix){

        int rows = matrix.length;
        int cols = matrix[0].length;
        int size = rows * cols;

        int[][] aux = new int[rows][cols];

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){

                if(isInFirstQuadrant(rows, cols, i, j)){
                    aux[j][i + rows/2] = matrix[i][j];
                }

            }
        }

        return matrix;
    }
}
