
Basic Properties of Arrays: 
1. The elements are stored continuously in the memory. 
2. All of the elements in an array are of the same type. 
3. The elements are accessed using a 0-based index system. 

Formula: 

Address of arr[i] = (address arr begins) + i * (size of each element in arr) 
==Make sure you are always in bound of the range-- the compiler doesn't care if you go out of range (for example, arr[8] in an arr[6] range) and it could overwrite other memory== 

<u>Static array syntax:</u>
1. Array's physical size must be a constant, and must be given at declaration. 
		int arr[6]; or 
		const int X = 7;
			int arr [X];
2. 
