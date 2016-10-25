#ifndef __IOTIVITY_NODE_FUNCTION_PROTOTYPES_H__
#define __IOTIVITY_NODE_FUNCTION_PROTOTYPES_H__

#include <nan.h>

NAN_METHOD(bind_OCBindResource);
NAN_METHOD(bind_OCBindResourceHandler);
NAN_METHOD(bind_OCBindResourceInterfaceToResource);
NAN_METHOD(bind_OCBindResourceTypeToResource);
NAN_METHOD(bind_OCCancel);
NAN_METHOD(bind_OCCreateResource);
NAN_METHOD(bind_OCDeleteResource);
NAN_METHOD(bind_OCDoResource);
NAN_METHOD(bind_OCDoResponse);
NAN_METHOD(bind_OCGetNumberOfResourceInterfaces);
NAN_METHOD(bind_OCGetNumberOfResources);
NAN_METHOD(bind_OCGetNumberOfResourceTypes);
NAN_METHOD(bind_OCGetResourceHandle);
NAN_METHOD(bind_OCGetResourceHandleFromCollection);
NAN_METHOD(bind_OCGetResourceHandler);
NAN_METHOD(bind_OCGetResourceInterfaceName);
NAN_METHOD(bind_OCGetResourceProperties);
NAN_METHOD(bind_OCGetResourceTypeName);
NAN_METHOD(bind_OCGetResourceUri);
NAN_METHOD(bind_OCGetServerInstanceIDString);
NAN_METHOD(bind_OCInit);
NAN_METHOD(bind_OCNotifyAllObservers);
NAN_METHOD(bind_OCNotifyListOfObservers);
NAN_METHOD(bind_OCProcess);
NAN_METHOD(bind_OCRegisterPersistentStorageHandler);
NAN_METHOD(bind_OCSetDefaultDeviceEntityHandler);
NAN_METHOD(bind_OCSetDeviceInfo);
NAN_METHOD(bind_OCSetPlatformInfo);
NAN_METHOD(bind_OCStartPresence);
NAN_METHOD(bind_OCStop);
NAN_METHOD(bind_OCStopPresence);
NAN_METHOD(bind_OCUnBindResource);

#endif /* ndef __IOTIVITY_NODE_FUNCTION_PROTOTYPES_H__ */
