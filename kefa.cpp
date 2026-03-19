#include <iostream>
using namespace std;

int main()
{
	int n, d;
	cin >> n >> d;
	int arr[n][2];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
	}

	

    int max=0;
	int current=0;
	 
	//  cout<<"limit"<<limit<<endl;
	for(int i=0; i<n; i++){
		int end = arr[i][0] + d;
		current = 0;
		for (int j = i; j<n && arr[j][0] < end; j++) {
			current += arr[j][1];
		}
		if (current > max) {
			max = current;
		}
	}
	// arr[i]=arr[i+1].first;
     
	cout << max;
	

	return 0;
}