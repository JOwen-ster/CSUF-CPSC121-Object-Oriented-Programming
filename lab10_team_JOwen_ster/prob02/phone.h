#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include "message.h"

class Phone {
public:
Phone(std::string owner) : owner_(owner) {}
std::string GetOwner() const { return owner_; }

std::shared_ptr<Message> AuthorMessage(const std::string &message) { return std::make_shared<Message> (message, owner_);}

void AcceptMessage(std::shared_ptr<Message> message) 
{ messages_.push_back(message); }

void PrintMessages() 
{
  for(std::shared_ptr<Message> ele : messages_){
    std::cout << ele->GetSender() << ": " << ele->GetMessage() << "\n" ;
  }
  }

private:  
std::string owner_;
std::vector<std::shared_ptr<Message>> messages_;

  // ======================= YOUR CODE HERE =======================
  // Write the Phone class here. Refer to the README for the member
  // variables, constructors, and member functions needed.
  //
  // Select one among you and your lab partner to be the "driver"
  // and the other to be the "navigator". The driver should write
  // the code, while the navigator reviews the code. Both of you
  // should communicate and share thoughts as you go along.
  // ===============================================================
};
