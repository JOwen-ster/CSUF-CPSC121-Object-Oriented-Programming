#include <memory>
#include <string>

class Customer {
 public:
  // ====================== YOUR CODE HERE ======================
  // 1. Define a constructor using member initializer list syntax
  //    according to the README.
  // 2. Define the accessor functions (i.e. the getter functions)
  //    `GetName`, `GetProductCount`, and `GetNextCustomer`.
  //    You do not need to create mutator functions (setters).
  // 3. Define the recursive functions specified in the README.
  // ============================================================
Customer(const std::string &name, int count, std::shared_ptr<Customer> next) : name_(name), product_count_(count), next_customer_(next){}

std::string GetName(){
  return name_;
}

int GetProductCount(){
  return product_count_;
}

std::shared_ptr<Customer> GetNextCustomer(){
  return next_customer_;
}

int TotalCustomersInLine(){
  if(next_customer_ == nullptr){
    return 1;
  }
  return 1 + next_customer_->TotalCustomersInLine();
}

int TotalProductsInLine(){
if(next_customer_ == nullptr){return product_count_;}
  return product_count_ + next_customer_->TotalProductsInLine();
}

std::string FirstAlphabeticalCustomerInLine(){
  if(next_customer_ == nullptr) return name_;
  
  if(name_ < next_customer_->FirstAlphabeticalCustomerInLine()){
    return name_;
  }return next_customer_->FirstAlphabeticalCustomerInLine();
}

 private:
  std::string name_;
  int product_count_;
  std::shared_ptr<Customer> next_customer_;
};
