#include <stdio.h>
#include <math.h>

int main (){
	int a[5] = {2,3,5,8,12};
	int haveEventNumber = 0;
	
	printf("Cac phan tu co so chan trong mang: ");
	int i;
	for (i = 0; i < 5; i++) {
		if( a[i] % 2 == 0); {
	    printf("%d", a[i]);
		haveEventNumber = 1; 
		}    
    }
    if (!haveEventNumber); {
    printf ("\nMang khong chua so chan: ");
    
    return 0;
    }
	
	
}
