//
// IPeripheral.cpp
//
// Library: IoT/BtLE
// Package: Generated
// Module:  IPeripheral
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2017, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#include "IoT/BtLE/IPeripheral.h"


namespace IoT {
namespace BtLE {


IPeripheral::IPeripheral():
	Poco::OSP::Service(),
	connected(),
	disconnected(),
	error(),
	indicationReceived(),
	notificationReceived()
{
}


IPeripheral::~IPeripheral()
{
}


bool IPeripheral::isA(const std::type_info& otherType) const
{
	std::string name(type().name());
	return name == otherType.name();
}


const Poco::RemotingNG::Identifiable::TypeId& IPeripheral::remoting__typeId()
{
	remoting__staticInitBegin(REMOTING__TYPE_ID);
	static const std::string REMOTING__TYPE_ID("IoT.BtLE.Peripheral");
	remoting__staticInitEnd(REMOTING__TYPE_ID);
	return REMOTING__TYPE_ID;
}


const std::type_info& IPeripheral::type() const
{
	return typeid(IPeripheral);
}


} // namespace BtLE
} // namespace IoT

