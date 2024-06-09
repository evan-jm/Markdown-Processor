#include "../headers/NoteManager.h"

void NoteManager::addNote(const Note &note) { notes.push_back(note); }

Note *NoteManager::findNoteByTitle(const std::string &title) {
  for (Note &note : notes) {
    if (note.getTitle() == title) {
      return &note;
    }
  }
  return nullptr;
}

void NoteManager::loadNotesFromDirectory(const std::string &directory) {}

void NoteManager::saveNotesToDirectory(const std::string &directory) {}
