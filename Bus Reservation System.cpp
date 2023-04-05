#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Bus{
	protected:
		string driverName;
		string arrivalTime;
		string departTime;
		string destination;
		string origin;
		
};

class BuisnessClass: public Bus{
	private:
		string amenity1 = "Wifi";
		string amenity2 = " AC";
		string amenity3 = " TV";
		string seatType = "Reclining Seats";
		string drinks;
		string lunch;
		int fare = 2000;
	public:
		bool busadded = false;
		
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
			cout << "Enter Drinks: ";
			cin.ignore();
			getline(cin, drinks);
			cout << "Enter Lunch: ";
			cin.ignore();
			getline(cin, lunch);
			busadded = true;
		}
		
		void displayBus(){
			cout << "Please Wait";
	    	for(int i=0; i<3; i++){
	    		Sleep (500);
	    		cout << "-";
			}
			if(busadded){
			
			cout << "Driver Name: " << driverName << endl;
			cout << "Amenities: " << amenity1 + amenity2 + amenity3 << endl;
			cout << "Arrival Time: " << arrivalTime << endl;
			cout << "Departure Time: " << departTime << endl;
			cout << "Destination: " << destination << endl;
			cout << "Origin: " << origin << endl;
			cout << "Drinks: " << drinks << endl;
			cout << "Lunch: " << lunch << endl;
			cout << "Fare: " << fare << endl;
			}
           	else 
           		cout << "Please Add a Bus first!!!" << endl; 
		}
		
		void searchBus(){
			if(busadded){
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
				cout << "Amenities: " << amenity1 + amenity2 + amenity3 << endl;
				cout << "Seat Type: " << seatType << endl;
				cout << "Arrival Time: " << arrivalTime << endl;
				cout << "Departure Time: " << departTime << endl;
				cout << "Destination: " << destination << endl;
				cout << "Origin: " << origin << endl;
				cout << "Drinks: " << drinks << endl;
				cout << "Lunch: " << lunch << endl;
				cout << "Fare: " << fare << endl;
			}
			else
				cout << "Bus Not Found!!!" << endl;
			}
           	else 
           		cout << "Please Add a Bus first!!!" << endl; 
		}
		
		int getFare(){
			return fare;
		}
		
};

class Sleeper: public Bus{
	private:
		string seatType = "Reclining Seats";
		string amenities = "AC & Wifi";
		int fare = 1500;
	public:
		bool busadded = false;
		
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
			busadded=true;
		}
		
		void displayBus(){
			if(busadded){
			cout << "Please Wait";
	    	for(int i=0; i<3; i++){
	    		Sleep (500);
	    		cout << "-";
			}
			
			cout << "Driver Name: " << driverName << endl;
			cout << "Seat Type: " << seatType << endl;
			cout << "Amenities: " << amenities << endl;
			cout << "Arrival Time: " << arrivalTime << endl;
			cout << "Departure Time: " << departTime << endl;
			cout << "Destination: " << destination << endl;
			cout << "Origin: " << origin << endl;
			cout << "Fare: " << fare << endl;
			}
           	else 
           		cout << "Please Add a Bus first!!!" << endl; 
		}
		
		void searchBus(){
			if(busadded){
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
				cout << "SeatType: " << seatType << endl;
				cout << "Amenities: " << amenities << endl;
				cout << "Arrival Time: " << arrivalTime << endl;
				cout << "Departure Time: " << departTime << endl;
				cout << "Destination: " << destination << endl;
				cout << "Origin: " << origin << endl;
				cout << "Fare: " << fare << endl;
			}
			else
				cout << "Bus Not Found!!!" << endl;
			}
           	else 
           		cout << "Please Add a Bus first!!!" << endl; 
		}
		
		int getFare(){
			return fare;
		}
};

class EconomyClass: public Bus{
	private:
		string seatType = "Comfortable";
		string Amenities = "AC";
		int fare = 1000;
	public:
		bool busadded = false;
		
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
			busadded=true;
		}
		
		void displayBus(){
			if(busadded){
			cout << "Please Wait";
	    	for(int i=0; i<3; i++){
	    		Sleep (500);
	    		cout << "-";
			}
			
			cout << "Driver Name: " << driverName << endl;
			cout << "Seat Type: " << seatType << endl;
			cout << "Amenities: " << Amenities << endl;
			cout << "Arrival Time: " << arrivalTime << endl;
			cout << "Departure Time: " << departTime << endl;
			cout << "Destination: " << destination << endl;
			cout << "Origin: " << origin << endl;
			cout << "Fare: " << fare << endl;
			}
           	else 
           		cout << "Please Add a Bus first!!!" << endl; 
		}
		
		void searchBus(){
			if(busadded){
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
				cout << "SeatType: " << seatType << endl;
				cout << "Amenities: " << Amenities << endl;
				cout << "Arrival Time: " << arrivalTime << endl;
				cout << "Departure Time: " << departTime << endl;
				cout << "Destination: " << destination << endl;
				cout << "Origin: " << origin << endl;
				cout << "Fare: " << fare << endl;
			}
			else
				cout << "Bus Not Found!!!" << endl;
			}
           	else 
           		cout << "Please Add a Bus first!!!" << endl; 
		}
		
		int getFare(){
			return fare;
		}
};

class Passenger{
	private:
		string bcName[20];
		string ecName[20];
		string slprName[20];
		int age;
		char phone[11];
		char CNIC[15];
		bool bcseatStatus[20];
		bool ecseatStatus[20];
		bool slprseatStatus[20];
		int bcfare[20];
		int ecfare[20];
		int slprfare[20];
	public:
		BuisnessClass bc;
		EconomyClass ec;
		Sleeper slpr;
		Passenger(){
		for (int i = 0; i < 20; i++) {
                bcName[i] = " ";
                ecName[i] = " ";
                slprName[i] = " ";
                bcseatStatus[i] = false;
				ecseatStatus[i] = false;
                slprseatStatus[i] = false;
				bcfare[i] = 0;
                ecfare[i] = 0;
                slprfare[i] = 0;
            }
        }
        
        void busMenu(){
        		
			cout << "--------------------------------------" << endl;
			cout << "\tBuses Available" << endl;
			cout << "--------------------------------------" << endl << endl;
			cout << "1. Buisness Class" << endl;
			cout << "2. Economy Class" << endl;
			cout << "3. Sleeper" << endl;
			cout << "4. Exit" << endl;
			cout << "Please Select Bus: ";
		}
		
		void getInfo(){
			int seat;
			string name;
			int fare;			
			int option;
			
			busMenu();
			cin >> option;
			switch(option){
				case 1:
					if(bc.busadded){
					cout << "Seat Number: ";
					cin >> seat;
					if (seat < 1 || seat > 20) {
                	cout << "Seat Unavailable!!!" << endl;
                	return;
            		}
            		if (bcseatStatus[seat-1]) {
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
					if(option == 1){
						fare = bc.getFare();
					}
					else if(option == 2){
						fare = ec.getFare();
					}
					else if (option == 3){
						fare = slpr.getFare();
					}
            
					bcName[seat-1] = name;
            		bcseatStatus[seat-1] = true;
		            bcfare[seat-1] = fare;
           			cout << "Seat " << seat << " booked for " << name << "." << endl;
           			}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 2:
					if(ec.busadded){
					cout << "Seat Number: ";
					cin >> seat;
					if (seat < 1 || seat > 20) {
                	cout << "Seat Unavailable!!!" << endl;
                	return;
            		}
            		if (ecseatStatus[seat-1]) {
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
					if(option == 1){
						fare = bc.getFare();
					}
					else if(option == 2){
						fare = ec.getFare();
					}
					else if (option == 3){
						fare = slpr.getFare();
					}
            
					ecName[seat-1] = name;
            		ecseatStatus[seat-1] = true;
		            ecfare[seat-1] = fare;
           			cout << "Seat " << seat << " booked for " << name << "." << endl;
           			}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 3:
					if(slpr.busadded){
					cout << "Seat Number: ";
					cin >> seat;
					if (seat < 1 || seat > 20) {
                	cout << "Seat Unavailable!!!" << endl;
                	return;
            		}
            		if (slprseatStatus[seat-1]) {
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
					if(option == 1){
						fare = bc.getFare();
					}
					else if(option == 2){
						fare = ec.getFare();
					}
					else if (option == 3){
						fare = slpr.getFare();
					}
            
					slprName[seat-1] = name;
            		slprseatStatus[seat-1] = true;
		            slprfare[seat-1] = fare;
           			cout << "Seat " << seat << " booked for " << name << "." << endl;
           			}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 4:
					cout << "ThankYou for using!!!" << endl;
					break;
				default:
					cout << "Invalid Entry!!!" << endl;
					break;
			}	
		}
		
		void cancelSeat() {
			int option;
			
			busMenu();
			cin >> option;
			switch(option){
				case 1:
					if(bc.busadded){
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
		            if (!bcseatStatus[seat-1]) {
		                cout << "Seat not booked!" << endl;
		                return;
		            }
		            cout << "Seat " << seat << " cancelled for " << bcName[seat-1] << "." << endl;
		            bcName[seat-1] = " ";
		            bcseatStatus[seat-1] = false;
		            bcfare[seat-1] = 0;
		            }
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 2:					
					if(ec.busadded){
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
		            if (!ecseatStatus[seat-1]) {
		                cout << "Seat not booked!" << endl;
		                return;
		            }
		            cout << "Seat " << seat << " cancelled for " << ecName[seat-1] << "." << endl;
		            ecName[seat-1] = " ";
		            ecseatStatus[seat-1] = false;
		            ecfare[seat-1] = 0;
		            }
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 3:
					if(slpr.busadded){					
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
		            if (!slprseatStatus[seat-1]) {
		                cout << "Seat not booked!" << endl;
		                return;
		            }
		            cout << "Seat " << seat << " cancelled for " << slprName[seat-1] << "." << endl;
		            slprName[seat-1] = " ";
		            slprseatStatus[seat-1] = false;
		            slprfare[seat-1] = 0;
		            }
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 4:
					cout << "ThankYou for using!!!" << endl;
					break;
				default:
					cout << "Invalid Entry!!!" << endl;
					break;
			}
        }
        
        void searchPassenger() {
        	int option;
			string name;
			bool found = false;
			
			busMenu();
			cin >> option;
			switch(option){
				case 1:
					if(bc.busadded){
            		cout << "Enter Passenger Name you want to Search: ";
            		cin >> name;
            		cout << "Please Wait";
	    			for(int i=0; i<3; i++){
	    				Sleep (500);
	    				cout << "-";
					}
					cout << endl;
		            for (int i = 0; i < 20; i++) {
		                if (bcName[i] == name) {
	                    found = true;
	                    cout << "Passenger " << name << " found in seat " << i+1 << " with fare " << bcfare[i] <<"." << endl;
	    	            }
		            }
		            if (!found) {
		                cout << "Passenger " << name << " not found in the bus!!!" << endl;
	            	}
	            	}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 2:
					if(ec.busadded){					
            		cout << "Enter Passenger Name you want to Search: ";
            		cin >> name;
            		cout << "Please Wait";
	    			for(int i=0; i<3; i++){
	    				Sleep (500);
	    				cout << "-";
					}
					cout << endl;
		            for (int i = 0; i < 20; i++) {
		                if (ecName[i] == name) {
	                    found = true;
	                    cout << "Passenger " << name << " found in seat " << i+1 << " with fare " << ecfare[i] <<"." << endl;
	    	            }
		            }
		            if (!found) {
		                cout << "Passenger " << name << " not found in the bus!!!" << endl;
	            	}
	            	}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 3:
					if(slpr.busadded){
            		cout << "Enter Passenger Name you want to Search: ";
            		cin >> name;
            		cout << "Please Wait";
	    			for(int i=0; i<3; i++){
	    				Sleep (500);
	    				cout << "-";
					}
					cout << endl;
		            for (int i = 0; i < 20; i++) {
		                if (slprName[i] == name) {
	                    found = true;
	                    cout << "Passenger " << name << " found in seat " << i+1 << " with fare " << slprfare[i] <<"." << endl;
	    	            }
		            }
		            if (!found) {
		                cout << "Passenger " << name << " not found in the bus!!!" << endl;
	            	}
	            	}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 4:
					cout << "ThankYou for using!!!" << endl;
					break;
				default:
					cout << "Invalid Entry!!!" << endl;
					break;
			}
        }
		
		void displayInfo(){
			int option;
			busMenu();
			cin >> option;
			switch(option){
				case 1:
					if(bc.busadded){					
					for (int i = 0; i < 20; i++) {
						if (bcseatStatus[i]) {
						cout << "Seat Number: " << i+1 << endl;
						cout << "Passenger Name: " << bcName[i] << endl;
						cout << "Age: " << age << endl;
						cout << "CNIC: " << CNIC << endl;
						cout << "Phone Number: " << phone << endl;
						cout << "Fare: " << bcfare << endl;
						cout << "------------------------------------------" << endl;
						}
					}
					}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 	
					break;
				case 2:
					if(ec.busadded){					
					for (int i = 0; i < 20; i++) {
						if (ecseatStatus[i]) {
						cout << "Seat Number: " << i+1 << endl;
						cout << "Passenger Name: " << ecName[i] << endl;
						cout << "Age: " << age << endl;
						cout << "CNIC: " << CNIC << endl;
						cout << "Phone Number: " << phone << endl;
						cout << "Fare: " << ecfare << endl;
						cout << "------------------------------------------" << endl;
						}
					}
					}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 3:
					if(slpr.busadded){				
					for (int i = 0; i < 20; i++) {
						if (slprseatStatus[i]) {
						cout << "Seat Number: " << i+1 << endl;
						cout << "Passenger Name: " << slprName[i] << endl;
						cout << "Age: " << age << endl;
						cout << "CNIC: " << CNIC << endl;
						cout << "Phone Number: " << phone << endl;
						cout << "Fare: " << slprfare << endl;
						cout << "------------------------------------------" << endl;
						}
					}	
					}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 4:
					cout << "ThankYou for using!!!" << endl;
					break;
				default:
					cout << "Invalid Entry!!!" << endl;
					break;
			}
		}
		
		void displaySeatDetails() {
			int option;
			busMenu();
			cin >> option;
			switch(option){
				case 1:
					if(bc.busadded){
					cout << "Please Wait";
	    			for(int i=0; i<3; i++){
	    				Sleep (500);
	    				cout << "-";
					}
					cout << endl;
            		cout << "Seat Number\tPassenger Name\tFare" << endl;
            		for (int i = 0; i < 20; i++) {
                		cout << i+1 << "\t\t" << bcName[i] << "\t\t" << bcfare[i] << endl;
            		}
            		cout << "------------------------------------------" << endl;
            		}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 2:
					if(ec.busadded){					
					cout << "Please Wait";
	    			for(int i=0; i<3; i++){
	    				Sleep (500);
	    				cout << "-";
					}
					cout << endl;
            		cout << "Seat Number\tPassenger Name\tFare" << endl;
            		for (int i = 0; i < 20; i++) {
                		cout << i+1 << "\t\t" << ecName[i] << "\t\t" << ecfare[i] << endl;
            		}
            		cout << "------------------------------------------" << endl;
            		}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 3:
					if(slpr.busadded){
					cout << "Please Wait";
	    			for(int i=0; i<3; i++){
	    				Sleep (500);
	    				cout << "-";
					}
					cout << endl;
            		cout << "Seat Number\tPassenger Name\tFare" << endl;
            		for (int i = 0; i < 20; i++) {
                		cout << i+1 << "\t\t" << slprName[i] << "\t\t" << slprfare[i] << endl;
            		}
            		cout << "------------------------------------------" << endl;
            		}
           			else 
           				cout << "Please Add a Bus first!!!" << endl; 
					break;
				case 4:
					cout << "ThankYou for using!!!" << endl;
					break;
				default:
					cout << "Invalid Entry!!!" << endl;
					break;
			}
        }
		
		void displayTotalRevenue() {
            double totalRevenue = 0;
            for (int i = 0; i < 20; i++) {
                totalRevenue += bcfare[i] + ecfare[i] + slprfare[i];
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

	system ("cls");
	
	cout << "================================" << endl << endl;
	cout << "\tBUS RESERVATION SYSTEM" <<endl << endl;
	cout << "================================" << endl << endl;
	
	Passenger psngr;
	BuisnessClass bc;
	EconomyClass ec;
	Sleeper slpr;
	
	char again;
	int option;
		while(option!=10){
			ad.menu();
			cin >> option;
			switch(option){
				case 1:
					int option;
			
					cout << "--------------------------------------" << endl;
					cout << "\tBuses Available" << endl;
					cout << "--------------------------------------" << endl << endl;
					cout << "1. Buisness Class" << endl;
					cout << "2. Economy Class" << endl;
					cout << "3. Sleeper" << endl;
					cout << "4. Exit" << endl;
					cout << "Please Select Bus: ";
					cin >> option;
					switch(option){
						case 1:
							bc.getBus();
							break;
						case 2:
							ec.getBus();
							break;
						case 3:
							slpr.getBus();
							break;
						case 4:
							cout << "ThankYou for using!!!" << endl;
							break;
						default:
							cout << "Invalid Entry!!!" << endl;
							break;
					}
					break;
				case 2:
					cout << "--------------------------------------" << endl;
					cout << "\tBuses Available" << endl;
					cout << "--------------------------------------" << endl << endl;
					cout << "1. Buisness Class" << endl;
					cout << "2. Economy Class" << endl;
					cout << "3. Sleeper" << endl;
					cout << "4. Exit" << endl;
					cout << "Please Select Bus: ";
					cin >> option;
					switch(option){
						case 1:
							bc.displayBus();
							break;
						case 2:
							ec.displayBus();
							break;
						case 3:
							slpr.displayBus();
							break;
						case 4:
							cout << "ThankYou for using!!!" << endl;
							break;
						default:
							cout << "Invalid Entry!!!" << endl;
							break;
					}
					break;
				case 3:
					cout << "--------------------------------------" << endl;
					cout << "\tBuses Available" << endl;
					cout << "--------------------------------------" << endl << endl;
					cout << "1. Buisness Class" << endl;
					cout << "2. Economy Class" << endl;
					cout << "3. Sleeper" << endl;
					cout << "4. Exit" << endl;
					cout << "Please Select Bus: ";
					cin >> option;
					switch(option){
						case 1:
							bc.searchBus();
							break;
						case 2:
							ec.searchBus();
							break;
						case 3:
							slpr.searchBus();
							break;
						case 4:
							cout << "ThankYou for using!!!" << endl;
							break;
						default:
							cout << "Invalid Entry!!!" << endl;
							break;
					}
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