// Main file

# include "sorting.h"
# include <iostream>


int main()
{
	ArraySort v = ArraySort();
	v.add_elements(20);
	v.show_elements();
	v.insertionSort();
	v.show_elements();
	std::cout << v.isSorted() << "\n\n";

	ArraySort v2 = ArraySort();
	v2.add_elements(20);
	v2.show_elements();
	v2.selectionSort();
	v2.show_elements();
	std::cout << v2.isSorted() << "\n\n";
	
}
