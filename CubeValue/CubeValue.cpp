#include <iostream>
#include <string>

using namespace std;

float CubeValue(float val);

int main()
{   
    bool validInput{ false };
    do
    {
        cout << "Please enter a number ";
        float num{};
        cin >> num;

        if (cin.fail())
        {
            validInput = false;
            cin.clear();
            cin.ignore(99, '\n');
            cout << "That is not a number! Try again." << endl;
        }
        else
        {
            validInput = true;
            cout << "The value of your number cubed is " << CubeValue(num);
        }

    } while (!validInput);

}


float CubeValue(float val)
{
    return val * val * val;
}