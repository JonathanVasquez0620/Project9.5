
using namespace std;

class Battery
{
public:
	Battery(double capacity);
	void drain(double amount);
	void charge();
	double getRemainCapacity() const;
private:
	double battCapacity;
	double totCharge;
};

Battery::Battery(double capacity)
{
	battCapacity = capacity;
	totCharge = capacity;
}

void Battery::drain(double amount)
{
	totCharge -= amount;
}

void Battery::charge()
{
	totCharge = battCapacity;
}

double Battery::getRemainCapacity() const
{
	return totCharge;
}
