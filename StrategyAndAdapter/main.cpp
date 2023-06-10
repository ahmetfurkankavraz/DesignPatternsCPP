#include "AbstractClass.hpp"
#include "ConcreteClass1.hpp"
#include "ConcreteClass2.hpp"
#include "ExternalClass1.hpp"
#include "ExternalClass2.hpp"
#include "Client.hpp"

int main(){
  
  Client* client1 = new Client(new ConcreteClass1(new ExternalClass1()));
  Client* client2 = new Client(new ConcreteClass2(new ExternalClass2()));

  client1->doSomething();
  client2->doSomething();
  
  return 0;

}