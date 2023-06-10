#pragma once

#include "SalesTicket.hpp"
#include "Decorator/FooterPrinter.hpp"
#include "Decorator/HeaderPrinter.hpp"
#include "Decorator/AnotherHeaderPrinter.hpp"

#include <string>

using std::string;

class TicketFactory {
public:
  static Component* createTicket(SalesTicket* ticket, string ticketType) {
    if (ticketType == "type1") {
      return new HeaderPrinter(new AnotherHeaderPrinter(new FooterPrinter(ticket)));
    }
    else if (ticketType == "type2") {
      return new HeaderPrinter(ticket);
    }
    else if (ticketType == "type3") {
      return new FooterPrinter(ticket);
    }
    else {
      return ticket;
    }
  }
};
