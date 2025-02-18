class Bus : public Car, public Truck {
	public :

		Bus() : Vehicle(5) {
			cout << "Bus's constructor " << endl;
		}

		/*
		void print() {
			cout << "BUs" << endl;
		}*/
};
