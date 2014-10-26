#include <iostream>
#include <fstream>

#include "gauss_quadrature.h"

using namespace std;

int main()
{
    int npt = 30;
    double *x, *weight;
    x = new double [npt];
    weight = new double [npt];
    gauss_quadrature(npt, 6, 0.0, 0.0, 0.0, 3.0, x, weight);
   
    for(int i = 0; i < npt; i++)
    {
        cout << x[i] << "    " << weight[i] << endl;
    }
  
    return 0;
}



