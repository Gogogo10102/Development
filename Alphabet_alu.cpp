#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char arr[250];
	cin >> arr;
	int len = strlen(arr);
    int sum=0;
    for(int i=0; i<len; i++){
        sum += (arr[i] - 'a' + 1);
    }
    cout << sum;
}
