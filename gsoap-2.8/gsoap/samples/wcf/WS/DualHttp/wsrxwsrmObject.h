/* wsrxwsrmObject.h
   Generated by gSOAP 2.8.12 from ../../../../import/wsrm5.h

Copyright(C) 2000-2012, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef wsrxwsrmObject_H
#define wsrxwsrmObject_H
#include "wsrxH.h"

/******************************************************************************\
 *                                                                            *
 * Service Object                                                             *
 *                                                                            *
\******************************************************************************/

class wsrmService : public soap
{    public:
	wsrmService()
	{ static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"wsrm", "http://schemas.xmlsoap.org/ws/2005/02/rm", "http://docs.oasis-open.org/ws-rx/wsrm/200702", NULL},
	{NULL, NULL, NULL, NULL}
};

	this->namespaces = namespaces; };
	virtual ~wsrmService() { };
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog) { return soap_bind(this, host, port, backlog); };
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept() { return soap_accept(this); };
#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
	/// Then accept SSL handshake, when SSL is used
	virtual	int ssl_accept() { return soap_ssl_accept(this); };
#endif
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve() { return soap_serve(this); };
};

/******************************************************************************\
 *                                                                            *
 * Service Operations (you should define these globally)                      *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 SOAP_ENV__Fault(struct soap*, char *faultcode, char *faultstring, char *faultactor, struct SOAP_ENV__Detail *detail, struct SOAP_ENV__Code *SOAP_ENV__Code, struct SOAP_ENV__Reason *SOAP_ENV__Reason, char *SOAP_ENV__Node, char *SOAP_ENV__Role, struct SOAP_ENV__Detail *SOAP_ENV__Detail);

SOAP_FMAC5 int SOAP_FMAC6 __wsrm__CreateSequence(struct soap*, struct wsrm__CreateSequenceType *wsrm__CreateSequence, struct wsrm__CreateSequenceResponseType *wsrm__CreateSequenceResponse);

SOAP_FMAC5 int SOAP_FMAC6 __wsrm__CloseSequence(struct soap*, struct wsrm__CloseSequenceType *wsrm__CloseSequence, struct wsrm__CloseSequenceResponseType *wsrm__CloseSequenceResponse);

SOAP_FMAC5 int SOAP_FMAC6 __wsrm__TerminateSequence(struct soap*, struct wsrm__TerminateSequenceType *wsrm__TerminateSequence, struct wsrm__TerminateSequenceResponseType *wsrm__TerminateSequence_);

SOAP_FMAC5 int SOAP_FMAC6 __wsrm__CreateSequenceResponse(struct soap*, struct wsrm__CreateSequenceResponseType *wsrm__CreateSequenceResponse);

SOAP_FMAC5 int SOAP_FMAC6 __wsrm__CloseSequenceResponse(struct soap*, struct wsrm__CloseSequenceResponseType *wsrm__CloseSequenceResponse);

SOAP_FMAC5 int SOAP_FMAC6 __wsrm__TerminateSequenceResponse(struct soap*, struct wsrm__TerminateSequenceResponseType *wsrm__TerminateSequenceResponse);

SOAP_FMAC5 int SOAP_FMAC6 __wsrm__SequenceAcknowledgement(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 __wsrm__AckRequested(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 __wsrm__LastMessage(struct soap*);

#endif
