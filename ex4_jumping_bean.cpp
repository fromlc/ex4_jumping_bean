//------------------------------------------------------------------------------
// ex4_jumping_bean.cpp
//
// Jumping Bean
//      - user enters minimum and maximum jump in inches
//      - app displays 10 random jump heights in user's  range
//------------------------------------------------------------------------------
#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
    int jump_min, jump_max;         // set to user input
    int number_of_jumps;            // set to user input

    // app banner
    cout << "\nJumping Bean!\n";

    // prompt for number of times to jump
    cout << "\nHow many times will the Bean jump? (0 quits) ";
    cin >> number_of_jumps;
    if (number_of_jumps > 0)
    {
        // prompt for highest possible jump
        cout << "\nWhat's the highest the Bean can jump in inches? (0 quits) ";
        cin >> jump_max;

        // prompt for lowest possible jump
        cout << "What's the smallest jump possible for the Bean in inches? (0 quits) ";
        cin >> jump_min;

        // base range for random numbers
        int jump_range = jump_max - jump_min + 1;

        // loop to jump number_of_jumps times

        // ***** Your for loop goes here *****

    }

    cout << "\nGoodbye!\n";

    return 0;

}
