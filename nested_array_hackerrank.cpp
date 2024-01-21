#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
void test(){
	
	/*
	1. take the two values (size of Parent arr and number of queries)
	2.
	
	*/
	/*
	int m,n,x,i, j, n, q, k_size;
	
	scanf("%d\n%d\n",&n,&q)
	
	// parent vector
	vector<vector<int>> a(n);
	
	for(i=0;i<=n;i++){
		
		scanf("%d",&k_size);
		vector<int> k;
		
		for(j=0;j<=k_size;j++){
			scanf("%d ",&(k[j]));
		}
	}

	for(x=0;x<=q;x++){
		
		scanf("%d %d",m,n);
		pirntf("%d",a[m][n]);
	}
	
}
*/

int main(){
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int u,v,x,i, j, n, q, k_size;
    
    scanf("%d\n%d\n",&n,&q);
    
    // parent vector
    vector<vector<int>> a(n);
    
    //cout<<"n and q are "<<n <<q<<endl;
    //cout<<"entring into first for"<<endl;
    for(i=0;i<n;i++){
        
        scanf("%d ",&k_size);
        vector<int> k(k_size);
        
        //cout<<"creatin the vector"<<endl;
        //cout<<"k_size is"<<k_size<<endl;
        
        for(j=0;j<k_size;j++){
            scanf("%d ",&(k[j]));
            //cout<<k[j]<<",";
        }
        //cout<<endl;
    }
    cout <<"fetching the numbers"<<endl;
    for(x=0; x<q; x++){
        printf("printing...and q value is %d\n",q);
        scanf("%d %d",&u,&v);
        printf("%d, %d",u,v);
        printf("%d\n",a[u][v]);
    }
    
    
    return 0;
}


