#include <iostream>

using namespace std;

// Table of patients and their checkup details
// Rooms are roows
// Doctors are columns
string patients[2][3] = {
	{ "Afuah", "Araba", "Johnson" },
	{ "Benjamin", "Koroma", "Chelsea" }
};

int main () {

	// Loop through each room. 
	for (int room = 1; room <= 2; room++) {
		
		// Get array index of room number.
		// Array indecies starts from 0 instead of 1
		int roomIndex = room - 1;

		// In each room, loop through all the doctors 
		for (int doctor = 1; doctor <= 3; doctor++) {
			
			// Get array index of doctor.
			int doctorIndex = doctor - 1;

			// Fetch patient name from checkup table
			string patient = patients[roomIndex][doctorIndex];

			// Output checkup details to the screen
			cout << patient << " was treated by Doctor " << doctor << " in Room " << room << endl;
		}
	}

	// Return
	return 0;

}
