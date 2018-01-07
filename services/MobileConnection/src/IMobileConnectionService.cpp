//
// IMobileConnectionService.cpp
//
// Library: IoT/MobileConnection
// Package: Generated
// Module:  IMobileConnectionService
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2017, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#include "IoT/MobileConnection/IMobileConnectionService.h"


namespace IoT {
namespace MobileConnection {


IMobileConnectionService::IMobileConnectionService():
	Poco::OSP::Service(),
	dataConnected(),
	dataDisconnected()
{
}


IMobileConnectionService::~IMobileConnectionService()
{
}


bool IMobileConnectionService::isA(const std::type_info& otherType) const
{
	std::string name(type().name());
	return name == otherType.name();
}


const Poco::RemotingNG::Identifiable::TypeId& IMobileConnectionService::remoting__typeId()
{
	remoting__staticInitBegin(REMOTING__TYPE_ID);
	static const std::string REMOTING__TYPE_ID("IoT.MobileConnection.MobileConnectionService");
	remoting__staticInitEnd(REMOTING__TYPE_ID);
	return REMOTING__TYPE_ID;
}


const std::type_info& IMobileConnectionService::type() const
{
	return typeid(IMobileConnectionService);
}


} // namespace MobileConnection
} // namespace IoT

