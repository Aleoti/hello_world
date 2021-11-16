
#include<iostream>
using namespace std;
int main() {
    const int found = 7;
	int num,razr,mn,k,storage,d = 1;
	cin >> num;
	storage = num;
	mn = num % found;
	while (storage){
        razr += (storage % found) * d;
        d*=10;
        if(storage%found < mn){
            mn = storage%found;
            k = 1;
        }
        else
            if(storage%found == mn)
                k++;
        storage/= found;
	}
	cout<<mn << " "<< k << " " <<razr ;


}
