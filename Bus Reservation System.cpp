#include <iostream>
#include <string>

using namespace std;

class BusReservationSystem {
    private:
        int busNumber;
        string driverName;
        string arrivalTime;
        string departureTime;
        string passengerNames[20];
        bool seatStatus[20];
        double fare[20];
    public:
        BusReservationSystem(int busNumber, string driverName, string arrivalTime, string departureTime) {
            this->busNumber = busNumber;
            this->driverName = driverName;
            this->arrivalTime = arrivalTime;
            this->departureTime = departureTime;
            for (int i = 0; i < 20; i++) {
                passengerNames[i] = " ";
                seatStatus[i] = false;
                fare[i] = 0;
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
            cout << "Seat Number\tPassenger Name\tFare" << endl;
            for (int i = 0; i < 20; i++) {
                cout << i+1 << "\t\t" << passengerNames[i] << "\t\t" << fare[i] << endl;
            }
            cout << "------------------------------------------" << endl;
        }
        void bookSeat() {
            int seat;
            string name;
            double fare;
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
            cout << "Enter fare: ";
            cin >> fare;
            passengerNames[seat-1] = name;
            seatStatus[seat-1] = true;
            this->fare[seat-1] = fare;
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
            fare[seat-1] = 0;
        }
        void searchPassenger() {
            string name;
            bool found = false;
            cout << "Enter passenger name to search: ";
            cin >> name;
            for (int i = 0; i < 20; i++) {
                if (passengerNames[i] == name) {
                    found = true;
                    cout << "Passenger " << name << " found in seat " << i+1 << " with fare " << fare[i] <<"." << endl;
                }
            }
            if (!found) {
                cout << "Passenger " << name << " not found in the bus!" << endl;
            }
        }
        void displayTotalRevenue() {
            double totalRevenue = 0;
            for (int i = 0; i < 20; i++) {
                totalRevenue += fare[i];
            }
            cout << "Total revenue: " << totalRevenue << endl;
        }
};


int main() {
    BusReservationSystem bus1(1, "Haider", "10:00", "11:30");
    int choice = 0;
    while (choice != 7) {
        cout << "------------------------------------------" << endl;
		cout << "Menu:" << endl;
        cout << "1. Display bus details" << endl;
        cout << "2. Display seat details" << endl;
        cout << "3. Book a seat" << endl;
        cout << "4. Cancel a seat" << endl;
        cout << "5. Total Revenue" << endl;
        cout << "6. Search Passenger" << endl;
        cout << "7. Quit" << endl;
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
            	bus1.displayTotalRevenue();
            	break;
            case 6:
            	bus1.searchPassenger();
            	break;
            case 7:
            	cout << "Thank You For Using!!!" << endl;
            	break;
            default:
            	cout << "Invalid Entry!!!" << endl;
            	break;
            	
        }
    }
    return 0;
}