#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct book{
  string author;
  string title;

  book(string author, string title){
    this->author = author;
    this->title = title;
  }
  bool operator < (const book& other_book) const{
    if(author == other_book.author) return title < other_book.title;
    else return author < other_book.author;
  }
};
int main(){

  vector<struct book> shelf;
  vector<struct book> :: iterator it;
  string input;
  while(1){
      getline(cin,input);
      if(input == "END") break;

      int find = input.find(" by ");

      shelf.push_back(book(input.substr(find+4),input.substr(0,find)));
  }


  //arrange the shelf
  sort(shelf.begin(),shelf.end());

  //Process Commands
  string command, title;
  while(1){
    getline(cin,input);
    if(input == "END") break;
    int loc = input.find(" ");
    command = input.substring(0,loc);
    title = input.substring(loc+1);
    //cout << command << " " << title << endl;

    if(command == "BORROW"){

    }
    else if(command == "RETURN"){

    }else if(command == "SHELVE"){
      
    }
  }


  /*
  for(it = shelf.begin();it != shelf.end(); it++){
    cout << (*it).title << " " <<(*it).author << endl;
  }*/

  return 0;
}
