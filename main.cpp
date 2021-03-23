#include <iostream>

#include "array_list.hpp"
#include "linked_list.hpp"

using namespace itis;

int main(int argc, char **argv) {
  std::cout << "Hello, stranger!" << std::endl;
  LinkedList linked;
  linked.Add(Element::GRAVITY_GUN);
  linked.Add(Element::SECRET_BOX);
  linked.Add(Element::DRAGON_BALL);
  linked.Add(Element::CHERRY_PIE);
  linked.Remove(1);
  linked.Remove(1);
  return 0;
}