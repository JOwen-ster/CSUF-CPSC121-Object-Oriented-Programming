#include "astronaut.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef CREWMATE_H
#define CREWMATE_H
class Crewmate : public Astronaut {
public:
Crewmate(std::string name, graphics::Color color) : Astronaut(name, color) {}
Crewmate() : Crewmate("no name", graphics::Color(0,0,0)){}

bool GetIsAlive()const{return track_alive_;}
void SetIsAlive(bool track_alive) {
  track_alive = false;
  track_alive_ = track_alive;}
int GetTaskCount() const{return task_count_;}

void DoTask(std::string task){
    task_count_++;
    std::cout << GetName() << " is doing " << task;
}

graphics::Color GetColor() const {
  return (track_alive_) ? Astronaut::GetColor() : graphics::Color(
                        (color_.Red() + 256) / 2,
                        (color_.Green() + 256) / 2,
                        (color_.Blue() + 256) / 2
                        );
}

std::string GetIconFilename() {
  if(track_alive_){
    return "astronaut.bmp";
  }else{
    return "ghost.bmp";
    }
  }

// ========================= YOUR CODE HERE =========================
// Define the Crewmate class here, which inherits from the Astronaut
// base class. Refer to the README for instructions.
// ===================================================================
private:
bool track_alive_ = true;
int task_count_ = 0;
};
#endif  // CREWMATE_H