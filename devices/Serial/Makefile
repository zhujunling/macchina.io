#
# Makefile
#
# Makefile for macchina.io Serial bundle
#

include $(POCO_BASE)/build/rules/global

include $(POCO_BASE)/OSP/BundleCreator/BundleCreator.make

INCLUDE += -I$(PROJECT_BASE)/devices/Devices/include

objects = SerialDeviceImpl BundleActivator

target         = io.macchina.serial
target_version = 1
target_libs    = IoTDevices PocoSerial PocoOSP PocoRemotingNG PocoUtil PocoXML PocoFoundation

postbuild      = $(SET_LD_LIBRARY_PATH) $(BUNDLE_TOOL) -n$(OSNAME) -a$(OSARCH) -o../bundles Serial.bndlspec

include $(POCO_BASE)/build/rules/dylib
