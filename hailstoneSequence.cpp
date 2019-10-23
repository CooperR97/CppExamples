/**
* Created by Cooper Redfern
* Hailstone Number Generator
* Hailstone Sequence is a mathematical phenomenon. The basis for the sequence is as follows:
* a number 'n' will always converge to one if the following rules enforced:
* if n even: n = n/2
* if n odd: n = 3n +1
*
* The following program is a demonstration for this theorem.
*/

#include <iostream>


using namespace std;

int main() {

    long int hailstoneNum;

    // allow the user to enter some input
    cin >> hailstoneNum;

    // 'n' does not equal 1
    while(hailstoneNum != 1){

        // n/2 is even
        if(hailstoneNum % 2 == 0){
            hailstoneNum /= 2;
        }
        // n/2 is odd
        else{
            hailstoneNum = hailstoneNum * 3 + 1;
        }

        //if 'n' turns out negative, the number was too large to compute
        if(hailstoneNum < 0){
            cout << "hailstoneNum to large to compute." << endl;
            exit(EXIT_FAILURE);
        }

        // write 'n' to the console after each computation is applied
        cout << hailstoneNum << endl;
    }

}