#ifndef STATIC_FILE_HANDLER_H
#define STATIC_FILE_HANDLER_H

#include "request_handler.h"
#include <iostream>

class StaticFileHandler : public RequestHandler {
 public:
  virtual void HandleRequest(void);
};

REGISTER_REQUEST_HANDLER(StaticFileHandler);

#endif  // STATIC_FILE_HANDLER_H
