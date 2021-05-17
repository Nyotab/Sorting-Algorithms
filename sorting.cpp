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
  cout << "\n";
}

// Verifies if the values of the vector are sorted
bool ArraySort::isSorted()
{
  size_t l = get_size();
  if (l != 0 && l != 1)
    {
      int before = _vect[0];
      for(size_t i{1} ; i < l ; i++)
	{
	  if(before > _vect[i])
	    return false;
	  before = _vect[i];
	}
    }
  return true;
}


void ArraySort::insertionSort()
{
  size_t l{get_size()};
  size_t i{1};
  size_t j;
  int tmp;

  while (i < l)
    {
      j = i;
      while ((j > 0) && (_vect[j-1] > _vect[j]))
	{
	  tmp = _vect[j];
	  _vect[j] = _vect[j-1];
	  _vect[j-1] = tmp;
	  j--;
	}
      i++;
    }
}


void ArraySort::selectionSort()
{
  size_t l{get_size()};
  size_t j;
  size_t min;
  int tmp;
  for(size_t i{0} ; i < l ; i++)
    {
      min = i;
      for(j = i+1 ; j < l ; j++)
	{
	  if(_vect[min] > _vect[j])
	    min = j;
	}
      if (min != i)
	{
	  tmp = _vect[i];
	  _vect[i] = _vect[min];
	  _vect[min] = tmp;
	}
    }

}

void ArraySort::mergeSort()
{
  
}

