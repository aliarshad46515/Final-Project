#include <iostream>
#include <string>

using namespace std;

class Bus{
    private:
        int busNumber;
        string driverName;
        string arrivalTime;
        string departureTime;
        string passengerNames[20];
        bool seatStatus[20];
    public:
        Bus(int busNumber, string driverName, string arrivalTime, string departureTime) {
            this->busNumber = busNumber;
            this->driverName = driverName;
            this->arrivalTime = arrivalTime;
            this->departureTime = departureTime;
            for (int i = 0; i < 20; i++) {
                passengerNames[i] = " ";
                seatStatus[i] = false;
            }
        }
        void displayBusDetails() {
            cout << "Bus Number: " << busNumber << endl;
            cout << "Driver Name: " << driverName << endl;
            cout << "Arrival Time: " << arrivalTime << endl;
            cout << "Departure Time: " << departureTime << endl;
            cout << "------------------------------------------" << endl;
        }
        void displaySeatDetails() {
            cout << "Seat Number\tPassenger Name" << endl;
            for (int i = 0; i < 20; i++) {
                cout << i+1 << "\t\t" << passengerNames[i] << endl;
            }
            cout << "------------------------------------------" << endl;
        }
        void bookSeat() {
            int seat;
            string name;
            cout << "Enter seat number: ";
            cin >> seat;
            if (seat < 1 || seat > 20) {
                cout << "Invalid seat number!" << endl;
                return;
            }
            if (seatStatus[seat-1]) {
                cout << "Seat already booked!" << endl;
                return;
            }
            cout << "Enter passenger name: ";
            cin >> name;
            passengerNames[seat-1] = name;
            seatStatus[seat-1] = true;
            cout << "Seat " << seat << " booked for " << name << "." << endl;
        }
        void cancelSeat() {
            int seat;
            cout << "Enter seat number: ";
            cin >> seat;
            if (seat < 1 || seat > 20) {
                cout << "Invalid seat number!" << endl;
                return;
            }
            if (!seatStatus[seat-1]) {
                cout << "Seat not booked!" << endl;
                return;
            }
            cout << "Seat " << seat << " cancelled for " << passengerNames[seat-1] << "." << endl;
            passengerNames[seat-1] = " ";
            seatStatus[seat-1] = false;
        }
};

int main() {
    Bus bus1(1, "Haider", "10:00", "11:30");
    int choice = 0;
    while (choice != 5) {
        cout << "------------------------------------------" << endl;
        cout << "Menu:" << endl;
        cout << "1. Display bus details" << endl;
        cout << "2. Display seat details" << endl;
        cout << "3. Book a seat" << endl;
        cout << "4. Cancel a seat" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                bus1.displayBusDetails();
                break;
            case 2:
                bus1.displaySeatDetails();
                break;
            case 3:
            	bus1.bookSeat();
            	break;
            case 4:
            	bus1.cancelSeat();
            	break;
            case 5:
            	cout << "Thank You For Using!!!" << endl;
            	break;
            default:
            	cout << "Invalid Entry!!!" << endl;
            	break;
            	
        }
    }
    return 0;
}

