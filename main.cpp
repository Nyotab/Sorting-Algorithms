// Main file

# include "sorting.h"
# include <iostream>
# include <SFML/Graphics.hpp>


int main()
{
  /*
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
  */

  // Create the main window
  sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
  std::cout << "after window\n";
  ArraySort d = ArraySort(window);
  d.add_elements(50);
  d.show_elements();
  std::cout << "after constructor\n";
  
  while(window.isOpen())
    {

      sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
	std::cout << "test" << std::endl;
	d.insertionSort();
    }

  /*
  for(int i = 0 ; i < 10 ; i++)
    {
      std::cout << i << "\n";
      sf::sleep(sf::seconds(1));
      }*/

  return 0;
}
