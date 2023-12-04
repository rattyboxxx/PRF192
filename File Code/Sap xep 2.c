void SelectionSort(int a[], int n)
{
	int min,i,j,temp; 
	for (i = 1; i <=n; i++){
		min = i; 
		for(j = i + 1;j<=n; j++)
	   		if (a[j] < a[min])
		       	min = j;
	   	temp = a[min];
	   	a[min]=a[i];
	   	a[i]=temp;
	}
}

void InterchangeSort(int a[], int n) {	
	int i,j,temp;
    for (i = 1; i <=n; i++)
        for (j = i + 1; j <=n; j++)
	        if(a[i] > a[j])  
		    {
		        temp = a[i];
		        a[i]= a[j];
		        a[j]= temp;
			}
}

void BubbleSort(int a[], int n) {
	int i,j,temp;	
	for (i = 1; i <=n; i++)
		for (j=n;j>=i;j--)
		   	if(a[j] < a[j-1])
		    {
		        temp = a[j-1];
		        a[j-1]= a[j];
		        a[j]= temp;
			}
}

void InsertionSort(int a[], int n) {	
	int pos, x,i;
	for (i = 1; i < n; i++) { 
		x = a[i]; 
		pos = i;
		while(pos > 0 && x < a[pos-1]) {
			a[pos] = a[pos-1];	
			pos--;
		}
		a[pos] = x;
	}
}
