#include "TicketFactory.hpp"
#include "Decorator/Decorator.hpp"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main(){

  SalesTicket* ticket = new SalesTicket();
  Component* decoratedTicket1 = TicketFactory::createTicket(ticket, "type1");
  Component* decoratedTicket2 = TicketFactory::createTicket(ticket, "type2");
  Component* decoratedTicket3 = TicketFactory::createTicket(ticket, "type3");
  Component* decoratedTicket4 = TicketFactory::createTicket(ticket, "type4");

  // ticket will be printed with two header and a footer
  cout << "First ticket:" << endl;
  decoratedTicket1->printTicket();
  cout << endl;

  // ticket will be printed with header
  cout << "Second ticket:" << endl;
  decoratedTicket2->printTicket();
  cout << endl;

  // ticket will be printed with footer
  cout << "Third ticket:" << endl;
  decoratedTicket3->printTicket();
  cout << endl;

  // ticket will be printed without header and footer
  cout << "Fourth ticket:" << endl;
  decoratedTicket4->printTicket();
  cout << endl;
  return 0;
}