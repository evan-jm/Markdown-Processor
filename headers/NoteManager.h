#ifndef NOTEMANAGER_H
#define NOTEMANAGER_H

#include "Note.h"
#include <vector>

class NoteManager {
public:
  void addNote(const Note &note);
  Note *findNoteByTitle(const std::string &title);
  std::vector<Note> getNotes() const { return notes; }
  void loadNotesFromDirectory(const std::string &directory);
  void saveNotesToDirectory(const std::string &directory);

private:
  std::vector<Note> notes;
};

#endif