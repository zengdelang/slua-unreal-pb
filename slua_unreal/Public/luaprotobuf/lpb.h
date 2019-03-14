#ifndef lpb_h
#define lpb_h

#include "lua/lua.h"

#ifndef LUALIB_API
# define LUALIB_API extern
#endif

namespace NS_SLUA {

	LUALIB_API int luaopen_pb_conv(lua_State *L);
	LUALIB_API int luaopen_pb_buffer(lua_State *L);
	LUALIB_API int luaopen_pb_slice(lua_State *L);
	LUALIB_API int luaopen_pb(lua_State *L);

} // end NS_SLUA

#endif
