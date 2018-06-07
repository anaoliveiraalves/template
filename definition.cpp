/*
 * definition.cpp
 *
 *  Created on: 07/06/2018
 *      Author: aet
 *
 */


#include "declaration.h"

template <class T, int dim>
Matrix<T,dim>::Matrix(int r,int c){
    if(r<=dim && c <= dim){
      rows=r;
      cols=c;
    }else{
      rows=dim;
      cols=dim;
    }
  }

template <class T, int dim>
Matrix<T,dim>::Matrix(){
   rows=dim;
   cols=dim;
  }


template <class T, int dim>
 void Matrix<T,dim>::printMatrix(){
    for(int i=0; i < rows; i++){
      for(int j=0; j < cols; j++){
         cout << doubleArray[i][j] << ' ';
      }
      cout << endl;
    }
}

//set an element of the matrix
template <class T, int dim>
  void Matrix<T,dim>::setElement(int row,int col,T value){
    if(row < rows && row >=0 && col < cols && col >= 0)
     doubleArray[row][col] = value;
  }

  //set the doubleArray to what is sent
template <class T, int dim>
  void Matrix<T,dim>::setMatrix(T otherArray[][dim]){
    for(int i=0; i < rows; i++){
      for(int j=0; j < cols; j++){
        doubleArray[i][j] = otherArray[i][j];
      }
    }
  }

  //add an array to doubleArray
template <class T, int dim>
  void Matrix<T,dim>::addMatrix(T otherArray[][dim]){
    for(int i=0; i < rows; i++){
      for(int j=0; j < cols; j++){
       doubleArray[i][j] += otherArray[i][j];
      }
    }
  }



//Generic function - not member function of Matrix
template <class T>
void change(T & x, T & y){
   T temp = x;
   x = y;
   y = temp;
}


