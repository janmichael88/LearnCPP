#include <iostream>
#include <algorithm> 
//this part seems in important i will take notes on it
//call back functions
//basically function pointers as arguments to functions

/*
void SelectionSort(int *array, int size){
	//first pass through the array
	for (int i = 0; i < size; ++i){
		int smallest = i;
		//scan thorugh the arraay after i
		for (int j = i + 1; j < size; ++j){
			if (array[smallest] > array[j]){
				smallest = j;
			}
		}
		std::swap(array[i],array[smallest]);
	}
}

int main(){
	int array[8] = {1,3,2,5,4,6,9,8};
	SelectionSort(array,8);
	for (int i = 0; i < 8; ++i){
		std::cout << array[i] << ' ';
	}
}
*/

// Note our user-defined comparison is the third parameter
void selectionSort(int *array, int size, bool (*comparisonFcn)(int, int))
{
    // Step through each element of the array
    for (int startIndex{ 0 }; startIndex < (size - 1); ++startIndex)
    {
        // bestIndex is the index of the smallest/largest element we've encountered so far.
        int bestIndex{ startIndex };
 
        // Look for smallest/largest element remaining in the array (starting at startIndex+1)
        for (int currentIndex{ startIndex + 1 }; currentIndex < size; ++currentIndex)
        {
            // If the current element is smaller/larger than our previously found smallest
            if (comparisonFcn(array[bestIndex], array[currentIndex])) // COMPARISON DONE HERE
                // This is the new smallest/largest number for this iteration
                bestIndex = currentIndex;
        }
 
        // Swap our start element with our smallest/largest element
        std::swap(array[startIndex], array[bestIndex]);
    }
}
 
// Here is a comparison function that sorts in ascending order
// (Note: it's exactly the same as the previous ascending() function)
bool ascending(int x, int y)
{
    return x > y; // swap if the first element is greater than the second
}
 
// Here is a comparison function that sorts in descending order
bool descending(int x, int y)
{
    return x < y; // swap if the second element is greater than the first
}

//now defining to print even first
bool evensFirst(int x, int y)
{
	// if x is even and y is odd, x goes first (no swap needed)
	if ((x % 2 == 0) && !(y % 2 == 0))
		return false;
 
	// if x is odd and y is even, y goes first (swap needed)
	if (!(x % 2 == 0) && (y % 2 == 0))
		return true;
 
        // otherwise sort in ascending order
	return ascending(x, y);
}

//Now odds
bool oddsFirst(int x, int y)
{
	// if x is even and y is odd, x goes first (no swap needed)
	if (!(x % 2 == 0) && !(y % 2 == 0))
		return false;
 
	// if x is odd and y is even, y goes first (swap needed)
	if ((x % 2 == 0) && !(y % 2 == 0))
		return true;
 
        // otherwise sort in ascending order
	return ascending(x, y);
}
// This function prints out the values in the array
void printArray(int *array, int size)
{
    for (int index{ 0 }; index < size; ++index)
        std::cout << array[index] << ' ';
    std::cout << '\n';
}
 
int main()
{
    int array[9]{ 3, 7, 9, 5, 6, 1, 8, 2, 4 };
 
    // Sort the array in descending order using the descending() function
    selectionSort(array, 9, descending);
    printArray(array, 9);
 
    // Sort the array in ascending order using the ascending() function
    selectionSort(array, 9, ascending);
    printArray(array, 9);

    // Sort even first
    selectionSort(array,9,evensFirst);
    printArray(array,9);

    //sort odd
    selectionSort(array,9,oddsFirst);
    printArray(array,9);
 
    return 0;
}
