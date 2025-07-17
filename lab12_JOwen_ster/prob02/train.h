#include <memory>
#include <string>

class Train {
 public:
  Train(int passenger_count, int seat_count,
        std::shared_ptr<Train> next_carriage)
      : passenger_count_(passenger_count),
        seat_count_(seat_count),
        next_carriage_(next_carriage) {}

  int GetPassengerCount() const {
    return passenger_count_;
  }
  int GetSeatCount() const {
    return seat_count_;
  }
  std::shared_ptr<Train> GetNextCarriage() const {
    return next_carriage_;
  }
  // ====================== YOUR CODE HERE ======================
  // Define the following recursive member functions, according
  // to the instructions in the README:
  //
  //   1. TotalTrainPassengers
  //   2. MaxCarriagePassengers
  //   3. IsTrainFull
  //   4. AddCarriageToEnd
  // ============================================================
int TotalTrainPassengers(){
  return (next_carriage_ == nullptr) ? passenger_count_ : passenger_count_ + next_carriage_->TotalTrainPassengers();
}

int MaxCarriagePassengers(){
  return next_carriage_ == nullptr ? passenger_count_ : passenger_count_ > next_carriage_->MaxCarriagePassengers() ? passenger_count_ : next_carriage_->MaxCarriagePassengers();
}

bool IsTrainFull(){
  if(next_carriage_ == nullptr){
    return true;
  }else if(passenger_count_ == seat_count_){
    return next_carriage_->IsTrainFull();
  }return false;
}

void AddCarriageToEnd(std::shared_ptr<Train> &train){
  if(next_carriage_ == nullptr){
    next_carriage_ = train;
  }else{
    next_carriage_->AddCarriageToEnd(train);
  }
}

 private:
  int passenger_count_;
  int seat_count_;
  std::shared_ptr<Train> next_carriage_;
//done
};
