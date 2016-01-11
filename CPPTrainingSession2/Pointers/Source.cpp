using namespace std;

#include <iostream>

struct SomeStruct {
	int x;
	int y;
};

int main() {

	SomeStruct structurePointer;
	structurePointer.x = 5;
	structurePointer.y = 5;

	SomeStruct structureRef;
	structureRef.x = 6;
	structureRef.y = 6;

	int refvalue = 4;
	int value = 5;
	int valueConstPointer = 10;

	//references
	int &ref = refvalue;
	ref++;
	cout << "Reference to value :" << ref << endl;

	SomeStruct &refStructure = structureRef;
	refStructure.x = 7;
	refStructure.y = 7;
	cout << "Reference to structure :" << refStructure.x << " " << refStructure.y << endl;;

	//pointers
	SomeStruct *ptr = &structurePointer;
	ptr->x = 10;
	ptr->y = 10;

	int *point = &valueConstPointer;
	cout << "Const pointer to value :" << *point<<endl;
	valueConstPointer = 11;
	cout << "Const pointer to value :" << *point << endl;

	int *const pointerConst = &valueConstPointer;
	cout << "Pointer to const  " << *pointerConst << endl;
	*pointerConst = refvalue;
	cout << " Pointer to const" << *pointerConst << endl;

	  int val = 10;
	int const *ptrs = &val;
	cout << ptrs << endl;
	val++;
	cout << ptrs << endl;
	int *pointer = &value;


	cout << "Pointer to structure :" << ptr->x << " " << ptr->y << endl;

}