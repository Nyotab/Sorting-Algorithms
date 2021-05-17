# pragma once

# include <vector>

class ArraySort
{
 public:
  ArraySort() = default;

  size_t get_size() const { return _vect.size(); };
  void reset_vect() {return _vect.clear(); };

  void add_elements(size_t nb);
  void show_elements();

  bool isSorted();

  void insertionSort();
  void selectionSort();
  void mergeSort();
  void quickSort();
	
 private:
	std::vector<int> _vect;
};
