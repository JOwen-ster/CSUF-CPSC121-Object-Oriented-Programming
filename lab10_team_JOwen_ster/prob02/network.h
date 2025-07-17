#pragma once

#include <map>
#include <memory>

#include "message.h"
#include "phone.h"

class Network {
public:

  void AddPhone(std::shared_ptr<Phone> phone) {phonebook_.insert({phone->GetOwner(), phone});}

  void SendMessage(std::shared_ptr<Message> message, const std::string &recipient) {
        if(phonebook_.count(recipient) > 0){
          phonebook_.at(recipient)->AcceptMessage(message);
        }
      }

void SendMessage(std::shared_ptr<Message> message, const std::vector<std::string> &send)
{
  for(std::string str: send)
  {
    if(phonebook_.count(str) > 0)
    {
      phonebook_.at(str)->AcceptMessage(message);
    }
  }
}

private:
std::map<std::string, std::shared_ptr<Phone>> phonebook_;

};
// ======================= YOUR CODE HERE =======================
  // Write the Network class here. Refer to the README for the member
  // variables, constructors, and member functions needed.
  //
  // If you were the "driver" for the Phone class, then switch roles
  // with your lab partner and act as the "navigator" for this class.
  // ===============================================================
