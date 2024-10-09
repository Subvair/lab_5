#include <iostream>

using namespace std;

int main() {
    int a, b, k, n;

    cout << "Введите границы интервала через пробел(a b)" << endl;
    cin >> a >> b;

    cout << "Введите размерность массива V" << endl;
    cin >> k;

    int v[k];

    for (int i = 0; i < k; ++i) {
        cout << "Введите " << i << "-й элемент массива" << endl;
        cin >> v[i];
    }

    cout << "Введите размерность массива W" << endl;
    cin >> n;

    int w[n];
    
    for (int i = 0; i < n; ++i) {
        cout << "Введите " << i << "-й элемент массива" << endl;
        cin >> w[i];
    }
    
    int countV = 0, countW = 0;

    cout << countV << " " << countW;

    for (int i = 0; i < k; ++i) {
        if (v[i]>0 and a <= v[i] and v[i] <= b) {
            ++countV;
        }
    } 

    for (int i = 0; i < n; ++i) {
        if (v[i]>0 and a <= v[i] and v[i] <= b) {
            ++countW;
        }
    }      

    cout << "\nКоличество подходящих элементов в массиве V: "<<countV << "\nКоличество подходящих элементов в массиве W: " << countW;

}