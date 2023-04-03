#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Bus{
	private:
		string driverName;
		string arrivalTime;
		string departTime;
		string destination;
		string origin;
	public:
		Bus(string driverName, string arrivalTime, string departTime, string destination, string origin){
			this->driverName=driverName;
			this->arrivalTime=arrivalTime;
			this->departTime=departTime;
			this->destination=destination;
			this->origin=origin;
		}
		void getBus(){			
			cout << "Enter Driver Name: ";
			cin.ignore();
			getline(cin, driverName);
			cout << "Enter Arrival Time: ";
			cin >> arrivalTime;
			cout << "Enter Departuer Time: ";
			cin >> departTime;
			cout << "Enter Destination: ";
			cin.ignore();
			getline(cin, destination);
			cout << "Enter Origin: ";
			cin.ignore();
			getline(cin, origin);
		}
		
		void displayBus(){
			cout << "Please Wait";
	    	for(int i=0; i<3; i++){
	    		Sleep (500);
	    		cout << "-";
			}
			cout << "Driver Name: " << driverName << endl;
			cout << "Arrival Time: " << arrivalTime << endl;
			cout << "Departure Time: " << departTime << endl;
			cout << "Destination: " << destination << endl;
			cout << "Origin: " << origin << endl;
		}
		
		void searchBus(){
			string driver;
			cout << "Enter Driver Name: ";
			cin >> driver;
			cout << "Please Wait";
	    	for(int i=0; i<3; i++){
	    		Sleep (500);
	    		cout << "-";
			}
			cout << endl;
			if(driverName==driver){
				cout << "Bus Found!!!" << endl;
				cout << "Driver Name: " << driverName << endl;
				cout << "Arrival Time: " << arrivalTime << endl;
				cout << "Departure Time: " << departTime << endl;
				cout << "Destination: " << destination << endl;
				cout << "Origin: " << origin << endl;
			}
			else
				cout << "Bus Not Found!!!" << endl;
		}
};

class Passenger{
	private:
		string psngrName[20];
		int age;
		char phone[11];
		char CNIC[15];
		bool seatStatus[20];
		int fare[20];
	public:
		Passenger(){
		for (int i = 0; i < 20; i++) {
                psngrName[i] = " ";
                seatStatus[i] = false;
                fare[i] = 0;
            }
        }
		
		void getInfo(){
			int seat;
			string name;
			int fare;	
			
			cout << "Seat Number: ";
			cin >> seat;
			if (seat < 1 || seat > 20) {
                cout << "Seat Unavailable!!!" << endl;
                return;
            }
            if (seatStatus[seat-1]) {
                cout << "Seat already booked!" << endl;
                return;
            }
			cout << "Enter Name: ";
			cin.ignore();
			getline(cin, name);
			cout << "Enter Age: ";
			cin >> age;
			cout << "Enter Phone Number: ";
			cin >> phone;
			cout << "Enter Your CNIC(With Hyphen)";
			cin >> CNIC;
			cout << "Enter fare: ";
            cin >> fare;
            
			psngrName[seat-1] = name;
            seatStatus[seat-1] = true;
            this->fare[seat-1] = fare;
            cout << "Seat " << seat << " booked for " << name << "." << endl;
                       
		}
		
		void cancelSeat() {
            int seat;
            cout << "Seat Number: ";
            cin >> seat;
            cout << "Please Wait";
	    	for(int i=0; i<3; i++){
	    		Sleep (500);
	    		cout << "-";
			}
            if (seat < 1 || seat > 20) {
                cout << "Seat Unavailable!!!" << endl;
                return;
            }
            if (!seatStatus[seat-1]) {
                cout << "Seat not booked!" << endl;
                return;
            }
            cout << "Seat " << seat << " cancelled for " << psngrName[seat-1] << "." << endl;
            psngrName[seat-1] = " ";
            seatStatus[seat-1] = false;
            fare[seat-1] = 0;
        }
        
        void searchPassenger() {
            string name;
            bool found = false;
            cout << "Enter Passenger Name you want to Search: ";
            cin >> name;
            cout << "Please Wait";
	    	for(int i=0; i<3; i++){
	    		Sleep (500);
	    		cout << "-";
			}
			cout << endl;
            for (int i = 0; i < 20; i++) {
                if (psngrName[i] == name) {
                    found = true;
                    cout << "Passenger " << name << " found in seat " << i+1 << " with fare " << fare[i] <<"." << endl;
                }
            }
            if (!found) {
                cout << "Passenger " << name << " not found in the bus!!!" << endl;
            }
        }
		
		void displayInfo(){
			for (int i = 0; i < 20; i++) {
				if (seatStatus[i]) {
					cout << "Seat Number: " << i+1 << endl;
					cout << "Passenger Name: " << psngrName[i] << endl;
					cout << "Age: " << age << endl;
					cout << "CNIC: " << CNIC << endl;
					cout << "Phone Number: " << phone << endl;
					cout << "Fare: " << fare << endl;
					cout << "------------------------------------------" << endl;
				}
			}
		}
		
		void displaySeatDetails() {
			cout << "Please Wait";
	    	for(int i=0; i<3; i++){
	    		Sleep (500);
	    		cout << "-";
			}
			cout << endl;
            cout << "Seat Number\tPassenger Name\tFare" << endl;
            for (int i = 0; i < 20; i++) {
                cout << i+1 << "\t\t" << psngrName[i] << "\t\t" << fare[i] << endl;
            }
            cout << "------------------------------------------" << endl;
        }
		
		void displayTotalRevenue() {
            double totalRevenue = 0;
            for (int i = 0; i < 20; i++) {
                totalRevenue += fare[i];
            }
            cout << "Total revenue: " << totalRevenue << endl;
        }
        
};

class Admin{
	private:
		string username;
		string password;
	public:
		void menu(){
			cout << endl << "-------------Menu-------------"<< endl << endl;
			cout << "1. Add Bus \n2. Display Bus \n3. Search Bus \n4. Reserve Seat \n5. Cancel Seat" << endl;
			cout << "6. Display Passengers \n7. Display Seat Details \n8. Search Passengers \n9. Calculate Fair \n10. Exit" << endl;
		}
		
		Admin(string username, string password) {
			this->username = username;
			this->password = password;
		}
		bool login(string username, string password) {
			if (this->username == username && this->password == password) {
			return true;
		} 
		else {
			return false;
		}
		}
			
};



int main(){
	cout << "================================" << endl << endl;
	cout << "\tBUS RESERVATION SYSTEM" <<endl << endl;
	cout << "================================" << endl << endl;
	
	Admin ad("admin", "password");
	string username;
	string password;
	bool loggedIn = false;
	while (!loggedIn) {
    	cout << "\tEnter Username: ";
    	cin >> username;
    	cout << "\tEnter Password: ";
    	cin >> password;
	    if (ad.login(username, password)) {
	    	cout << "\tPlease Wait";
	    	for(int i=0; i<3; i++){
	    		Sleep (500);
	    		cout << "-";
			}
	        cout << "\n\tLogin successful." << endl;
	        loggedIn = true;
	    } 
		else {
        cout << "\tInvalid Username & Password. Please try again." << endl;
    	}
	}
	
	
	Passenger psngr;
	Bus bus("Hammad", "11:30", "8:30", "Lahore", "Shorkot");
	
	char again;
	int option;
		while(option!=10){
			ad.menu();
			cin >> option;
			switch(option){
				case 1:
					bus.getBus();
					break;
				case 2:
					bus.displayBus();
					break;
				case 3:
					bus.searchBus();
					break;
				case 4:
					psngr.getInfo();
					break;
				case 5:
					psngr.cancelSeat();
					break;
				case 6:
					psngr.displayInfo();
					break;
				case 7:
					psngr.displaySeatDetails();
					break;
				case 8:
					psngr.searchPassenger();
					break;
				case 9:
					psngr.displayTotalRevenue();
					break;
				case 10:
					cout << "TnakYou For Using Bus Reservation System!!!" << endl;
					break;
				default:
					cout << "Invalid Selection!!!" << endl;
					break;
			}
		}
}