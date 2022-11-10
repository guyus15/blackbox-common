/**
 * @file packet_ids.h
 * @brief A container for each packet ID used by the panel.
 * @author G. Chamberlain-Webber
 */

#ifndef PACKET_IDS_H
#define PACKET_IDS_H

namespace Packets
{
    /**
     * @brief A reference for each packet ID used by the panel.
     */
    enum class PacketID
    {
        INVALID                         = 0,     // 0x00 - SPECIAL
        STATUS_ENQUIRY                  = 1,     // 0x01 - MPIM
        STATUS_MESSAGE                  = 2,     // 0x02 - MPIM
        VDR_SENTENCE                    = 3,     // 0x03 - Voyage Data Recorder (VDR)
        POINT_STATUS_UPDATE_EXTENDED    = 4,     // 0x04 - Similar to POINT_STATUS_UPDATE but using different data.
        REMOTE_NETWORK_FAULT_REQUEST    = 5,     // 0x05 - About TLI not to TLI.
        REMOTE_NETWORK_FAULT_RESPONSE   = 6,     // 0x06 - About TLI not to TLI.

        // Network card specific.
        NET_CONFIG_REQUEST              = 7,     // 0x07 - TLI800
        NET_CONFIG_RESPONSE             = 8,     // 0x08 - TLI800
        NET_FAULT_REQUEST               = 9,     // 0x09 - TLI800
        NET_FAULT_RESPONSE              = 10,    // 0x0a - TLI800
        NET_VERSION_REQUEST             = 11,    // 0x0b - TLI800
        NET_VERSION_RESPONSE            = 12,    // 0x0c - TLI800

        // Filnet network card specific.
        FILNET_EMERGENCY                = 14,    // 0x0e - Filnet
        FILNET_CONFIG_RESPONSE          = 15,    // 0x0f - Filnet
        FILNET_CONFIG_REQUEST           = 16,    // 0x10 - Filnet
        FILNET_FAULT_REQUEST            = 17,    // 0x11 - Filnet
        FILNET_FAULT_RESPONSE           = 18,    // 0x12 - Filnet
        FILNET_STATUS_LOG_REQUEST       = 19,    // 0x13 - Filnet
        FILNET_STATUS_LOG_RESPONSE      = 20,    // 0x14 - Filnet
        FILNET_ALARM_IN_PANEL_REPORT    = 21,    // 0x15 - Filnet

        PANEL_DETAILS_REQUEST           = 26,    // 0x1a
        PANEL_DETAILS_RESPONSE          = 27,    // 0x1b

        SET_MPIM_MODE                   = 32,    // 0x20 - MPIM
        BEEP                            = 33,    // 0x21 - MPIM
        XBUS_WRITE                      = 34,    // 0x22 - MPIM
        XBUS_QUICK_PULSE_SETUP          = 35,    // 0x23 - MPIM
        XBUS_FEW_POINTS_CHANGED         = 37,    // 0x25 - MPIM
        WRITE_LCD                       = 38,    // 0x26 - MPIM
        PRINT                           = 39,    // 0x27 - MPIM
        SERIAL_DATA                     = 40,    // 0x28 - MPIM
        UIF_KEY_PACKET                  = 41,    // 0x29 - MPIM
        LCD_TEST                        = 42,    // 0x2a - MPIM
        GMPIM_DISPLAY_LOGO              = 43,    // 0x2b - GMPIM
        LOAD_LCD_CODEPAGE               = 44,    // 0x2c - MPIM
        GMPIM_DISPLAY_TIME              = 45,    // 0x2d - GMPIM

        EMERGENCY_MODE_STATUSES         = 46,    // 0x2e - Local IO (PLX800 firmware) on PFI800 main board.

        MPIM_BAUD_RATE_CHANGE           = 65,    // 0x41 - MPIM
        XBUS_OUTPUT_ON                  = 66,    // 0x42 - MPIM
        XBUS_OUTPUT_OFF                 = 67,    // 0x43 - MPIM
        XBUS_OUTPUT_PULSE_1             = 68,    // 0x44 - MPIM
        XBUS_OUTPUT_PULSE_2             = 69,    // 0x45 - MPIM
        XBUS_SET_PULSE_PATTERN          = 70,    // 0x46 - MPIM
        XBUS_INPUT_CONFIG_LOW           = 71,    // 0x47 - MPIM
        XBUS_INPUT_CONFIG_HIGH          = 72,    // 0x48 - MPIM
        XBUS_INPUT_REPLY_LOW            = 73,    // 0x49 - MPIM
        XBUS_INPUT_REPLY_HIGH           = 74,    // 0x4a - MPIM

        SOFT_RESET_REQ                  = 98,    // 0x62 - MPIM
        SOFT_RESET_ACK                  = 99,    // 0x63 - MPIM

        REMOTE_STRING_BY_PROXY          = 116,   // 0x74 0 MX Speak

        TEST_SELF_CHECK_RESULTS         = 117,   // 0x75
        MPIM_REQUESTS_DISPLAY_REFRESH   = 118,   // 0x76 - MPIM
        MPIM_INFO_REQUEST               = 119,   // 0x77 - MPIM
        MPIM_INFO_REPLY                 = 120,   // 0x78 - MPIM

        MPIM_VERSION_INFO_REQUEST       = 122,   // 0x79 - MPIM
        MPIM_VERSION_INFO_REPLY         = 123,   // 0x7a - MPIM
        LCD_BACKLIGHT_REQUEST           = 124,   // 0x7b - MPIM

        MPIM_HEART_BEAT                 = 126,   // 0x7e - MPIM (Defunct)
        ILLEGAL_COMMAND                 = 127,   // 0x7f - MPIM

        // These packet IDs are fixed and their values may be known
        // to external developers do NOT change them.
        NET_SUPERVISOR_MODE             = 128,   // 0x80 - MX Speak
        NET_SUPERVISED_PANEL_MODE       = 129,   // 0x81 - MX Speak
        SYSTEM_REMOTE_USER_INTERFACE_PRESENT   = 130,   // 0x82
        EVENT_ACTION_ZONE_STATE_REQUEST = 131,   // 0x83 - MX Speak
        EVENT_ACTION_ZONE_INFORMATION_TRANSFER = 132,   // 0x84 - MX Speak
        POINT_INFO_BITMAP_REQUEST       = 133,   // 0x85 - MX Speak
        POINT_INFO_BITMAP_REPLY         = 134,   // 0x86 - MX Speak
        NETWORK_POINT_COMMAND           = 135,   // 0x87 - MX Speak
        NETWORK_POINT_COMMAND_REPLY     = 136,   // 0x88 - MX Speak
        EVENT                           = 137,   // 0x89 - MX Speak

        LOG_EVENT_DATA                  = 139,   // 0x8b - MX Speak
        LOG_EVENT_COUNTER_DATA          = 140,   // 0x8c
        LOG_EVENT_ACCEPTANCE            = 141,   // 0x8d
        LOG_REGISTER_CLIENT             = 142,   // 0x8e
        LOG_DEREGISTER_CLIENT           = 143,   // 0x8f
        LOG_PAUSE_EVENT_DATA            = 144,   // 0x90
        LOG_UNPAUSE_EVENT_DATA          = 145,   // 0x91
        LOG_ACKNOWLEDGE                 = 146,   // 0x92 - MX Speak
        TIMEDATE_SET_REQUEST            = 147,   // 0x93 - MX Speak
        POINT_INFO_REQUEST              = 148,   // 0x94 - MX Speak
        POINT_INFO_REPLY                = 149,   // 0x95 - MX Speak
        POINT_CLNT_ACKNOWLEDGE          = 150,   // 0x96 - MX Speak
        REMOTE_STRING_REQUEST           = 151,   // 0x97 - MX Speak
        REMOTE_STRING_REPLY             = 152,   // 0x98 - MX Speak
        REMOTE_STRINGS_CHANGED          = 153,   // 0x99
        EXPANDED_STRING                 = 154,   // 0x9a
        PANEL_INFO_TRANSFER_CONFIG      = 155,   // 0x9b
        POINT_MANAGER_REPLY             = 156,   // 0x9c - used by Zetfas Bridge
        REPORT_REQUEST_REPLY            = 157,   // 0x9d
        REPORT_REQUEST                  = 158,   // 0x9e
        ALOOP_INFO_REQUEST              = 159,   // 0x9f
        ALOOP_INFO_REPLY                = 160,   // 0xa0
        EVENT_ACTION_REGISTER_CLIENT    = 161,   // 0xa1
        EVENT_ACTION_DEREGISTER_CLIENT  = 162,   // 0xa2
        EVENT_ACTION_REGISTER_ACKNOWLEDGE       = 163,   // 0xa3
        EVENT_ACTION_CHANGE_CLIENT_REGISTRATION = 164,   // 0xa4
        EVENT_ACTION_GROUP_DATA         = 165,   // 0xa5
        EVENT_ACTION_COUNTER_REQUEST    = 166,   // 0xa6
        EVENT_ACTION_COUNTER_REPLY      = 167,   // 0xa7
        COMMS_REMOTE_NODE_STATE_CHANGE  = 168,   // 0xa8
        REQUEST_PRINTER_DETAILS         = 169,   // 0xa9
        PRINTER_DETAILS_REQUESTED       = 170,   // 0xaa
        ISOLATE_STATUS_UPDATE           = 171,   // 0xab
        POINT_TEST                      = 172,   // 0xac
        LOOP_VERSION_INFO_REQUEST       = 173,   // 0xad
        LOOP_VERSION_INFO_REPLY         = 174,   // 0xae
        LOOP_POLL_INFO_REQUEST          = 175,   // 0xaf
        LOOP_POLL_INFO_REPLY            = 176,   // 0xb0
        RBUS_UNIT_VERSION_INFO_REQUEST  = 177,   // 0xb1
        RBUS_UNIT_VERSION_INFO_REPLY    = 178,   // 0xb2
        LOOP_SHUTDOWN_RESTART           = 179,   // 0xb3
        LOOP_SHUTDOWN_RESTART_REPLY     = 180,   // 0xb4
        LAMP_TEST_REQUEST               = 181,   // 0xb5
        RESTART_REQUEST                 = 182,   // 0xb6
        POINT_MANAGER_BASE              = 183,   // 0xb7
        STANDARD_STATUS_REPLY           = 184,   // 0xb8
        SYSTEM_STATUS_VALUES_REQUEST    = 185,   // 0xb9
        SYSTEM_STATUS_VALUES_REPLY      = 186,   // 0xba
        SYSTEM_SECTORID_FROM_ZONE_REQUEST = 187,   // 0xbb
        SYSTEM_SECTORID_FROM_ZONE_REPLY = 188,   // 0xbc
        FMWR_VERSION_INFO_REQUEST       = 189,   // 0xbd
        FMWR_VERSION_INFO_REPLY         = 190,   // 0xbe
        FAULT_INFO                      = 191,   // 0xbf
        BATTERY_INFO_REQUEST            = 192,   // 0xc0
        BATTERY_INFO_REPLY              = 193,   // 0xc1
        NAME_STRING_REQUEST             = 194,   // 0xc2
        NAME_STRING_REPLY               = 195,   // 0xc3
        OLD_POINT_STATE_EDGE            = 196,   // 0xc4
        NEW_POINT_STATE_EDGE            = 197,   // 0xc5
        POINT_STATUS_UPDATE             = 198,   // 0xc6 - used by Zetfas Bridge
        POINT_CONFIGURATION_UPDATE      = 199,   // 0xc7

        // These packet IDs are fixed and their values may be known
        // to external developers do NOT change them.
        REMOTE_STATE_INFORMATION_REQUEST = 200,  // 0xc8 - MX Speak
        REMOTE_STATE_INFORMATION_REPLY   = 201,  // 0xc9 - MX Speak
        EVENT_ACTION_ZONE_STATE_PER_ZONE_REQUEST = 202,   // 0xca - used by Zetfas Bridge
        EVENT_ACTION_ZONE_STATE_PER_ZONE_REPLY   = 203,   // 0xcb - used by Zetfas Bridge
        CONFIGURATION                   = 204,   // 0xcc
        REMOTE_VERSION_INFO_REQUEST     = 205,   // 0xcd
        REMOTE_VERSION_INFO_REPLY       = 206,   // 0xce
        EVENT_ACTION_GROUP_INFO_REQUEST = 207,   // 0xcf
        EVENT_ACTION_GROUP_INFO_REPLY   = 208,   // 0xd0
        REMOTE_TEST_EQUIPMENT_REQUEST   = 209,   // 0xd1
        REMOTE_TEST_EQUIPMENT_REPLY     = 210,   // 0xd2
        REMOTE_TEST_EQUIPMENT_TO_PANEL_POINT_UPDATE       = 211,   // 0xd3
        REMOTE_TEST_EQUIPMENT_TO_PANEL_POINT_UPDATE_REPLY = 212,   // 0xd4
        POINT_MULTIPOINT_REQUEST        = 213,   // 0xd5
        POINT_MULTIPOINT_REPLY          = 214,   // 0xd6
        POINT_MP_ONE_SHOT_REQUEST       = 215,   // 0xd7
        FIRE_RESET_SYNC_REQ_RECEIVED    = 216,   // 0xd8
        SPARE_ID_E                      = 217,   // 0xd9
        RBUS_MULTICAST                  = 218,   // 0xda
        PULSE_PATTERN_RESET             = 219,   // 0xdb
        POINT_CONFIG_REQUEST            = 220,   // 0xdc
        POINT_CONFIG_REPLY              = 221,   // 0xdd
        ZONE_TEXT_UPDATE                = 222,   // 0xde
        SECTOR_TEXT_UPDATE              = 223,   // 0xdf
        INFO_TEXT_UPDATE                = 224,   // 0xe0
        PANEL_TEXT_UPDATE               = 225,   // 0xe1
        PASSWORD_TEXT_UPDATE            = 226,   // 0xe2
        WRAPPED_MINERVA_PACKET          = 227,   // 0xe3 - MX Speak
        COMMISSIONING_AND_SERVICE_REQUEST = 228,   // 0xe4
        COMMISSIONING_AND_SERVICE_REPLY = 229,   // 0xe5
        BROADCAST_LOCAL_COUNTS          = 230,   // 0xe6 - used by Zetfas Bridge
        EVENT_ACTION_GROUP_DELAY        = 231,   // 0xe7
        REMOTE_MANAGER_BASE             = 232,   // 0xe8
        SYSTEM_MANAGER_PACKET_BASE      = 233,   // 0xe9
        REMOTE_NETWORK_SYNCHRONISATION  = 234,   // 0xea
        DATA_TO_REMOTE_TEST_EQUIPMENT   = 235,   // 0xeb
        DEBUG_MANAGER_PACKET_BASE       = 236,   // 0xec
        RESYNCH_REQUIRED                = 237,   // 0xed
        RESYNCH_COMPLETE                = 238,   // 0xee
        CONFIGURED_LOOP_DEVICE_TYPES_REQUEST = 239,   // 0xef
        CONFIGURED_LOOP_DEVICE_TYPES_REPLY   = 240,   // 0xf0
        DEVICE_REPLACEMENT_REQUEST      = 241,   // 0xf1
        DEVICE_REPLACEMENT_REPLY        = 242,   // 0xf2
        FORCE_PRINTER_PAUSE_UNPAUSE     = 243,   // 0xf3

        // These packets are internal,not to NGUI.
        NGUI_FROM_DATA_SERVER_BASE      = 244,   // 0xf4
        NGUI_CLIENT_SERVICE_SUPPORT     = 245,   // 0xf5
        LOG_MANAGER_BASE                = 246,   // 0xf6

        // These packets are internal,not to NGUI.
        NGUI_TO_DATA_SERVER_BASE        = 247,   // 0xf7
        DIGITAL_MANAGER_BASE            = 248,   // 0xf8

        // Special ID's,some used for Testing purposes...
        LAST_PACKET_ID                  = 0xFFFF
    };
}

#endif