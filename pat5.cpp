#include<bits/stdc++.h>
using namespace std;

void pat(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j==n/2 or i-j==-(n/2) or i-j==n/2 or i+j==3*(n/2)){
                cout<<"*";
            }
            
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    pat(n);
}

output:
enter n:21
          *          
         * *         
        *   *        
       *     *       
      *       *      
     *         *     
    *           *    
   *             *   
  *               *  
 *                 * 
*                   *
 *                 * 
  *               *  
   *             *   
    *           *    
     *         *     
      *       *      
       *     *       
        *   *        
         * *         
          *          


=== Code Execution Successful ===
