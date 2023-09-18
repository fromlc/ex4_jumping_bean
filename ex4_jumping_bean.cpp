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
// constants
//------------------------------------------------------------------------------
constexpr int NUMBER_OF_JUMPS = 10; // adjust constant as needed

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {
    int jump_min, jump_max;         // set to user input

    // app banner
    cout << "\nJumping Bean!\n";

    // prompt for highest possible jump
    cout << "\nWhat's the highest the Bean can jump in inches? (0 quits) ";
    cin >> jump_max;

    // continue unless user wants to quit
    if (jump_max > 0)
    {
        // prompt for lowest possible jump
        cout << "What's the smallest jump possible for the Bean in inches? (0 quits) ";
        cin >> jump_min;

        // continue unless user wants to quit
        if (jump_min > 0)
        {
            // loop to jump constant times
            for (int i = 0; i < NUMBER_OF_JUMPS; i++)
            {
                // calculate random jump height
                int jump_height = rand() % (jump_max - jump_min + 1)
                    + jump_min;

                // display random jump height
                cout << "Jump " << i + 1 << ": " << jump_height << " inches\n";

            } // for
        }
    }

    cout << "\nGoodbye!\n";

    return 0;

}
