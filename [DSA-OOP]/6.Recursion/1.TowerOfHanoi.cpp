/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Tower of Honoi puzzle
// Three Towers:
//              A (source)
//              B (auxillary / helper)
//              C (destination)
// Rules:
//       1. Move all the disks from tower A to C.
//       2. Bigger disks can't be on the smaller ones.
//       3. You can move only one disk at a time only.
//       4. you can't place disks anywhere other then the towers themselves.

// Solution - Using Recursion:
//           1. 1st move n-1 disks from tower A to tower B => towerC becomes helper
//           2. then move nth disk from tower A to tower C
//           3. at last move those n-1 disks from tower B to tower C => towerA becomes helper

class TOH {
public:
    static void TOHMoves(int disks, char towerA, char towerB, char towerC)
    {
        if (disks > 0) {
            TOHMoves(disks - 1, towerA, towerC, towerB);
            cout << towerA << " -> " << towerC << nl;
            TOHMoves(disks - 1, towerB, towerA, towerC);
        }
    }
};

int main()
{
    int disks;
    cout << "Enter disks: ";
    cin >> disks;
    cout << "Moves for moving " << disks << " disks from tower A to C" << nl;
    TOH::TOHMoves(disks, 'A', 'B', 'C');

    cout << nl << nl;
    TOH::TOHMoves(4, 'A', 'B', 'C');

    return 0;
}