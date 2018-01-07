//
// IRotaryEncoder.cpp
//
// Library: IoT/Devices
// Package: Generated
// Module:  IRotaryEncoder
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2014-2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#include "IoT/Devices/IRotaryEncoder.h"


namespace IoT {
namespace Devices {


IRotaryEncoder::IRotaryEncoder():
	IoT::Devices::ICounter(),
	buttonStateChanged()
{
}


IRotaryEncoder::~IRotaryEncoder()
{
}


bool IRotaryEncoder::isA(const std::type_info& otherType) const
{
	std::string name(type().name());
	return name == otherType.name();
}


const Poco::RemotingNG::Identifiable::TypeId& IRotaryEncoder::remoting__typeId()
{
	remoting__staticInitBegin(REMOTING__TYPE_ID);
	static const std::string REMOTING__TYPE_ID("IoT.Devices.RotaryEncoder");
	remoting__staticInitEnd(REMOTING__TYPE_ID);
	return REMOTING__TYPE_ID;
}


const std::type_info& IRotaryEncoder::type() const
{
	return typeid(IRotaryEncoder);
}


} // namespace Devices
} // namespace IoT

