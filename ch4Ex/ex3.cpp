/*
Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given
route. Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance
between two neighboring cities. Find and print the mean distance between two neighboring cities.
*/

#include "std_lib_facilities.h"

int main()
{
	//The distance value, the sum of all values in a vector and the mean
	double distValue, distSum = 0, distMean, min, max;

	//The vector that will hold the distance values
	vector<double> distances;

	//Read the distances as user's inputs and put them in the vector
	while(cin>>distValue)
	{
		distances.push_back(distValue);

		//And add them to sum variable
		distSum += distValue;
	}

	//Determine the first vector element to be the min and max value so we have 
	//something to compare with initially
	min = distances[0];
	max = min;

	//Loop over the vector to check out the min and max value
	for (double d:distances)
	{
		if (d > min){
			max = d;
		}
		else{
			min = d;
		}
	}

	//Calculate the mean distance
	distMean = distSum / distances.size();


	//Print out the results
	cout << "Distances entered: "<<"\n";

	//The elements of the vector
	for (double d:distances){
		cout << d << " ";
	}
	cout<<"\n";

	//The smallest and largest distance
	cout<<"Smallest distance is: "<< min <<"\n";
	cout <<"Largest distance is: "<<max<<"\n";

	//The mean
	cout<<"Mean distance: "<<distMean<<"\n";






	


}