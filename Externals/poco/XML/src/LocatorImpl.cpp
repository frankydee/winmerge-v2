//
// LocatorImpl.cpp
//
// $Id: //poco/1.4/XML/src/LocatorImpl.cpp#1 $
//
// Library: XML
// Package: SAX
// Module:  SAX
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "Poco/SAX/LocatorImpl.h"


namespace Poco {
namespace XML {


LocatorImpl::LocatorImpl()
{
	_lineNumber   = 0;
	_columnNumber = 0;
}


LocatorImpl::LocatorImpl(const Locator& loc)
{
	_publicId     = loc.getPublicId();
	_systemId     = loc.getSystemId();
	_lineNumber   = loc.getLineNumber();
	_columnNumber = loc.getColumnNumber();
}


LocatorImpl::~LocatorImpl()
{
}


LocatorImpl& LocatorImpl::operator = (const Locator& loc)
{
	if (&loc != this)
	{
		_publicId     = loc.getPublicId();
		_systemId     = loc.getSystemId();
		_lineNumber   = loc.getLineNumber();
		_columnNumber = loc.getColumnNumber();
	}
	return *this;
}


XMLString LocatorImpl::getPublicId() const
{
	return _publicId;
}


XMLString LocatorImpl::getSystemId() const
{
	return _systemId;
}


int LocatorImpl::getLineNumber() const
{
	return _lineNumber;
}


int LocatorImpl::getColumnNumber() const
{
	return _columnNumber;
}


void LocatorImpl::setPublicId(const XMLString& publicId)
{
	_publicId = publicId;
}


void LocatorImpl::setSystemId(const XMLString& systemId)
{
	_systemId = systemId;
}


void LocatorImpl::setLineNumber(int lineNumber)
{
	_lineNumber = lineNumber;
}


void LocatorImpl::setColumnNumber(int columnNumber)
{
	_columnNumber = columnNumber;
}


} } // namespace Poco::XML
