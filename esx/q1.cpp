#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;
#include <algorithm>

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last);

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last){
	vector<int>::iterator it;
	int count = 0;
	int sum = 0;

	for(it = first; it != last; it++){
		count += 1;
		sum += *it;
	}	
	int media = sum/count;
	cout<<"Média:"<<media<<endl;

	vector<int>::iterator low,up;
  	low = std::lower_bound (first, last, media);
 	up = std::upper_bound (first, last, media);
 	
 	return low;
}

int main() {
	vector<int> v { 1, 2, 3, 30, 40, 50};
	auto result = closest2mean(v.begin(), v.end());
	cout << (*result) << endl;
	return 0;
}