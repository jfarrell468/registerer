#include "request_handler.h"

int main(int arc, char** argv) {
  auto handler = RequestHandler::CreateByName("EchoHandler");
  handler->HandleRequest();
  handler = RequestHandler::CreateByName("StaticFileHandler");
  handler->HandleRequest();
  return 0;
}
