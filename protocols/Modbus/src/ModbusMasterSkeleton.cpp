//
// ModbusMasterSkeleton.cpp
//
// Library: IoT/Modbus
// Package: Generated
// Module:  ModbusMasterSkeleton
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#include "IoT/Modbus/ModbusMasterSkeleton.h"
#include "IoT/Modbus/GenericMessageDeserializer.h"
#include "IoT/Modbus/GenericMessageSerializer.h"
#include "IoT/Modbus/MaskWriteRegisterRequestDeserializer.h"
#include "IoT/Modbus/MaskWriteRegisterRequestSerializer.h"
#include "IoT/Modbus/ReadCoilsRequestDeserializer.h"
#include "IoT/Modbus/ReadCoilsRequestSerializer.h"
#include "IoT/Modbus/ReadDiscreteInputsRequestDeserializer.h"
#include "IoT/Modbus/ReadDiscreteInputsRequestSerializer.h"
#include "IoT/Modbus/ReadExceptionStatusRequestDeserializer.h"
#include "IoT/Modbus/ReadExceptionStatusRequestSerializer.h"
#include "IoT/Modbus/ReadFIFOQueueRequestDeserializer.h"
#include "IoT/Modbus/ReadFIFOQueueRequestSerializer.h"
#include "IoT/Modbus/ReadHoldingRegistersRequestDeserializer.h"
#include "IoT/Modbus/ReadHoldingRegistersRequestSerializer.h"
#include "IoT/Modbus/ReadInputRegistersRequestDeserializer.h"
#include "IoT/Modbus/ReadInputRegistersRequestSerializer.h"
#include "IoT/Modbus/ReadWriteMultipleRegistersRequestDeserializer.h"
#include "IoT/Modbus/ReadWriteMultipleRegistersRequestSerializer.h"
#include "IoT/Modbus/WriteMultipleCoilsRequestDeserializer.h"
#include "IoT/Modbus/WriteMultipleCoilsRequestSerializer.h"
#include "IoT/Modbus/WriteMultipleRegistersRequestDeserializer.h"
#include "IoT/Modbus/WriteMultipleRegistersRequestSerializer.h"
#include "IoT/Modbus/WriteSingleCoilRequestDeserializer.h"
#include "IoT/Modbus/WriteSingleCoilRequestSerializer.h"
#include "IoT/Modbus/WriteSingleRegisterRequestDeserializer.h"
#include "IoT/Modbus/WriteSingleRegisterRequestSerializer.h"
#include "Poco/RemotingNG/Deserializer.h"
#include "Poco/RemotingNG/MethodHandler.h"
#include "Poco/RemotingNG/RemotingException.h"
#include "Poco/RemotingNG/Serializer.h"
#include "Poco/RemotingNG/ServerTransport.h"
#include "Poco/RemotingNG/TypeDeserializer.h"
#include "Poco/RemotingNG/TypeSerializer.h"
#include "Poco/SharedPtr.h"


namespace IoT {
namespace Modbus {


class ModbusMasterMaskWriteRegisterMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"maskWriteRegister","slaveAddress","outputAddress","andMask","orMask"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			Poco::UInt16 outputAddress;
			Poco::UInt16 andMask;
			Poco::UInt16 orMask;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[2], true, remoting__deser, outputAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[3], true, remoting__deser, andMask);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[4], true, remoting__deser, orMask);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			remoting__pCastedRO->maskWriteRegister(slaveAddress, outputAddress, andMask, orMask);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("maskWriteRegisterReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterReadCoilsMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"readCoils","slaveAddress","startingAddress","nOfCoils"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			Poco::UInt16 startingAddress;
			Poco::UInt16 nOfCoils;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[2], true, remoting__deser, startingAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[3], true, remoting__deser, nOfCoils);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			std::vector < bool > remoting__return = remoting__pCastedRO->readCoils(slaveAddress, startingAddress, nOfCoils);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("readCoilsReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<std::vector < bool > >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterReadDiscreteInputsMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"readDiscreteInputs","slaveAddress","startingAddress","nOfInputs"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			Poco::UInt16 startingAddress;
			Poco::UInt16 nOfInputs;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[2], true, remoting__deser, startingAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[3], true, remoting__deser, nOfInputs);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			std::vector < bool > remoting__return = remoting__pCastedRO->readDiscreteInputs(slaveAddress, startingAddress, nOfInputs);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("readDiscreteInputsReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<std::vector < bool > >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterReadExceptionStatusMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"readExceptionStatus","slaveAddress"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt8 remoting__return = remoting__pCastedRO->readExceptionStatus(slaveAddress);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("readExceptionStatusReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt8 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterReadFIFOQueueMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"readFIFOQueue","slaveAddress","fifoPointerAddress"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			Poco::UInt16 fifoPointerAddress;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[2], true, remoting__deser, fifoPointerAddress);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			std::vector < Poco::UInt16 > remoting__return = remoting__pCastedRO->readFIFOQueue(slaveAddress, fifoPointerAddress);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("readFIFOQueueReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<std::vector < Poco::UInt16 > >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterReadHoldingRegistersMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"readHoldingRegisters","slaveAddress","startingAddress","nOfRegisters"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			Poco::UInt16 startingAddress;
			Poco::UInt16 nOfRegisters;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[2], true, remoting__deser, startingAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[3], true, remoting__deser, nOfRegisters);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			std::vector < Poco::UInt16 > remoting__return = remoting__pCastedRO->readHoldingRegisters(slaveAddress, startingAddress, nOfRegisters);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("readHoldingRegistersReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<std::vector < Poco::UInt16 > >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterReadInputRegistersMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"readInputRegisters","slaveAddress","startingAddress","nOfRegisters"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			Poco::UInt16 startingAddress;
			Poco::UInt16 nOfRegisters;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[2], true, remoting__deser, startingAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[3], true, remoting__deser, nOfRegisters);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			std::vector < Poco::UInt16 > remoting__return = remoting__pCastedRO->readInputRegisters(slaveAddress, startingAddress, nOfRegisters);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("readInputRegistersReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<std::vector < Poco::UInt16 > >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterReadWriteMultipleRegistersMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"readWriteMultipleRegisters","slaveAddress","writeStartingAddress","writeValues","readStartingAddress","nOfReadRegisters"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			Poco::UInt16 writeStartingAddress;
			std::vector < Poco::UInt16 > writeValues;
			Poco::UInt16 readStartingAddress;
			Poco::UInt8 nOfReadRegisters;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[2], true, remoting__deser, writeStartingAddress);
			Poco::RemotingNG::TypeDeserializer<std::vector < Poco::UInt16 > >::deserialize(REMOTING__NAMES[3], true, remoting__deser, writeValues);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[4], true, remoting__deser, readStartingAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[5], true, remoting__deser, nOfReadRegisters);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			std::vector < Poco::UInt16 > remoting__return = remoting__pCastedRO->readWriteMultipleRegisters(slaveAddress, writeStartingAddress, writeValues, readStartingAddress, nOfReadRegisters);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("readWriteMultipleRegistersReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<std::vector < Poco::UInt16 > >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendMaskWriteRegisterRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendMaskWriteRegisterRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::MaskWriteRegisterRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::MaskWriteRegisterRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendMaskWriteRegisterRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendMaskWriteRegisterRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendReadCoilsRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendReadCoilsRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::ReadCoilsRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::ReadCoilsRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendReadCoilsRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendReadCoilsRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendReadDiscreteInputsRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendReadDiscreteInputsRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::ReadDiscreteInputsRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::ReadDiscreteInputsRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendReadDiscreteInputsRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendReadDiscreteInputsRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendReadExceptionStatusRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendReadExceptionStatusRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::ReadExceptionStatusRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::ReadExceptionStatusRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendReadExceptionStatusRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendReadExceptionStatusRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendReadFIFOQueueRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendReadFIFOQueueRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::ReadFIFOQueueRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::ReadFIFOQueueRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendReadFIFOQueueRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendReadFIFOQueueRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendReadHoldingRegistersRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendReadHoldingRegistersRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::ReadHoldingRegistersRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::ReadHoldingRegistersRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendReadHoldingRegistersRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendReadHoldingRegistersRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendReadInputRegistersRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendReadInputRegistersRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::ReadInputRegistersRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::ReadInputRegistersRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendReadInputRegistersRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendReadInputRegistersRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendReadWriteMultipleRegistersRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendReadWriteMultipleRegistersRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::ReadWriteMultipleRegistersRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::ReadWriteMultipleRegistersRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendReadWriteMultipleRegistersRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendReadWriteMultipleRegistersRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendRequest","message"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::GenericMessage message;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::GenericMessage >::deserialize(REMOTING__NAMES[1], true, remoting__deser, message);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendRequest(message);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendWriteMultipleCoilsRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendWriteMultipleCoilsRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::WriteMultipleCoilsRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::WriteMultipleCoilsRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendWriteMultipleCoilsRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendWriteMultipleCoilsRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendWriteMultipleRegistersRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendWriteMultipleRegistersRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::WriteMultipleRegistersRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::WriteMultipleRegistersRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendWriteMultipleRegistersRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendWriteMultipleRegistersRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendWriteSingleCoilRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendWriteSingleCoilRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::WriteSingleCoilRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::WriteSingleCoilRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendWriteSingleCoilRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendWriteSingleCoilRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterSendWriteSingleRegisterRequestMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"sendWriteSingleRegisterRequest","request"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			IoT::Modbus::WriteSingleRegisterRequest request;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<IoT::Modbus::WriteSingleRegisterRequest >::deserialize(REMOTING__NAMES[1], true, remoting__deser, request);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			Poco::UInt16 remoting__return = remoting__pCastedRO->sendWriteSingleRegisterRequest(request);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("sendWriteSingleRegisterRequestReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			Poco::RemotingNG::TypeSerializer<Poco::UInt16 >::serialize(Poco::RemotingNG::SerializerBase::RETURN_PARAM, remoting__return, remoting__ser);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterWriteMultipleCoilsMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"writeMultipleCoils","slaveAddress","outputAddress","values"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			Poco::UInt16 outputAddress;
			std::vector < bool > values;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[2], true, remoting__deser, outputAddress);
			Poco::RemotingNG::TypeDeserializer<std::vector < bool > >::deserialize(REMOTING__NAMES[3], true, remoting__deser, values);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			remoting__pCastedRO->writeMultipleCoils(slaveAddress, outputAddress, values);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("writeMultipleCoilsReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterWriteMultipleRegistersMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"writeMultipleRegisters","slaveAddress","outputAddress","values"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			Poco::UInt16 outputAddress;
			std::vector < Poco::UInt16 > values;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[2], true, remoting__deser, outputAddress);
			Poco::RemotingNG::TypeDeserializer<std::vector < Poco::UInt16 > >::deserialize(REMOTING__NAMES[3], true, remoting__deser, values);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			remoting__pCastedRO->writeMultipleRegisters(slaveAddress, outputAddress, values);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("writeMultipleRegistersReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterWriteSingleCoilMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"writeSingleCoil","slaveAddress","outputAddress","value"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			Poco::UInt16 outputAddress;
			bool value;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[2], true, remoting__deser, outputAddress);
			Poco::RemotingNG::TypeDeserializer<bool >::deserialize(REMOTING__NAMES[3], true, remoting__deser, value);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			remoting__pCastedRO->writeSingleCoil(slaveAddress, outputAddress, value);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("writeSingleCoilReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


class ModbusMasterWriteSingleRegisterMethodHandler: public Poco::RemotingNG::MethodHandler
{
public:
	void invoke(Poco::RemotingNG::ServerTransport& remoting__trans, Poco::RemotingNG::Deserializer& remoting__deser, Poco::RemotingNG::RemoteObject::Ptr remoting__pRemoteObject)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"writeSingleRegister","slaveAddress","outputAddress","value"};
		remoting__staticInitEnd(REMOTING__NAMES);
		bool remoting__requestSucceeded = false;
		try
		{
			Poco::UInt8 slaveAddress;
			Poco::UInt16 outputAddress;
			Poco::UInt16 value;
			remoting__deser.deserializeMessageBegin(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, remoting__deser, slaveAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[2], true, remoting__deser, outputAddress);
			Poco::RemotingNG::TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES[3], true, remoting__deser, value);
			remoting__deser.deserializeMessageEnd(REMOTING__NAMES[0], Poco::RemotingNG::SerializerBase::MESSAGE_REQUEST);
			IoT::Modbus::ModbusMasterRemoteObject* remoting__pCastedRO = static_cast<IoT::Modbus::ModbusMasterRemoteObject*>(remoting__pRemoteObject.get());
			remoting__pCastedRO->writeSingleRegister(slaveAddress, outputAddress, value);
			remoting__requestSucceeded = true;
			Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__staticInitBegin(REMOTING__REPLY_NAME);
			static const std::string REMOTING__REPLY_NAME("writeSingleRegisterReply");
			remoting__staticInitEnd(REMOTING__REPLY_NAME);
			remoting__ser.serializeMessageBegin(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
			remoting__ser.serializeMessageEnd(REMOTING__REPLY_NAME, Poco::RemotingNG::SerializerBase::MESSAGE_REPLY);
		}
		catch (Poco::Exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], e);
			}
		}
		catch (std::exception& e)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc(e.what());
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
		catch (...)
		{
			if (!remoting__requestSucceeded)
			{
				Poco::RemotingNG::Serializer& remoting__ser = remoting__trans.sendReply(Poco::RemotingNG::SerializerBase::MESSAGE_FAULT);
				Poco::Exception exc("Unknown Exception");
				remoting__ser.serializeFaultMessage(REMOTING__NAMES[0], exc);
			}
		}
	}

};


ModbusMasterSkeleton::ModbusMasterSkeleton():
	Poco::RemotingNG::Skeleton()

{
	addMethodHandler("maskWriteRegister", new IoT::Modbus::ModbusMasterMaskWriteRegisterMethodHandler);
	addMethodHandler("readCoils", new IoT::Modbus::ModbusMasterReadCoilsMethodHandler);
	addMethodHandler("readDiscreteInputs", new IoT::Modbus::ModbusMasterReadDiscreteInputsMethodHandler);
	addMethodHandler("readExceptionStatus", new IoT::Modbus::ModbusMasterReadExceptionStatusMethodHandler);
	addMethodHandler("readFIFOQueue", new IoT::Modbus::ModbusMasterReadFIFOQueueMethodHandler);
	addMethodHandler("readHoldingRegisters", new IoT::Modbus::ModbusMasterReadHoldingRegistersMethodHandler);
	addMethodHandler("readInputRegisters", new IoT::Modbus::ModbusMasterReadInputRegistersMethodHandler);
	addMethodHandler("readWriteMultipleRegisters", new IoT::Modbus::ModbusMasterReadWriteMultipleRegistersMethodHandler);
	addMethodHandler("sendMaskWriteRegisterRequest", new IoT::Modbus::ModbusMasterSendMaskWriteRegisterRequestMethodHandler);
	addMethodHandler("sendReadCoilsRequest", new IoT::Modbus::ModbusMasterSendReadCoilsRequestMethodHandler);
	addMethodHandler("sendReadDiscreteInputsRequest", new IoT::Modbus::ModbusMasterSendReadDiscreteInputsRequestMethodHandler);
	addMethodHandler("sendReadExceptionStatusRequest", new IoT::Modbus::ModbusMasterSendReadExceptionStatusRequestMethodHandler);
	addMethodHandler("sendReadFIFOQueueRequest", new IoT::Modbus::ModbusMasterSendReadFIFOQueueRequestMethodHandler);
	addMethodHandler("sendReadHoldingRegistersRequest", new IoT::Modbus::ModbusMasterSendReadHoldingRegistersRequestMethodHandler);
	addMethodHandler("sendReadInputRegistersRequest", new IoT::Modbus::ModbusMasterSendReadInputRegistersRequestMethodHandler);
	addMethodHandler("sendReadWriteMultipleRegistersRequest", new IoT::Modbus::ModbusMasterSendReadWriteMultipleRegistersRequestMethodHandler);
	addMethodHandler("sendRequest", new IoT::Modbus::ModbusMasterSendRequestMethodHandler);
	addMethodHandler("sendWriteMultipleCoilsRequest", new IoT::Modbus::ModbusMasterSendWriteMultipleCoilsRequestMethodHandler);
	addMethodHandler("sendWriteMultipleRegistersRequest", new IoT::Modbus::ModbusMasterSendWriteMultipleRegistersRequestMethodHandler);
	addMethodHandler("sendWriteSingleCoilRequest", new IoT::Modbus::ModbusMasterSendWriteSingleCoilRequestMethodHandler);
	addMethodHandler("sendWriteSingleRegisterRequest", new IoT::Modbus::ModbusMasterSendWriteSingleRegisterRequestMethodHandler);
	addMethodHandler("writeMultipleCoils", new IoT::Modbus::ModbusMasterWriteMultipleCoilsMethodHandler);
	addMethodHandler("writeMultipleRegisters", new IoT::Modbus::ModbusMasterWriteMultipleRegistersMethodHandler);
	addMethodHandler("writeSingleCoil", new IoT::Modbus::ModbusMasterWriteSingleCoilMethodHandler);
	addMethodHandler("writeSingleRegister", new IoT::Modbus::ModbusMasterWriteSingleRegisterMethodHandler);
}


ModbusMasterSkeleton::~ModbusMasterSkeleton()
{
}


const std::string ModbusMasterSkeleton::DEFAULT_NS("");
} // namespace Modbus
} // namespace IoT

