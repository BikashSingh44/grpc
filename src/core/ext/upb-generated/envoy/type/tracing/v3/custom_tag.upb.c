/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/tracing/v3/custom_tag.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/type/tracing/v3/custom_tag.upb.h"
#include "envoy/type/metadata/v3/metadata.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_type_tracing_v3_CustomTag_submsgs[4] = {
  &envoy_type_tracing_v3_CustomTag_Environment_msginit,
  &envoy_type_tracing_v3_CustomTag_Header_msginit,
  &envoy_type_tracing_v3_CustomTag_Literal_msginit,
  &envoy_type_tracing_v3_CustomTag_Metadata_msginit,
};

static const upb_msglayout_field envoy_type_tracing_v3_CustomTag__fields[5] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 2, 11, 1},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, 1},
  {4, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 1, 11, 1},
  {5, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 3, 11, 1},
};

const upb_msglayout envoy_type_tracing_v3_CustomTag_msginit = {
  &envoy_type_tracing_v3_CustomTag_submsgs[0],
  &envoy_type_tracing_v3_CustomTag__fields[0],
  UPB_SIZE(16, 32), 5, false,
};

static const upb_msglayout_field envoy_type_tracing_v3_CustomTag_Literal__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
};

const upb_msglayout envoy_type_tracing_v3_CustomTag_Literal_msginit = {
  NULL,
  &envoy_type_tracing_v3_CustomTag_Literal__fields[0],
  UPB_SIZE(8, 16), 1, false,
};

static const upb_msglayout_field envoy_type_tracing_v3_CustomTag_Environment__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 9, 1},
};

const upb_msglayout envoy_type_tracing_v3_CustomTag_Environment_msginit = {
  NULL,
  &envoy_type_tracing_v3_CustomTag_Environment__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

static const upb_msglayout_field envoy_type_tracing_v3_CustomTag_Header__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 9, 1},
};

const upb_msglayout envoy_type_tracing_v3_CustomTag_Header_msginit = {
  NULL,
  &envoy_type_tracing_v3_CustomTag_Header__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

static const upb_msglayout *const envoy_type_tracing_v3_CustomTag_Metadata_submsgs[2] = {
  &envoy_type_metadata_v3_MetadataKey_msginit,
  &envoy_type_metadata_v3_MetadataKind_msginit,
};

static const upb_msglayout_field envoy_type_tracing_v3_CustomTag_Metadata__fields[3] = {
  {1, UPB_SIZE(8, 16), 0, 1, 11, 1},
  {2, UPB_SIZE(12, 24), 0, 0, 11, 1},
  {3, UPB_SIZE(0, 0), 0, 0, 9, 1},
};

const upb_msglayout envoy_type_tracing_v3_CustomTag_Metadata_msginit = {
  &envoy_type_tracing_v3_CustomTag_Metadata_submsgs[0],
  &envoy_type_tracing_v3_CustomTag_Metadata__fields[0],
  UPB_SIZE(16, 32), 3, false,
};

#include "upb/port_undef.inc"

