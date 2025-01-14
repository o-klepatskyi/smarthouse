#ifndef SMARTHOUSE_HANDLER_PING_H_
#define SMARTHOUSE_HANDLER_PING_H_
#include <Poco/Net/HTTPRequestHandler.h>

namespace handlers
{

class Ping: public Poco::Net::HTTPRequestHandler
{

private:
	void handleRequest(
		Poco::Net::HTTPServerRequest& request,
		Poco::Net::HTTPServerResponse& response) override;
};
} 
#endif