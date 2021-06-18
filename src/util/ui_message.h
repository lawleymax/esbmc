/*******************************************************************\

Module:

Author: Daniel Kroening, kroening@kroening.com

\*******************************************************************/

#ifndef CPROVER_UI_LANGUAGE_H
#define CPROVER_UI_LANGUAGE_H

#include <util/message.h>

class ui_message_handlert : public message_handlert
{
public:
  ui_message_handlert() = default;

protected:  
  // overloading
  virtual void print(unsigned level, const std::string &message);

  // overloading
  void print(
    unsigned level,
    const std::string &message,
    const locationt &location) override;

  const char *level_string(unsigned level);
};

#endif
