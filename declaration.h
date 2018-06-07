/*
 * declaration.h
 *
 *  Created on: 07/06/2018
 *      Author: aet
 */

#ifndef DECLARATION_H_
#define DECLARATION_H_

#include <iostream>
using namespace std;

template<typename T, int dim=10>
class Matrix{
  T doubleArray[dim][dim];
  int rows;
  int cols;
public:
  Matrix();
  Matrix(int r,int c);

  void printMatrix();

  //set an element of the matrix
  void setElement(int row,int col,T value);

  //set the doubleArray to what is sent
  void setMatrix(T otherArray[][dim]);

  //add an array to doubleArray
  void addMatrix(T otherArray[][dim]);
};

template <class T>
void change(T & x, T & y);

#endif







