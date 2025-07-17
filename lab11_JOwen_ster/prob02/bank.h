#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>
#include <memory>
#include <string>

#include "account.h"

class Bank {
 public:
  Bank(const std::string& bank_name) : bank_name_(bank_name) {}

  std::string GetBankName() const { return bank_name_; }
  std::map<int,Account> GetAccounts() const { return accounts_; }
  int CreateAccount(const std::string& name, double init_balance) {
    Account new_account(name, init_balance);
    int new_id = GenerateAccountId();
    accounts_.insert({new_id, new_account});
    return new_id;
  }
  int TotalAccounts() const { return accounts_.size(); }
  void DisplayBalances () {
    for (std::map<int, Account>::iterator it = accounts_.begin(); it != accounts_.end(); it++){
       std::cout << it->second.GetAccountHolder() << ": $" << it->second.GetBalance() << "\n";
    }
  }
  void DeactivateAccount (int id) {
    std::map<int, Account>::iterator it = accounts_.find(id);
    accounts_.erase(it);
  }

 private:
  std::string bank_name_;
  std::map<int, Account> accounts_;
  // We provided this helper function to you to randomly generate
  // a new Bank Account ID to be used in CreateAccount.
  int GenerateAccountId() const {
    return std::rand() % 9000 + 1000;  // [1000, 9999]
  }
};