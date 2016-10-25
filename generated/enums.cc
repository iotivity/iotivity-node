/*
 * Copyright 2016 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <nan.h>

#include "enums.h"

extern "C" {
#include <ocstack.h>
}

using namespace v8;

#define SET_ENUM(destination, enumName)                              \
  Nan::ForceSet((destination), Nan::New(#enumName).ToLocalChecked(), \
                bind_##enumName(),                                   \
                (v8::PropertyAttribute)(v8::ReadOnly | v8::DontDelete));

// The rest of this file is generated
static Local<Object> bind_OCTransportAdapter() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_DEFAULT_ADAPTER);
  SET_CONSTANT_NUMBER(returnValue, OC_ADAPTER_IP);
  SET_CONSTANT_NUMBER(returnValue, OC_ADAPTER_GATT_BTLE);
  SET_CONSTANT_NUMBER(returnValue, OC_ADAPTER_RFCOMM_BTEDR);
#ifdef RA_ADAPTER
  SET_CONSTANT_NUMBER(returnValue, OC_ADAPTER_REMOTE_ACCESS);
#endif
  SET_CONSTANT_NUMBER(returnValue, OC_ADAPTER_TCP);
  SET_CONSTANT_NUMBER(returnValue, OC_ADAPTER_NFC);

  return returnValue;
}

static Local<Object> bind_OCTransportFlags() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_DEFAULT_FLAGS);
  SET_CONSTANT_NUMBER(returnValue, OC_FLAG_SECURE);
  SET_CONSTANT_NUMBER(returnValue, OC_IP_USE_V6);
  SET_CONSTANT_NUMBER(returnValue, OC_IP_USE_V4);
  SET_CONSTANT_NUMBER(returnValue, OC_MULTICAST);
  SET_CONSTANT_NUMBER(returnValue, OC_SCOPE_INTERFACE);
  SET_CONSTANT_NUMBER(returnValue, OC_SCOPE_LINK);
  SET_CONSTANT_NUMBER(returnValue, OC_SCOPE_REALM);
  SET_CONSTANT_NUMBER(returnValue, OC_SCOPE_ADMIN);
  SET_CONSTANT_NUMBER(returnValue, OC_SCOPE_SITE);
  SET_CONSTANT_NUMBER(returnValue, OC_SCOPE_ORG);
  SET_CONSTANT_NUMBER(returnValue, OC_SCOPE_GLOBAL);

  return returnValue;
}

static Local<Object> bind_OCConnectivityType() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, CT_DEFAULT);
  SET_CONSTANT_NUMBER(returnValue, CT_ADAPTER_IP);
  SET_CONSTANT_NUMBER(returnValue, CT_ADAPTER_GATT_BTLE);
  SET_CONSTANT_NUMBER(returnValue, CT_ADAPTER_RFCOMM_BTEDR);
#ifdef RA_ADAPTER
  SET_CONSTANT_NUMBER(returnValue, CT_ADAPTER_REMOTE_ACCESS);
#endif
  SET_CONSTANT_NUMBER(returnValue, CT_ADAPTER_TCP);
  SET_CONSTANT_NUMBER(returnValue, CT_ADAPTER_NFC);
  SET_CONSTANT_NUMBER(returnValue, CT_FLAG_SECURE);
  SET_CONSTANT_NUMBER(returnValue, CT_IP_USE_V6);
  SET_CONSTANT_NUMBER(returnValue, CT_IP_USE_V4);
  SET_CONSTANT_NUMBER(returnValue, CT_SCOPE_INTERFACE);
  SET_CONSTANT_NUMBER(returnValue, CT_SCOPE_LINK);
  SET_CONSTANT_NUMBER(returnValue, CT_SCOPE_REALM);
  SET_CONSTANT_NUMBER(returnValue, CT_SCOPE_ADMIN);
  SET_CONSTANT_NUMBER(returnValue, CT_SCOPE_SITE);
  SET_CONSTANT_NUMBER(returnValue, CT_SCOPE_ORG);
  SET_CONSTANT_NUMBER(returnValue, CT_SCOPE_GLOBAL);

  return returnValue;
}

static Local<Object> bind_OCMethod() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_REST_NOMETHOD);
  SET_CONSTANT_NUMBER(returnValue, OC_REST_GET);
  SET_CONSTANT_NUMBER(returnValue, OC_REST_PUT);
  SET_CONSTANT_NUMBER(returnValue, OC_REST_POST);
  SET_CONSTANT_NUMBER(returnValue, OC_REST_DELETE);
  SET_CONSTANT_NUMBER(returnValue, OC_REST_OBSERVE);
  SET_CONSTANT_NUMBER(returnValue, OC_REST_OBSERVE_ALL);
#ifdef WITH_PRESENCE
  SET_CONSTANT_NUMBER(returnValue, OC_REST_PRESENCE);
#endif
  SET_CONSTANT_NUMBER(returnValue, OC_REST_DISCOVER);

  return returnValue;
}

static Local<Object> bind_OCPayloadFormat() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_FORMAT_CBOR);
  SET_CONSTANT_NUMBER(returnValue, OC_FORMAT_JSON);
  SET_CONSTANT_NUMBER(returnValue, OC_FORMAT_UNDEFINED);
  SET_CONSTANT_NUMBER(returnValue, OC_FORMAT_UNSUPPORTED);

  return returnValue;
}

static Local<Object> bind_OCMode() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_CLIENT);
  SET_CONSTANT_NUMBER(returnValue, OC_SERVER);
  SET_CONSTANT_NUMBER(returnValue, OC_CLIENT_SERVER);
  SET_CONSTANT_NUMBER(returnValue, OC_GATEWAY);

  return returnValue;
}

static Local<Object> bind_OCQualityOfService() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_LOW_QOS);
  SET_CONSTANT_NUMBER(returnValue, OC_MEDIUM_QOS);
  SET_CONSTANT_NUMBER(returnValue, OC_HIGH_QOS);
  SET_CONSTANT_NUMBER(returnValue, OC_NA_QOS);

  return returnValue;
}

static Local<Object> bind_OCResourceProperty() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_RES_PROP_NONE);
  SET_CONSTANT_NUMBER(returnValue, OC_DISCOVERABLE);
  SET_CONSTANT_NUMBER(returnValue, OC_OBSERVABLE);
  SET_CONSTANT_NUMBER(returnValue, OC_ACTIVE);
  SET_CONSTANT_NUMBER(returnValue, OC_SLOW);
#if defined(__WITH_DTLS__) || defined(__WITH_TLS__)
  SET_CONSTANT_NUMBER(returnValue, OC_SECURE);
  SET_CONSTANT_NUMBER(returnValue, OC_SECURE);
#endif
  SET_CONSTANT_NUMBER(returnValue, OC_EXPLICIT_DISCOVERABLE);
#ifdef WITH_MQ
#endif
#ifdef MQ_BROKER
#endif

  return returnValue;
}

static Local<Object> bind_OCTransportProtocolID() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_INVALID_ID);
  SET_CONSTANT_NUMBER(returnValue, OC_COAP_ID);

  return returnValue;
}

static Local<Object> bind_OCStackResult() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_STACK_OK);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_RESOURCE_CREATED);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_RESOURCE_DELETED);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_CONTINUE);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_RESOURCE_CHANGED);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_URI);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_QUERY);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_IP);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_PORT);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_CALLBACK);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_METHOD);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_PARAM);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_OBSERVE_PARAM);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_NO_MEMORY);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_COMM_ERROR);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_TIMEOUT);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_ADAPTER_NOT_ENABLED);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_NOTIMPL);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_NO_RESOURCE);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_RESOURCE_ERROR);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_SLOW_RESOURCE);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_DUPLICATE_REQUEST);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_NO_OBSERVERS);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_OBSERVER_NOT_FOUND);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_VIRTUAL_DO_NOT_HANDLE);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_OPTION);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_MALFORMED_RESPONSE);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_PERSISTENT_BUFFER_REQUIRED);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_REQUEST_HANDLE);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_DEVICE_INFO);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INVALID_JSON);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_UNAUTHORIZED_REQ);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_TOO_LARGE_REQ);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_PDM_IS_NOT_INITIALIZED);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_DUPLICATE_UUID);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INCONSISTENT_DB);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_AUTHENTICATION_FAILURE);
#ifdef WITH_PRESENCE
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_PRESENCE_STOPPED);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_PRESENCE_TIMEOUT);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_PRESENCE_DO_NOT_HANDLE);
#endif
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_FORBIDDEN_REQ);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_INTERNAL_SERVER_ERROR);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_ERROR);

  return returnValue;
}

static Local<Object> bind_OCObserveAction() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_OBSERVE_REGISTER);
  SET_CONSTANT_NUMBER(returnValue, OC_OBSERVE_DEREGISTER);
  SET_CONSTANT_NUMBER(returnValue, OC_OBSERVE_NO_OPTION);

  return returnValue;
}

static Local<Object> bind_OCEntityHandlerResult() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_EH_OK);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_ERROR);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_SLOW);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_RESOURCE_CREATED);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_RESOURCE_DELETED);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_VALID);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_CHANGED);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_CONTENT);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_BAD_REQ);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_UNAUTHORIZED_REQ);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_BAD_OPT);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_FORBIDDEN);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_RESOURCE_NOT_FOUND);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_METHOD_NOT_ALLOWED);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_NOT_ACCEPTABLE);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_TOO_LARGE);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_UNSUPPORTED_MEDIA_TYPE);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_INTERNAL_SERVER_ERROR);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_BAD_GATEWAY);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_SERVICE_UNAVAILABLE);
  SET_CONSTANT_NUMBER(returnValue, OC_EH_RETRANSMIT_TIMEOUT);

  return returnValue;
}

static Local<Object> bind_OCPayloadType() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, PAYLOAD_TYPE_INVALID);
  SET_CONSTANT_NUMBER(returnValue, PAYLOAD_TYPE_DISCOVERY);
  SET_CONSTANT_NUMBER(returnValue, PAYLOAD_TYPE_DEVICE);
  SET_CONSTANT_NUMBER(returnValue, PAYLOAD_TYPE_PLATFORM);
  SET_CONSTANT_NUMBER(returnValue, PAYLOAD_TYPE_REPRESENTATION);
  SET_CONSTANT_NUMBER(returnValue, PAYLOAD_TYPE_SECURITY);
  SET_CONSTANT_NUMBER(returnValue, PAYLOAD_TYPE_PRESENCE);

  return returnValue;
}

static Local<Object> bind_OCRepPayloadPropType() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OCREP_PROP_NULL);
  SET_CONSTANT_NUMBER(returnValue, OCREP_PROP_INT);
  SET_CONSTANT_NUMBER(returnValue, OCREP_PROP_DOUBLE);
  SET_CONSTANT_NUMBER(returnValue, OCREP_PROP_BOOL);
  SET_CONSTANT_NUMBER(returnValue, OCREP_PROP_STRING);
  SET_CONSTANT_NUMBER(returnValue, OCREP_PROP_BYTE_STRING);
  SET_CONSTANT_NUMBER(returnValue, OCREP_PROP_OBJECT);
  SET_CONSTANT_NUMBER(returnValue, OCREP_PROP_ARRAY);

  return returnValue;
}

static Local<Object> bind_OCEntityHandlerFlag() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_REQUEST_FLAG);
  SET_CONSTANT_NUMBER(returnValue, OC_OBSERVE_FLAG);

  return returnValue;
}

static Local<Object> bind_OCStackApplicationResult() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_STACK_DELETE_TRANSACTION);
  SET_CONSTANT_NUMBER(returnValue, OC_STACK_KEEP_TRANSACTION);

  return returnValue;
}

static Local<Object> bind_OCPresenceTrigger() {
  Local<Object> returnValue = Nan::New<Object>();

  SET_CONSTANT_NUMBER(returnValue, OC_PRESENCE_TRIGGER_CREATE);
  SET_CONSTANT_NUMBER(returnValue, OC_PRESENCE_TRIGGER_CHANGE);
  SET_CONSTANT_NUMBER(returnValue, OC_PRESENCE_TRIGGER_DELETE);

  return returnValue;
}

NAN_MODULE_INIT(InitEnums) {
  SET_ENUM(target, OCTransportAdapter);
  SET_ENUM(target, OCTransportFlags);
  SET_ENUM(target, OCConnectivityType);
  SET_ENUM(target, OCMethod);
  SET_ENUM(target, OCPayloadFormat);
  SET_ENUM(target, OCMode);
  SET_ENUM(target, OCQualityOfService);
  SET_ENUM(target, OCResourceProperty);
  SET_ENUM(target, OCTransportProtocolID);
  SET_ENUM(target, OCStackResult);
  SET_ENUM(target, OCObserveAction);
  SET_ENUM(target, OCEntityHandlerResult);
  SET_ENUM(target, OCPayloadType);
  SET_ENUM(target, OCRepPayloadPropType);
  SET_ENUM(target, OCEntityHandlerFlag);
  SET_ENUM(target, OCStackApplicationResult);
  SET_ENUM(target, OCPresenceTrigger);
}
