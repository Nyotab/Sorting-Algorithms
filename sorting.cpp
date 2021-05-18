// Sorting algorithms and utilities functions

# include <cstdlib>
# include <iostream> 
# include "sorting.h"

using namespace std;

// Function to add a precise number of elements in the vector
void ArraySort::add_elements(size_t nb)
{
  srand(time(NULL));
  size_t index1;
  size_t index2;
  int tmp;

  // Filling with numbers from 0 to nb
  for(size_t i{0} ; i < nb ; i++)
    {
      _vect.push_back(i);
    }

  // Shuffle
  for(size_t i{0} ; i < nb ; i++)
    {
      index1 = rand()%nb;
      index2 = rand()%nb;
      tmp = _vect[index1];
      _vect[index1] = _vect[index2];
      _vect[index2] = tmp;
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
  _window.clear();
  _window.display();
  while (i < l)
    {
      std::cout << i << "\n";
      j = i;
      while ((j > 0) && (_vect[j-1] > _vect[j]))
	{
	  tmp = _vect[j];
	  _vect[j] = _vect[j-1];
	  _vect[j-1] = tmp;
	  j--;
	}
      i++;
      updateRect();
      updateWindow();
      sf::sleep(sf::seconds(0.2));
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

void ArraySort::updateWindow() // function that will draw rectangles
{
  _window.clear();
  size_t l = get_size();
  for(size_t i{0} ; i < l ; i++)
    {  
        _window.draw(_rect[i]);
    }
  _window.display();
}

void ArraySort::updateRect()
{
  _rect.clear();
  _pos.clear();
  _height.clear();
  createPositions();
  createHeights();
  createRectangles();
}


void ArraySort::createPositions()
{
  size_t l = get_size();
  for(size_t i{0} ; i < l ; i++)
    {
      _pos.push_back(sf::Vector2f(15*i+10, 10));
    }
}
  
void ArraySort::createHeights()
{
  size_t l = get_size();
  for(size_t i{0} ; i < l ; i++)
    {
      _height.push_back(10*_vect[i]+10);
    }
}

void ArraySort::createRectangles()
{
  size_t l = get_size();
  float coef = 0;

  for(size_t i{0} ; i < l ; i++)
    {
      sf::RectangleShape rectangle;
      rectangle.setFillColor(sf::Color::White);
      rectangle.setSize(sf::Vector2f(10, _height[i]));
      rectangle.setPosition(_pos[i]);
      _rect.push_back(rectangle);
    }
}

