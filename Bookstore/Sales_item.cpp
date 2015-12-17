/** C++ Primer book, exercise 1.20
 * reads a set of book sales transactions, writing each transatcion to the standard output
 *
 */

#include <iostream>
#include "Sales_item.h"

void count_transactions();
int total_transactions();

int main()
{
  count_transactions();
  return 0;
}

//Ex 1.23: Write a program that reads several transations and counts how many transations occur for each ISBN
void count_transactions()
{
  Sales_item currentBook, nextBook;
  std::cin >> currentBook;
  if (std::cin >> currentBook)
  {
    int count = 1;
    while (std::cin >> nextBook)
    {
      if (nextBook.isbn() == currentBook.isbn())
        ++count;
      else
        std::cout << currentBook << "count "<< count <<std::endl;
        currentBook = nextBook;
        count = 1;
    }
    std::cout << currentBook << "count "<< count <<std::endl;
  }
  return;
}

int total_transactions()
{
  Sales_item total;

  if (std::cin >> total)
  {
    Sales_item trans; //variable to hold the running sum

    while (std::cin >> trans)
    {
      if (total.isbn() == trans.isbn())
        total += trans;
      else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  }
  else {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }
  return 0;
}
