#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {2,7,11,15};
    int target=9,size=4;
    for (int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
                if(vec.at(i)+vec.at(j)==target){
                    cout << i << "\t" << j << endl;
                }
        }
    }

    return 0;
}
