#pragma once
#ifndef _LIBRTP_ERROR_DEFINE_H_
#define _LIBRTP_ERROR_DEFINE_H_

#define LIBRTP_OK                       0
#define LIBRTP_UNDEFINED_ERROR          -1
#define LIBRTP_MEMORY_ERROR             -2
#define LIBRTP_BAD_PARAMETER            -3
#define LIBRTP_SESSION_CONFIG_ERROR     -4
#define LIBRTP_SESSION_ALREADY_STARTED  -5
#define LIBRTP_SESSION_HANDLE_DEPLETED  -6
#define LIBRTP_INVALID_SESSION_HANDLE   -7
#define LIBRTP_SOCKET_ERROR             -8
#define LIBRTP_THREAD_CREATE_ERROR      -9

typedef size_t RTP_session_handle;

#endif // !_LIBRTP_ERROR_DEFINE_H_


