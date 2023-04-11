#pragma once
// MESSAGE PAYLOAD_CONTROLLER_RESPONSE_MESSAGE PACKING

#define MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE 9501


typedef struct __mavlink_payload_controller_response_message_t {
 char message[248]; /*<  Json message between payload controller and QGC.*/
} mavlink_payload_controller_response_message_t;

#define MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN 248
#define MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_MIN_LEN 248
#define MAVLINK_MSG_ID_9501_LEN 248
#define MAVLINK_MSG_ID_9501_MIN_LEN 248

#define MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_CRC 147
#define MAVLINK_MSG_ID_9501_CRC 147

#define MAVLINK_MSG_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_FIELD_MESSAGE_LEN 248

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE { \
    9501, \
    "PAYLOAD_CONTROLLER_RESPONSE_MESSAGE", \
    1, \
    {  { "message", NULL, MAVLINK_TYPE_CHAR, 248, 0, offsetof(mavlink_payload_controller_response_message_t, message) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE { \
    "PAYLOAD_CONTROLLER_RESPONSE_MESSAGE", \
    1, \
    {  { "message", NULL, MAVLINK_TYPE_CHAR, 248, 0, offsetof(mavlink_payload_controller_response_message_t, message) }, \
         } \
}
#endif

/**
 * @brief Pack a payload_controller_response_message message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param message  Json message between payload controller and QGC.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_controller_response_message_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN];

    _mav_put_char_array(buf, 0, message, 248);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN);
#else
    mavlink_payload_controller_response_message_t packet;

    mav_array_memcpy(packet.message, message, sizeof(char)*248);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_CRC);
}

/**
 * @brief Pack a payload_controller_response_message message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param message  Json message between payload controller and QGC.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_controller_response_message_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN];

    _mav_put_char_array(buf, 0, message, 248);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN);
#else
    mavlink_payload_controller_response_message_t packet;

    mav_array_memcpy(packet.message, message, sizeof(char)*248);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_CRC);
}

/**
 * @brief Encode a payload_controller_response_message struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param payload_controller_response_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_controller_response_message_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_payload_controller_response_message_t* payload_controller_response_message)
{
    return mavlink_msg_payload_controller_response_message_pack(system_id, component_id, msg, payload_controller_response_message->message);
}

/**
 * @brief Encode a payload_controller_response_message struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload_controller_response_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_controller_response_message_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_payload_controller_response_message_t* payload_controller_response_message)
{
    return mavlink_msg_payload_controller_response_message_pack_chan(system_id, component_id, chan, msg, payload_controller_response_message->message);
}

/**
 * @brief Send a payload_controller_response_message message
 * @param chan MAVLink channel to send the message
 *
 * @param message  Json message between payload controller and QGC.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_payload_controller_response_message_send(mavlink_channel_t chan, const char *message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN];

    _mav_put_char_array(buf, 0, message, 248);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE, buf, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_CRC);
#else
    mavlink_payload_controller_response_message_t packet;

    mav_array_memcpy(packet.message, message, sizeof(char)*248);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE, (const char *)&packet, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_CRC);
#endif
}

/**
 * @brief Send a payload_controller_response_message message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_payload_controller_response_message_send_struct(mavlink_channel_t chan, const mavlink_payload_controller_response_message_t* payload_controller_response_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_payload_controller_response_message_send(chan, payload_controller_response_message->message);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE, (const char *)payload_controller_response_message, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_CRC);
#endif
}

#if MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_payload_controller_response_message_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, message, 248);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE, buf, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_CRC);
#else
    mavlink_payload_controller_response_message_t *packet = (mavlink_payload_controller_response_message_t *)msgbuf;

    mav_array_memcpy(packet->message, message, sizeof(char)*248);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE, (const char *)packet, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_CRC);
#endif
}
#endif

#endif

// MESSAGE PAYLOAD_CONTROLLER_RESPONSE_MESSAGE UNPACKING


/**
 * @brief Get field message from payload_controller_response_message message
 *
 * @return  Json message between payload controller and QGC.
 */
static inline uint16_t mavlink_msg_payload_controller_response_message_get_message(const mavlink_message_t* msg, char *message)
{
    return _MAV_RETURN_char_array(msg, message, 248,  0);
}

/**
 * @brief Decode a payload_controller_response_message message into a struct
 *
 * @param msg The message to decode
 * @param payload_controller_response_message C-struct to decode the message contents into
 */
static inline void mavlink_msg_payload_controller_response_message_decode(const mavlink_message_t* msg, mavlink_payload_controller_response_message_t* payload_controller_response_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_payload_controller_response_message_get_message(msg, payload_controller_response_message->message);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN? msg->len : MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN;
        memset(payload_controller_response_message, 0, MAVLINK_MSG_ID_PAYLOAD_CONTROLLER_RESPONSE_MESSAGE_LEN);
    memcpy(payload_controller_response_message, _MAV_PAYLOAD(msg), len);
#endif
}
