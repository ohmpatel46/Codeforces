#include<iostream>
using namespace std;
 
int main(){
    int t,n,j;
    char a[100],b[100];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cin.get();
        cin.getline(a,100);
        for(j=0;j<n;j++){
            if(a[j]=='U'){
                b[j]='D';
            }
            else if(a[j]=='D'){
                b[j]='U';
            }
            else if(a[j]=='L'){
                b[j]='L';
            }
            else if(a[j]=='R'){
                b[j]='R';
            }
        }
        b[j]='\0';
        cout<<b<<endl;
    }
    return 0;
}
//Some test cases are failing