#include <iostream>

using namespace std;

int main(){
    int data_available = 0;
    cin >> data_available;
    int months = 0;
    cin >> months;
    int sum = 0;
    int current_data = 0;
    for(int i = 0; i < months; i++) {
        cin >> current_data;
        sum += data_available - current_data;
    }
    sum += data_available;
    printf("%d", sum);
}