/**
 *  Micheál Carroll
 *  C00218621
 *  Ex_5
 *  Method of Least Squares of Linear Regression
 */

 //Preprocessor directives
#include <iostream>
#include <math.h>

using namespace std;

//Main function (type int)
int main(void)
{
    //Variable declarations (Double,Char and Int)
    double x[100]={0},y [100]={0}, Ex = 0, Ey = 0, Ex2 = 0;
    double averageX=0, averageY=0, m=0, c=0, Exy = 0;
    char s1,s2,s3;
    int i=0;
    int n=0;

    //Read in values for data points
    cout << "Enter a value for the number of data points you wish to use in your calculations: " << endl;
    cin >> n;

    cout << "\n";

    //For loop

    for (i=0; i<n; i++)

    {
        //Read in data points
        cout << "\n Please enter an integer to specify the data point" << i+1 << "(x, y):";
        cin >> s1 >> x[i] >> s2 >> y[i] >> s3;
    }

    for (i=0; i<n; i++)
    {
        //Formulas to calulate Ex,Ey,Exy and Ex2
        Ex = Ex + x[i];
        Ey = Ey + y[i];
        Exy = Exy + x[i]*y[i];
        Ex2 = Ex2 + pow(x[i],2);
    }
    //Average value formulaes
    averageX = Ex/n;
    averageY = Ey/n;

    m = ((n*Exy)-(Ex*Ey))/((n*Ex2)-pow(Ex,2));
    c = averageY - (m*(averageX));

    //End results/ calculated values

    cout << "\nThe sum of the x values is: " << Ex << endl;

    cout << "\nThe sum of the Y values is: " << Ey << endl;

    cout << "\nThe sum of product xy is: " << Exy << endl;

    cout << "\nThe average of the x^2 value is: " << Ex2 << endl;

    cout << "\nThe average of the x value is: " << averageX << endl;

    cout << "\nThe average of the Y value is: " << averageY << endl;

    cout << "\nThe slope m is: " << m << endl;

    cout << "\nThe intercept c is: " << c << endl;

    return 0;
}
