//
// CounterEventDispatcher.h
//
// Library: IoT/Devices
// Package: Generated
// Module:  CounterEventDispatcher
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2014-2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef IoT_Devices_CounterEventDispatcher_INCLUDED
#define IoT_Devices_CounterEventDispatcher_INCLUDED


#include "IoT/Devices/CounterRemoteObject.h"
#include "Poco/RemotingNG/EventDispatcher.h"


namespace IoT {
namespace Devices {


class CounterEventDispatcher: public Poco::RemotingNG::EventDispatcher
	/// A counter counts events.
{
public:
	CounterEventDispatcher(CounterRemoteObject* pRemoteObject, const std::string& protocol);
		/// Creates a CounterEventDispatcher.

	virtual ~CounterEventDispatcher();
		/// Destroys the CounterEventDispatcher.

	void event__countChanged(const void* pSender, const Poco::Int32& data);

	virtual const Poco::RemotingNG::Identifiable::TypeId& remoting__typeId() const;

private:
	void event__countChangedImpl(const std::string& subscriberURI, const Poco::Int32& data);

	static const std::string DEFAULT_NS;
	CounterRemoteObject* _pRemoteObject;
};


inline const Poco::RemotingNG::Identifiable::TypeId& CounterEventDispatcher::remoting__typeId() const
{
	return ICounter::remoting__typeId();
}


} // namespace Devices
} // namespace IoT


#endif // IoT_Devices_CounterEventDispatcher_INCLUDED

