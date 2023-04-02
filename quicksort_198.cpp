#include<iostream>
using namespace std;

int arr[20];
int cap_count = 0;
int nov_count = 0;
int n;
void input() {
	while (true) {
		cout << "masukan nanjang alamat array : ";
		cin >> n;

		if (n = 20)
			break;
		else
			cout << "\n masimum pnjang array adalah 20" << endl;
	}

	cout << "\n------------------" << endl;
	cout << "\nenter array alamat" << endl;
	cout << "\n------------------" << endl;

	for (int i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}



void swap(int x, int y) {
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high) {
	int pivot,  i, j;
	if (low > high)
       return;
	i = low + 1;
	j = high;
	pivot = arr[low];

	while (i <= j)
	{
		//search for an elemen less thanor aqual to privot
		while ((arr[i] <= pivot) && (i <= high))//langkah 5
		{
			i++;// langkah 6
			cap_count++;
		}
		cap_count++;
		while ((arr[j] > pivot) && (j >= low))
			j--;
		cap_count++;
	}
	cap_count++;
	if (i < j)

	{
		swap(i, j)
			nov_count++;
	}

		

