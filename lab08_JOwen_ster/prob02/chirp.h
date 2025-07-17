#include <string>

class Chirp{
  public:
    Chirp() : messages_(""), likes_(0) {}
    Chirp(std::string m) : messages_(m), likes_(0) {}
    Chirp(std::string m, int l) : messages_(m), likes_(l) {}

    void SetMessage(std::string m) {messages_ = m;}
    std::string GetMessage() const {return messages_;}
    int GetLikes() const {return likes_;}
    void AddLike() {likes_ += 1;}
    void AddLike(int l) {likes_ += l;}

  private:
    std::string messages_;
    int likes_;
};