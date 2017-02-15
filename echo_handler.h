#ifndef ECHO_HANDLER_H
#define ECHO_HANDLER_H

#include "request_handler.h"
#include <iostream>

class EchoHandler : public RequestHandler {
 public:
  virtual void HandleRequest(void);
};

REGISTER_REQUEST_HANDLER(EchoHandler);

#endif  // ECHO_HANDLER_H
