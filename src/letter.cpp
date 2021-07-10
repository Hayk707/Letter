//Program input big or small letter;

#include "ask_head.hpp"
#include <cassert>

void Ask(){
       	char arr[3], x, y, z;
//Wants your big or small letter;
	 cout <<"Input Big or Small Letters: "; cin >> x; cin >> y; cin >> z;
	arr[0] = x;
	arr[1] = y;
	arr[2] = z;
	int length;
//Variable length is your length of array
	length = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<length; i++){
		assert((arr[i]>64 && arr[i]<91) || (arr[i]>96 && arr[i]<123));
	}
//In ASCII difference between big and small letters is 32 . Because of that we can use the For loop and we can output the big or small letter.
	for(int i = 0; i < length; i++){
		if(arr[i] > 64 && arr[i] < 91){
			arr[i] += 32;
		} else if (arr[i] > 96 && arr[i] < 123) 
	
		{
			arr[i] -=32;
		} 
	cout <<  "Result: " << arr[i] << endl;
	}

}
