#include<iostream>
#include<algorithm>
#include<string>
#include<stdlib.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >>k;
    int arr[n][3];
    int ar[n],_1=0,_2=0,_01=0;
    for(int i=0;i<n;i++)
        ar[i] = 0;
    int possible=0;
    
    for(int i=0;i<n;i++){
        int t,a,b;
        cin >> t >> a >> b;
        arr[i][0]=t;
        arr[i][1]=a;
        arr[i][2]=b;
        if(a==1 && b==1){
            ar[i]=1;
            _1++;
        }
        if(a==0 && b==1)
            _01++;
    }
    
    int base_1=0,base_2=_1;
    for(int i=0;i<n;i++){
        if(ar[i]==1){
            int temp=arr[base_1][0];
            arr[base_1][0]=arr[i][0];
            arr[i][0] = temp;
            
            temp=arr[base_1][1];
            arr[base_1][1]=arr[i][1];
            arr[i][1] = temp;
            
            temp = arr[base_1][2];
            arr[base_1][2] = arr[i][2];
            arr[i][2] = temp;
        base_1++;
        }
    }
    
    for(int i=0;i<n;i++)
        if(arr[i][1]==1 && arr[i][2]==0){
            ar[i] =2;_2++;}
            
            
    for(int i=0;i<n;i++){
        if(ar[i]==2){
            int temp=arr[base_2][0];
            arr[base_2][0] = arr[i][0];
            arr[i][0] = temp;
            
            temp = arr[base_2][1];
            arr[base_2][1] = arr[i][1];
            arr[i][1] = temp;
            
            temp = arr[base_2][2];
            arr[base_2][2] = arr[i][2];
            arr[i][2] = temp;
            base_2++;
        }
    }
    
    for(int i=0;i<_1;i++){
        for(int j=i+1;j<_1;j++){
            if(arr[i][0] > arr[j][0]){
                
                int temp = arr[i][0];
                arr[i][0] = arr[j][0];
                arr[j][0] = temp;
                
                temp = arr[i][1];
                arr[i][1] = arr[j][1];
                arr[j][1] = temp;
                
                temp = arr[i][2];
                arr[i][2] = arr[j][2];
                arr[j][2] = temp;
            }
        }
    }
    
    for(int i=_1;i<_1+_2;i++){
        for(int j=i+1;j<_1+_2;j++){
            if(arr[i][0] > arr[j][0]){
                
                int temp = arr[i][0];
                arr[i][0] = arr[j][0];
                arr[j][0] = temp;
                
                temp = arr[i][1];
                arr[i][1] = arr[j][1];
                arr[j][1] = temp;
                
                temp = arr[i][2];
                arr[i][2] = arr[j][2];
                arr[j][2] = temp;
            }
        }
    }

    for(int i=_1+_2;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][0] > arr[j][0]){
                                
                int temp = arr[i][0];
                arr[i][0] = arr[j][0];
                arr[j][0] = temp;
                
                temp = arr[i][1];
                arr[i][1] = arr[j][1];
                arr[j][1] = temp;
                
                temp = arr[i][2];
                arr[i][2] = arr[j][2];
                arr[j][2] = temp;
                
            }
        }
    }
    
    int time=0;
    if(_1+_2 >= k && _1+_01 >= k){
        possible = 1;
    }
    
    if (possible){
        int i=0;
        if(k <= _1)
            for(i=0;i<(k);i++){
                time += arr[i][0];
            }
        else{
            for(i=0;i<_1;i++){
                time += arr[i][0];
            }
            k = k - _1;
            int index = _1;
            for(i=0;i<k;i++){
                time += arr[index++][0];
            }
            for(i=_1+_2;i<n;i++){
                if(arr[i][1] == 0 && arr[i][2] == 1){
                    time += arr[i][0];
                    k--;
                }
                if(!k)
                    break;
            }
        }
        
        cout << time << endl;
        
    }
    else
        cout << -1 << endl;
    
    
    
    
    /* cout << endl << endl;
    
    for(int i=0;i<n;i++){
        cout << arr[i][0] << " " << arr[i][1] << " " << arr[i][2] << endl;
    }*/
    
    
    return 0;
}
