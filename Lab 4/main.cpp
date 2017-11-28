 /**
 *Joshua Whiteford
 *02/10/2017
 *main.c
 * Electrical Resistance Calculator using two functions
 */



/**< preprocessor directives */
#include <iostream>
#include <math.h>
#define PI 3.141592654

double ElecRes(double rho ,double Area ,double length );
int main();

using namespace std;

    /**< Starting the function */
int main()
{
    /**< Setting the Data Types */
    double r = 0;
    double l = 0;
    double p = 0;
    double A;
    double Res;

        /**< Sending the User into a loop until they enter a Value for the Radius */
    while ( r <= 0 )
    {
        cout << "Enter the radius of the wire" << endl;
        cin >> r;
    }

    /**< Sending the User into a loop until they enter a Value for the Length  */
    while ( l <= 0 )
    {
        cout << "Enter the Length of the wire" << endl;
        cin >> l;
    }

    /**< Sending the User into a loop until they enter a Value for the Resistivity  */
    while ( p <= 0 )
    {
        cout << "Enter the resistivity of the wire" << endl;
        cin >> p;
    }

    /**< Sending the User into a loop until they enter a Value for the Length  */
    A = PI * pow(r,2);
    cout << "A " << A << endl;

    /**< Sending the User to a second Function too Calculate the Electrical Resistance */
    Res = ElecRes(p,A,l);

    /**<  Displaying the Electrical Resistance */
    cout << "The Electrical Resistance Is " << Res << endl;
    return 0;
}

double ElecRes(double rho ,double Area ,double length )
{
    /**<  Declaring Variables */
    double Ress;

    /**<  Equations to Calculate the Electrical Resistance */
    Ress = rho*(length/Area);

    /**<  Returning the value for the Electrical Resistance too the First Equation */
    return Ress;
}
