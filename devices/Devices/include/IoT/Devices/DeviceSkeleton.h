//
// DeviceSkeleton.h
//
// Library: IoT/Devices
// Package: Generated
// Module:  DeviceSkeleton
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2014-2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef IoT_Devices_DeviceSkeleton_INCLUDED
#define IoT_Devices_DeviceSkeleton_INCLUDED


#include "IoT/Devices/DeviceRemoteObject.h"
#include "Poco/RemotingNG/Skeleton.h"


namespace IoT {
namespace Devices {


class DeviceSkeleton: public Poco::RemotingNG::Skeleton
	/// The base class for all devices and sensors.
	///
	/// This class defines a generic interface for setting
	/// and querying device properties and features.
	///
	/// Every implementation of Device should expose the
	/// following properties:
	///   - symbolicName: A name in reverse DNS notation that identifies the
	///     specific implementation of the device type.
	///   - type (string): A name in reverse DNS notation
	///     that identifies the generic device type (e.g., "io.macchina.serial").
	///   - name (string): A human-readable device type (e.g., "Serial Port").
	///
	/// The following generic device types are currently defined:
	///   - io.macchina.accelerometer (Accelerometer)
	///   - io.macchina.barcode (BarcodeReader)
	///   - io.macchina.gnss (GNSSSensor)
	///   - io.macchina.gyroscope (Gyroscope)
	///   - io.macchina.io (IO)
	///   - io.macchina.led (LED)
	///   - io.macchina.magnetometer (Magnetometer)
	///   - io.macchina.rotary (RotaryEncoder)
	///   - io.macchina.sensor (Sensor)
	///   - io.macchina.serial (SerialDevice)
	///   - io.macchina.switch (Switch)
	///   - io.macchina.trigger (Trigger)
{
public:
	DeviceSkeleton();
		/// Creates a DeviceSkeleton.

	virtual ~DeviceSkeleton();
		/// Destroys a DeviceSkeleton.

	virtual const Poco::RemotingNG::Identifiable::TypeId& remoting__typeId() const;

	static const std::string DEFAULT_NS;
};


inline const Poco::RemotingNG::Identifiable::TypeId& DeviceSkeleton::remoting__typeId() const
{
	return IDevice::remoting__typeId();
}


} // namespace Devices
} // namespace IoT


#endif // IoT_Devices_DeviceSkeleton_INCLUDED

