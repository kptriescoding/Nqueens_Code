#include<bits/stdc++.h>
using namespace std;
class NQueens{
    public:
    void Nqueens(int k, int n,int x[]) {
        for(int i=0;i<n;i++) {
            if(Place(k,i,x)) {
                x[k] = i;
                if (k == n-1) {
                    for(int j=0;j<n;j++)
                        cout<<x[j] << " ";
                    cout<<endl;
                    return;
                }
                Nqueens(k+1,n,x);
            }
        }
    }

    bool Place(int k, int ind, int x[]) {
        for (int i = 0; i < k; i++)
            if (x[i] == ind || abs(x[i] - ind) == abs(i - k)) return false;
        return true;
    }
};
int main() {
        int n;
        cout<<"Enter the value of n"<<endl;
        cin>>n;
        int x[n];
        cout<<"The combinations are"<<endl;
        NQueens nqueens=NQueens();
        nqueens.Nqueens(0,n,x);
    }
