//------------------------------------------------------------------------------
// ex4_jumping_bean.cpp
//
// Jumping Bean
//      - user enters minimum and maximum jump in inches
//      - app terminates when <= 0 laps requested
//      - displays random jump height per user values 
//------------------------------------------------------------------------------
#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// globals
//------------------------------------------------------------------------------
namespace bean
{
    int jump_min = 0;
    int jump_max = 0;
}

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {
    // app banner
    cout << "\nJumping Bean!\n";

    // prompt for highest possible jump
    cout << "\nHow high can the Bean jump in inches? (0 quits) ";
    cin >> bean::jump_max;

    // check for user wants to quit
    if (bean::jump_max <= 0)
    {
        cout << "Goodbye!\n";
        exit(0);
    }

    // prompt for lowest possible jump
    cout << "What's the smallest jump possible for the Bean in inches? (0 quits) ";
    cin >> bean::jump_min;

    // loop to jump until user quits
    while (bean::jump_min > 0)
    {
        // calculate random jump height
        int jump_height = rand() % bean::jump_min +
            bean::jump_max - bean::jump_min + 1;

        // display random jump height
        cout << "The Bean jumped " << jump_height << " inches!\n";

        // prompt for highest possible jump
        cout << "How high can the Bean jump in inches? (0 quits) ";
        cin >> bean::jump_max;

        // check for user wants to quit
        if (bean::jump_max <= 0)
        {
            cout << "Goodbye!\n";
            exit(0);
        }

        // prompt for lowest possible jump
        cout << "What's the smallest jump possible for the Bean in inches? (0 quits) ";
        cin >> bean::jump_min;

    } // while user wants another

    cout << "\nGoodbye!\n";

    return 0;

}
