#ifndef NOTE_h
#define NOTE_h

#include <string>

class Note {
public:
  std::string getTitle() const { return title; }
  void setTitle(const std::string &title);
  std::string getDescription() const { return description; }
  void setDescription(const std::string &description);

private:
  std::string title;
  std::string description;
};

#endif