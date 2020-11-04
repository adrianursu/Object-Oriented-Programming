#include <iostream>

using namespace std;

// Abstract Class
class Car
{
protected:
	int maxSpeed;
	int horsePower;
	string modelName;
	string brandName;

public:
	// Encapsulation
	void setMaxSpeed(int maxSpeed)
	{
		this->maxSpeed = maxSpeed;
	}

	void setHorsePower(int horsePower)
	{
		this->horsePower = horsePower;
	}

	void setBrand(string brandName)
	{
		this->brandName = brandName;
	}

	void setmodelName(string modelName)
	{
		this->modelName = modelName;
	}

	void displayInfo()
	{

		cout << brandName << " " << modelName << " : " << getSpeedToMiles() << " miles/h, " << horsePower << " horse power " << endl;
	}

private:
	float getSpeedToMiles()
	{
		return maxSpeed * 0.62;
	}
};

// Inheritance

class Bmw : public Car
{
private:
	bool hasMPackage;

public:
	Bmw(string modelName, int horsePower, int maxSpeed)
	{
		this->brandName = "BMW";
		this->modelName = modelName;
		this->horsePower = horsePower;
		this->maxSpeed = maxSpeed;
	};

	void setHasMPackage(bool hasMPackage)
	{
		this->hasMPackage = hasMPackage;
	}

	void checkHasMPackage()
	{
		if (hasMPackage)
		{
			cout << this->brandName << " are M package!";
		}
	}
};

class Audi : public Car
{
private:
	bool hasAudiSport;

public:
	Audi(string modelName, int horsePower, int maxSpeed)
	{
		this->brandName = "Audi";
		this->modelName = modelName;
		this->horsePower = horsePower;
		this->maxSpeed = maxSpeed;
	};

	void setHasAudiSport(bool hasAudiSport)
	{
		this->hasAudiSport = hasAudiSport;
	}
};

class Mercedes : public Car
{
private:
	bool hasAmgPackage;

public:
	Mercedes(string modelName, int horsePower, int maxSpeed)
	{
		this->brandName = "Mercedes";
		this->modelName = modelName;
		this->horsePower = horsePower;
		this->maxSpeed = maxSpeed;
	};

	void setHasAmgPackage(bool hasAmgPackage)
	{
		this->hasAmgPackage = hasAmgPackage;
	}
};

int main()
{
	Bmw bmw("M5", 506, 320);
	Audi audi("RS7", 700, 400);
	Audi audi2("RSQ8", 600, 320);
	Mercedes mercedes("S CLASSE", 329, 170);

	Car cars[4] = {bmw, audi, audi2, mercedes};

	for (int i = 0; i < 4; i++)
	{
		cars[i].displayInfo();
	}

	return 0;
}