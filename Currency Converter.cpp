#include <iostream>

using namespace std;

int main()
{
    //USD exchange rate as of making this program.
    const double USD_TO_ZAR = 18.82;
    //Always set user input variables to zero.
    double userInput = 0.00;

    //Asks for user input in a double format.
    cout << "Please Enter How Many Dollars You Want (Format It In 0.00): " << endl;
    //Takes in the user input
    cin >> userInput;

    //Calculates the user output
    const double userOutput = userInput * USD_TO_ZAR;

    //Outputs the user input and user output.
    cout << "You Will Get $" << userInput << " For R" << userOutput << endl;

    return 0;
}
