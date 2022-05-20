//it21288326
//U D S V Dharmasena

#include "Customer.h"
#include "Vehicle.h"

class Ownership {
private:
	Customer* cus;
	Vehicle* vehicle;
public:
	Ownership(Customer* cus, Vehicle* vehicle);
	void Displayownership();
};
