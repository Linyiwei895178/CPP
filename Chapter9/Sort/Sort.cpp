//This is the insertion sort for the array of the numbers
template <class T>
void insertionSort(T a[], int n) {
    int i, j;
    T temp;

    for (int i = 1; i < n; i++) {
        int j = i;
        T temp = a[i];
        while (j > 0 && temp < a[j - 1]) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = temp;
    }
}

//This is the simple sorted function template
template <class T>
void mySwap(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

template <class T>
void selectionSort(T a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int leastIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[leastIndex])
                leastIndex = j;
        }
        mySwap(a[i], a[leastIndex]);
    }
}

// template <class T>
// void mySwap(T &x, T &y) {
//     T temp = x;
//     x = y;
//     y = temp;
// }

//this is the bubble sort template function
template<class T>
void bubbleSort(T a[], int n) {
    int i = n - 1;
    while (i > 0) {
        int lastExchangeIndex = 0;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[j + 1]) {
                mySwap(a[j + 1], a[j]);
                lastExchangeIndex = j;
            }
        }
        i = lastExchangeIndex;
    }
}