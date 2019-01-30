#include <iostream>
#include <utility>

using namespace std;

void wypisz(int tab[], int n){
    for(int i=0; i<n; i++){
        cout << tab[i] << " ";
    }

}
void sortuj(int tab[], int n){
    for(int k=n; k>1;k--){
        int l=0;
        for(int j=1; j<k;j++){
            if (tab[j-1] > tab[j]) {
                swap (tab[j-1], tab[j]);
                l++;
            }
        }
        if(l==0) break;
        wypisz(tab, n);
        cout << endl;
    }

}

int main()
{
    int n;
    cin >> n;
    int tab[n];
    for(int i=1;i<=n;i++){
        cin >> tab[i-1];
    }

    sortuj(tab, n);

    return 0;
}
