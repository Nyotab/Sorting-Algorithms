// Sorting algorithms and utilities functions

# include <cstdlib>
# include <iostream> 
# include "sorting.h"

using namespace std;

// Function to add a precise number of elements in the vector
void ArraySort::add_elements(size_t nb)
{
  srand(time(NULL));
  for(size_t i{0} ; i < nb ; i++)
    {
      // generating random numbers to fill the vector
      _vect.push_back(rand()%1000);
    }
}


// Function to display all elements of the vector
void ArraySort::show_elements()
{
  size_t l = get_size();
  for(size_t i{0} ; i < l ; i++)
    {
      cout << _vect[i] << " | ";
    }
}

// Verifies if the values of the vector are sorted
bool isSorted()
{
  size_t l = get_size();
  if (l != 0 & l != 1)
    {
      int before = _vect[0];
      for(size_t i{1} ; i < l ; ++)
	{
	  if(before > vect[i])
	    return false;
	  before = vect[i]
	}
    }
  return true;
}


void insertionSort()
{

}


void selectionSort();
void mergeSort();
void quickSort();
