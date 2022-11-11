
/*
naftali 216179200
sadna in c++
ex1 que2
representing the data of the workers in the company "give from the heart"
*/

#include "giveheart.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{

	GiveHeart minimumWorker, maximumWorker, newWorker;
	int id; //the id of a new worker
	char name[21]; //the name of a new worker
	float hourSalary; //the hour salary of a new worker
	int workHours; //the number of tre work hours of a new worker
	float moneyForGive; //the amount of money the new worker gave
	float minimumAmoumt = 50000; //the maximum salary  
	float maximumAmoumt = 0; //the minimum amount of money the workers gave
	cout << "enter details, to end enter 0:" << endl;

	while (1) { //get all the workers data
		cin >> id;
		if (!id) break;//if the id is 0, break
		newWorker.setId(id);
		cin >> name;
		newWorker.setName(name);
		cin >> hourSalary;
		newWorker.setHourSalary(hourSalary);
		cin >> workHours;
		newWorker.setWorkHours(workHours);
		cin >> moneyForGive;
		newWorker.setMoneyForGive(moneyForGive);
		if (newWorker.test()) { //if all the data of a worker is normal, check if he is the "minimum worker" or the "maximum worker"
			if (newWorker.getMoneyForGive() < minimumAmoumt)
				minimumWorker = newWorker;
			if (newWorker.salary() > maximumAmoumt)
				maximumWorker = newWorker;
			minimumAmoumt = minimumWorker.getMoneyForGive();
			maximumAmoumt = maximumWorker.salary();
		}
		else { //if the data isn't normal, print error
			cout << "ERROR" << endl;
		}
	}

	cout << "minimum collected: " << minimumWorker.getId() << " " << minimumWorker.getName() << " " << minimumAmoumt << endl;
	cout << "highiest salary: " << maximumWorker.getId() << " " << maximumWorker.getName() << " " << maximumAmoumt << endl;

	return 0;
}

/*
enter details, to end enter 0:
123456789 moshe 50 40 2000
135792468 rivka 120 55 3450
97531246 sara 35 100 5632
111111111 doron 35  120  6000
222222222 tal 50  55  1400
444444444 levi 45  -4  100
ERROR
333333333 naomi 30  120  800
0
minimum collected: 333333333 naomi 800
highiest salary: 135792468 rivka 7140
*/
