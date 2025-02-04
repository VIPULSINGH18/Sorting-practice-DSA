/*#qucik sort

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (j >= low && arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    vector<int> arr;
    int n, element;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> element;
        arr.push_back(element);
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;




#selection sort

include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
}

 # Bubble sort method
 
 
#include<iostream>
#include<vector>
using namespace std;
 void Bubble(vector<int>&vec, int n){
     bool swap;
     for(int i=0;i<n-1;i++){
         swap=false;
         for(int j=0;j<n-i-1;j++){
             if(vec[j]>vec[j+1]){
                 std::swap(vec[j],vec[j+1]);
                 swap=true;
             }
         }
         if(!swap){
             break;
         }
     }
 }
 int main(){
     vector<int>vec= {2,1,4,3,11,7,9,8};
     int n=vec.size();
     Bubble(vec,n);
     cout<<"Sorted array : "<<endl;
     for(int a:vec){
         cout<<a<<" ";
     }
     return 0;
 }
 
 
 */
 
 
 
 /* count of a digit of number 
 
 #include<iostream>
using namespace std;
int main(){
	int number;
	cin>>number;
	int count=0;
	while(number>0){
		int a=0;
		a= number%10;
		if(a!=0){
			count++;
		}
		number=number/10;
	}
	cout<<"My number count is : "<<count<<endl;
	return 0;
	
}*/

/* reverse of number 

#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Input your number : ";
	cin>>number;
	cout<<endl;
	int rev=0;
	int rem;
	while(number>0){
		rem=number%10;
		number=number/10;
		rev=rev*10+rem;
			}
			cout<<"Reverse of number is : ";
			cout<<rev;
			return 0;
}

*/

/* this is to check whether the number is palindrome or not..*/

/*
#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Input your number : ";
	cin>>number;
	cout<<endl;
	int a= number;
	int rev=0;
	int rem;
	while(a>0){
		rem=a%10;
		a=a/10;
		rev=rev*10+rem;
			}
			cout<<"Reverse of number is : ";
			cout<<rev<<endl;
			if(rev == number){
				cout<<"This number is palindrome"<<endl;
			}
			else{
				cout<<"Number is not palindrome";
			}
			return 0;
}

*/


/* code to check whether the number is armstrong this is for only 3 digit...

 #include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Input your number :";
	cin>>number;
	cout<<endl;
	int a=number;
	int sum=0;
	while(a>0){
		
		int rem= a%10;
		sum=(sum+(rem*rem*rem));
		a=a/10;
		
	}
	if(sum == number){
		cout<<"My number is armstrong : ";
	
	}
	else{
		cout<<"My number is not armstrong";
	}
	return 0;
	
}*/



/* to check whether the number is prime or not 

#include<iostream>
using namespace std;
int main(){
	int count=0;
	int number;
	cout<<"Input the number: ";
	cin>>number;
	for(int i=1;i<=number;i++){
		if(number%i==0){
			count++;
		}
		
		
	}
	if(count<=2){
			cout<<"Number is prime"<<endl;
		}
		else{
			cout<<"Number is not a prime number";
		}
		return 0;
}
  */

/* code to print all the factors and divisors of a number 

 
#include<iostream>
using namespace std;
int main(){
	int count =0;
	int n;
	cout<<"Input number is:";
	cin>>n;
	cout<<endl;
	cout<<"Factors of a number is : ";
	for(int i=1;i<=n;i++){
		if(n%i==0){
			
			cout<<i<<" ";
			count++;
		}
	}
	cout<<endl;
	cout<<"Total number of divisiors or factors are: "<<count<<endl;
	return 0;
}

*/

/* this code is to print the maximum factor value which will be number itself..
#include<iostream>
using namespace std;
int main(){
	int max_factor;
	int count =0;
	int n;
	int min= INT_MIN;
	cout<<"Input number is:";
	cin>>n;
	cout<<endl;
	cout<<"Factors of a number is : ";
	for(int i=1;i<=n;i++){
		if(n%i==0){
			
			cout<<i<<" ";
			count++;
			max_factor= max(min,i);
		}
	}
	cout<<endl;
	cout<<"Total number of divisiors or factors are: "<<count<<endl;
	cout<<"Maximum factor or divisor value is : "<< max_factor<<endl;
	return 0;
}

*/


  	

/* code to find HCF

#include<iostream>
using namespace std;
int main(){
	int num_1;
	cin>>num_1;
	int num_2;
	cin>>num_2;
	int max_value;
	max_value=  max(num_1,num_2);
	int max_2= INT_MIN;
	cout<<"My common factors are : ";
	for(int i=1;i<=max_value ;i++){
		if(num_1%i==0 && num_2%i==0){
			cout<<i<<" ";
			max_2= max(max_2,i);
			
		}
		
	}
	cout<<endl;
	cout<<"My highest common factor is : "<<max_2;
	return 0;
}

*/



/*


#include<iostream>
#include<vector>
void Insertion(vector<int>&vec,int n){
	int prev;
	int curr;
	for(int i=1;i<n-1;i++){
		curr= vec[i];
		prev= i-1;
		while(prev>=0 && >curr){
			vec[prev+1]=vec[prev];
			prev--;
		}
		vec[prev+1]=curr;
	}
	
}

int main(){
	vector<int>vec={5,4,3,2,9};
	int n= vec.size();
	Insertion(vec,n);
	cout<<"Sorted vector:<<" ";
	for(int a=0; a<=n;a++){
		a:vec;
		cout<<a<<" ";
	}
	return 0;
	
	
}




*/











	   





