// Better solution
class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int i = a.size() - 1;
        int j = 0;
        
        while(a[i] > b[j] && j < b.size() && i >= 0){
            swap(a[i--], b[j++]);
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};

// Passed 1110/1111 cases :_)
class Solution {
  public:
  
    int partition(vector<int> &arr, int low, int high){
        int i = low - 1;
        int pivot = arr[high];
        for(int j = low; j < high; j++){
            if(arr[j] <= pivot){
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i+1], arr[high]);
        return i+1;
    }
    vector<int> quickSort(vector<int> &arr, int low, int high){
        if(low < high){
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
        return arr;
    }
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        
        for(int i : b) a.push_back(i);
        
        a = quickSort(a, 0, a.size() - 1);

        b.clear();
        for(int i = n; i < n + m; i++)
            b.push_back(a[i]);
            
        a.erase(a.begin() + n, a.end());
    }
};
