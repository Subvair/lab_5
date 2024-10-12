#include <iostream>

using namespace std;

void fillingArray(int arr[], int size){
    for (int i = 0; i < size; ++i) {
        cout << "Введите " << i << "-й элемент массива"<< endl;
        cin >> arr[i];
    }  
}

int checkArray(int arr[], int size, int a, int b){
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i]>0 and a <= arr[i] and arr[i] <= b) {
            ++count;
        }
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, k, n;

    cout << "Введите границы интервала через пробел(a b)" << endl;
    cin >> a >> b;

    cout << "Введите размерность массива V" << endl;
    cin >> k;
    int v[k];
    fillingArray(v, k);

    cout << "Введите размерность массива W" << endl;
    cin >> n;
    int w[n];
    fillingArray(w, n);

    int countV, countW;
    countV = checkArray(v, k, a, b); 
    countW = checkArray(w, n, a, b);
    
    cout << "\nКоличество подходящих элементов в массиве V: "<<countV << "\nКоличество подходящих элементов в массиве W: " << countW;

}