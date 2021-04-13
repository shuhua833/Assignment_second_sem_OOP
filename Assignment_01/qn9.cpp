//Write a C++ program that reads coefficients of quadratic equations and finds its roots
#include<iostream>
#include<math.h>
using namespace std;

void roots_of_quadraic_eqn(float a,float b,float c){
    float discriminant,realPart,imaginaryPart,x1,x2;

    discriminant = (b*b) - (4*a*c);
    
    if (discriminant > 0) {
        x1 = ((-b) + sqrt(discriminant)) / (2*a);
        x2 = ((-b) - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

}
int main(){
    float a,b,c;
    cout<<"Enter the value of a,b and c respectively :"<<endl;
    cin>>a>>b>>c;
    roots_of_quadraic_eqn(a,b,c);
    return (0);
}