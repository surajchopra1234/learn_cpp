#include <iostream>
using namespace std;

// Team class
class Team {
public:
    string name;
    string players[3];
    int totalRuns;

    Team(string name, string players[3]) {
        this->name = name;
        for (int i = 0; i < 3; ++i) {
            this->players[i] = players[i];
        }
    }
};

// Global variables for current batsman and bowler
string currentBatsman, currentBowler;

// Greets users.
void welcomeUsers() {
    cout << endl << "*************** Welcome to the Gully Cricket App! ***************" << endl;
    cout << endl << "Get ready for an exciting match between two teams." << endl << endl;
}

// Display players names of both the teams.
void displayPlayers(string playersA[3], string playersB[3]) {
    cout << "Players in Team A: ";
    for (int i = 0; i < 3; ++i) {
        cout << playersA[i] << " ";
    }
    cout << endl << "Players in Team B: ";
    for (int i = 0; i < 3; ++i) {
        cout << playersB[i] << " ";
    }
    cout << endl << endl;
}

// Select random batsman and bowler from the teams.
void selectBatsmanAndBowler(Team batTeam, Team bowlTeam) {
    int num1 = rand() % 3;
    int num2 = rand() % 3;

    currentBatsman = batTeam.players[num1];
    currentBowler = bowlTeam.players[num2];
}

/* Start inning by displaying initial inning details */
void startInning(int inning, string batTeam, string bowlTeam) {
    cout << "Starting Inning " << inning << endl;
    cout << "Batting team: " << batTeam << endl;
    cout << "Bowling team: " << bowlTeam << endl;
    cout << "Current batsman: " << currentBatsman << endl;
    cout << "Current bowler: " << currentBowler << endl << endl;
}

// Play inning by generating random runs for each ball.
int playInning() {
    int totalRuns = 0;

    for (int ball = 1; ball <= 6; ball++) {
        int runs = rand() % 7; // Generates random number between 0 and 6
        totalRuns += runs;
        cout << "Ball " << ball << ": " << runs << " runs" << endl;
    }

    return totalRuns;
}

// Display final score of the team.
void displayScore(Team team) {
    cout << endl << team.name << " scored " << team.totalRuns << " runs in the inning." << endl << endl;
}

// Decide winner by comparing final scores of both the teams.
void decideWinner(int teamAScore, int teamBScore) {
    if (teamAScore > teamBScore) {
        cout << "Team A wins the match by " << teamAScore - teamBScore << " runs." << endl << endl;
    } else if (teamBScore > teamAScore) {
        cout << "Team B wins the match by " << teamBScore - teamAScore << " runs." << endl << endl;
    } else {
        cout << "Match is a draw." << endl << endl;
    }

    cout << "*************** Thank you for playing! ***************" << endl;
}

int main() {
    // Welcome users.
    welcomeUsers();

    string playersA[3] = {"Player1", "Player2", "Player3"};
    string playersB[3] = {"Player4", "Player5", "Player6"};

    Team teamA("TeamA", playersA);
    Team teamB("TeamB", playersB);

    // Display players of both the teams.
    displayPlayers(playersA, playersB);

    // 1st Inning
    selectBatsmanAndBowler(teamA, teamB);
    startInning(1, teamA.name, teamB.name);
    teamA.totalRuns = playInning();
    displayScore(teamA);

    // 2nd Inning
    selectBatsmanAndBowler(teamB, teamA);
    startInning(2, teamB.name, teamA.name);
    teamB.totalRuns = playInning();
    displayScore(teamB);

    decideWinner(teamA.totalRuns, teamB.totalRuns);

    return 0;
}
