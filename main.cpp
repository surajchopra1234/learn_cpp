// #include "classes/employee.h"
// using namespace std;
//
// int main() {
//     Employee emp1;
//
//     emp1.id = 1;
//     emp1.firstName = "Rahul";
//     emp1.lastName = "Sharma";
//
//     cout << "ID: " << emp1.id << endl << "Name: " << emp1.getFullName() << "\n\n";
//     emp1.displayDetails();
//
//     return 0;
// }

#include "classes/game.h"
using namespace std;

int main() {
    Game game;
    game.welcome();

    cout << "\nPress Enter to continue";
    getchar();

    game.showAllPlayers();

    cout << "\nPress Enter to continue";
    getchar();

    game.selectPlayers();

    game.showTeamPlayers();

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nPress Enter to toss";
    getchar();

    game.toss();

    return 0;
}
