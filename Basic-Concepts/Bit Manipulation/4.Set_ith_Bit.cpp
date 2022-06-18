/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Here need to set the ith bit

// LOGIC:
// eg: n = 5, i = 1
//     5 =  0     1    0    1
//         i=3   i=2  i=1  i=0

// => ith => 1th bit is 0 in 5 => we need to set it.

// UNDERSTNDING:
//    eg: n = 5, i = 1
//    mask = (1<<i) => (1<<1) => (0001)<<1 => (0010)
//    Now,
//        (n | (mask)) => (5 | (1<<2)):
//        => ( (0101) | (0100) ):
//        =>              0101
//                      | 0010
//                      ________
//                        0111  => ith bit of num is 1 (set) now

int main()
{
    int num, i;
    cin >> num >> i;
    int newNum = (num | (1 << i)); // here 1<<i is required 'mask'
    cout << "After setting " << i << "th bit of " << num << " it becomes " << newNum << nl;
    return 0;
}