#include "../headers/Note.h"
#include <iostream>

int main() {
  Note note;
  note.setTitle("New Title");
  note.setDescription("New Description");

  std::cout << note.getTitle() << std::endl;
  std::cout << note.getDescription() << std::endl;

  return 0;
}