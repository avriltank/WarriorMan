#ifndef WM_RUNTIME_H
#define WM_RUNTIME_H

#include "base.h"
#include "wm_socket.h"

php_stream *wmRuntime_socket_create(const char *proto, size_t protolen, const char *resourcename, size_t resourcenamelen, //
	const char *persistent_id, int options, int flags, struct timeval *timeout, php_stream_context *context STREAMS_DC
	);
#endif /* WM_RUNTIME_H */
