
# pragma once

# include <vector>
# include <SFML/Graphics.hpp>

class ArraySort
{
 public:
  ArraySort() = default;

  ArraySort(sf::RenderWindow & window): _window(window){};

  size_t get_size() const { return _vect.size(); };
  void reset_vect() {return _vect.clear(); };

  void add_elements(size_t nb);
  void show_elements();

  bool isSorted();

  void updateWindow(); // function that will draw rectangles
  void updateRect();
  
  void createPositions();
  void createHeights();
  void createRectangles();

  void insertionSort();
  void selectionSort();
  void quickSort();
  void bubbleSort();
	
 private:
  std::vector<int> _vect;
  std::vector<sf::Vector2f> _pos;
  std::vector<int> _height;
  std::vector<sf::RectangleShape> _rect;
  sf::RenderWindow & _window;
};
