/** @file
 *  @brief MAVLink comm protocol generated from payload_controller.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_PAYLOAD_CONTROLLER_H
#define MAVLINK_PAYLOAD_CONTROLLER_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_PAYLOAD_CONTROLLER.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_PAYLOAD_CONTROLLER_XML_HASH 1953131961225035006

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{9500, 85, 252, 252, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_PAYLOAD_CONTROLLER

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 1
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 1
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_payload_controller_api_message.h"

// base include



#if MAVLINK_PAYLOAD_CONTROLLER_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_PAYLOAD_CONTROLLER_API_MESSAGE}
# define MAVLINK_MESSAGE_NAMES {{ "PAYLOAD_CONTROLLER_API_MESSAGE", 9500 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_PAYLOAD_CONTROLLER_H
