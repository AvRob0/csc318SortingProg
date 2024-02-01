#include "bubble.h"
#include "Insertion.h"
#include "ShellSort.h"
#include "HeapSort.h"
#include <iostream>
#include <time.h>
//libraray for includes

//main function
int main() {
	//the array for the sorting program
	int sort_Arr[] = { 10, 1, 20, 11, 3, 7, 19, 5, 6, 15, 2, 9, 8, 16, 13, 14, 4, 12, 17, 18 };
	//the creation of the clock
	clock_t start, end{};
	//creating memory for the array
	int n = sizeof(sort_Arr) / sizeof(sort_Arr[0]);
	//the four loop for the array
	for (int i = 0; i < 20; i++) {
		sort_Arr[i] = rand() % 20;
	}
	
	//start of the bubble sort
	std::cout << " BUBBLE SORT " << std::endl;
	//creating the bubble sort and initializing it at b1
	Bubble b1;
	//initializing start and the clock at start
	start = clock();
	//calling the bubble sort and making the parameters the array and the size as n
	b1.bubble(sort_Arr, n);
	//calling the bubble sort to print the array.
	b1.printArray(sort_Arr, n);

	std::cout << "" << std::endl;//for making space
	//calculating the sort time by end time minus the start time
	std::cout << " bubble sort time = " << (end - start) << std::endl;
	/*
	start = clock();
	std::sort(arr, arr + n);
	end = clock();
	std::cout << " STD library sort in ms time = " << (end - start) << std::endl;
	*/
	std::cout << " " << std::endl;//for making space
	
	//start of Insertion Sort
	std::cout << "INSERTION SORT " << std::endl;
	//calling the Insertion sort and storing it in i1
	Insertion i1;
	//creation of clock 
	start = clock();
	//calling the insertion sort with the array as it parameteres
	i1.insertionSort(sort_Arr, n);
	//calling the insertion function to print the sorted array with the array as it parameters
	i1.printInsertion(sort_Arr, n);

	std::cout << "" << std::endl;//for space
	//the insertion sort time calculation
	std::cout << " Insertion Sort Time = " << (end - start) << std::endl;

	std::cout << "" << std::endl;//for space
	
	//start of the shell sort
	std::cout << " SHELL SORT " << std::endl;
	//creating of the shell sort and storing it in s1
	Shell s1;
	//creating the clock
	start = clock();
	//calling the shell sort and storing the array as the parameters
	s1.shellSort(sort_Arr, n);
	//call the shell function to print the sorted array
	s1.printShell(sort_Arr, n);

	std::cout << "" << std::endl;//for space
	//for the shell sort time calculation
	std::cout << " Shell Sort Time = " << (end - start) << std::endl;

	std::cout << "" << std::endl;//for space


	/*I couldnt get the Heap sort to function right It kept giving me an exeption thrown error
	and I couldnt figure out why it was saying that. The only reason i made another array and for loop, was to 
	see if i needed a diff array for the sort but gave me the same error
	*/


	/*
	std::cout << " HEAP SORT " << std::endl;

	int sort_Heap[] = { 10, 1, 20, 11, 3, 7, 19, 5, 6, 15, 2, 9, 8, 16, 13, 14, 4, 12, 17, 18 };
	int sh = sizeof(sort_Heap) / sizeof(sort_Heap[0]);
	
	//for (int s = 0; s < 20; s++) {
	//	sort_Heap[s];
	//}
	
	Heap h1;
	start = clock();
	h1.heapSort(sort_Heap, sh);
	h1.printHeap(sort_Heap, sh);

	std::cout << "" << std::endl;

	std::cout << " Heap Sort Time = " << (end - start) << std::endl;
	*/
}
