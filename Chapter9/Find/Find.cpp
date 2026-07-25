//Sequence sort
template<class T>
int seqSearch(const T list[], int n, const T &key) {
    for(int i = 0; i < n; i++) {
        if (list[i] == key) 
            return i;
    }
    return -1;
}

//binary search
template <class T>
int binSearch(const T list[], int n, const T &key) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (key == list[mid])
            return mid;
        else if (key < list[mid])
            high = mid - 1;
        else 
            low  = mid + 1;
    }
    return -1;
}