#include "libRTP.h"
#include "libRTPSessions.h"
#include "libRTPMemory.h"

LIBRTP_API int initial_RTP_library(void)
{
#ifdef _WIN32
    WSADATA wsa_data;
    int result = WSAStartup(MAKEWORD(2, 2), &wsa_data);
    if(0 != result)
    {
        // to do: handle error
    }
#else
#endif // _WIN32
    return LIBRTP_OK;
}

LIBRTP_API int uninitial_RTP_library(void)
{
#ifdef _WIN32
    int result = WSACleanup();
    if(0 != result)
    {
        // to do: handle error
    }
#else
#endif // _WIN32
    return 0;
}

LIBRTP_API RTP_session* get_new_RTP_session(void)
{
    return libRTP_calloc(sizeof(RTP_session));
}

LIBRTP_API void close_RTP_session(RTP_session* session)
{
    libRTP_free(session);
}

LIBRTP_API int set_RTP_session_local_IPv4(RTP_session* session, char* IPv4)
{
    RTP_session_context* p_RTP_session_context = session;
    p_RTP_session_context->local_IPv4 = libRTP_strdup(IPv4);
    CHECK_MEMORY_ALLOCATE_RESULT_AND_RETURN(p_RTP_session_context->local_IPv4);
}

LIBRTP_API int set_RTP_session_local_port(RTP_session* session, uint16_t port)
{
    RTP_session_context* p_RTP_session_context = session;
    p_RTP_session_context->local_port = port;
    return LIBRTP_OK;
}

LIBRTP_API int set_RTP_session_remote_IPv4(RTP_session* session, char* IPv4)
{
    RTP_session_context* p_RTP_session_context = session;
    p_RTP_session_context->remote_IPv4 = libRTP_strdup(IPv4);
    CHECK_MEMORY_ALLOCATE_RESULT_AND_RETURN(p_RTP_session_context->remote_IPv4);
}

LIBRTP_API int set_RTP_session_remote_port(RTP_session* session, uint16_t port)
{
    RTP_session_context* p_RTP_session_context = session;
    p_RTP_session_context->remote_port = port;
    return LIBRTP_OK;
}

LIBRTP_API int set_RTP_session_IP_protocol(RTP_session* session, uint32_t protocol)
{
    RTP_session_context* p_RTP_session_context = session;
    p_RTP_session_context->IP_protocol = protocol;
    return LIBRTP_OK;
}
