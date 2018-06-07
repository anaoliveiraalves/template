/*
 * main.cpp
 *
 *  Created on: 07/06/2018
 *      Author: aet
 *      templates in multi-file projects:
 * https://www.codeproject.com/Articles/48575/How-to-define-a-template-class-in-a-h-file-and-imp
 * http://blogs.grammatech.com/separate-compilation-templates
 *
 */

#include <string>
#include "declaration.h"
#include "definition.cpp"   //Only considering templates, Please see the method 2 in https://www.codeproject.com/Articles/48575/How-to-define-a-template-class-in-a-h-file-and-imp
using namespace std;


int main(){
   string s1="olá", s2="Bom dia";
   cout << "Before change s1=\"" << s1 << " s2=\"" << s2 << "\"\n";
   change(s1,s2);
   cout << "After change s1=\"" << s1 << " s2=\"" << s2 << "\"\n";
   Matrix<int,2> m1(2,2);    //Matrix with 4 integer zeros, dim 2
   Matrix<float> m2(2,3);  //Matrix with 6 floating-point zeros, dim 10
   int a1[2][2]={5, 6};     //What do we have in the remaining positions?
   float a2[2][10]={{9.6, 8.5, 5.8}, {6.7, 5.7, 8.9}};
   m1.setMatrix(a1);  m1.setElement(0, 0, 10);    m1.printMatrix();
   m2.setMatrix(a2);  m2.addMatrix(a2);           m2.printMatrix();
   //m2.setElement(0,1, "ola");  //Why there is an error?
   return 0;
}


