// Tencent is pleased to support the open source community by making sluaunreal available.

// Copyright (C) 2018 THL A29 Limited, a Tencent company. All rights reserved.
// Licensed under the BSD 3-Clause License (the "License"); 
// you may not use this file except in compliance with the License. You may obtain a copy of the License at

// https://opensource.org/licenses/BSD-3-Clause

// Unless required by applicable law or agreed to in writing, 
// software distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions and limitations under the License.

#include "LuaProtobufWrap.h"
#include "luaprotobuf/lpb.h"

namespace slua {

    namespace LuaProtobuf {

        void init(lua_State *L) {

			luaL_requiref(L, "pb", luaopen_pb, 0);
			luaL_requiref(L, "pb.slice", luaopen_pb_slice, 0);
			luaL_requiref(L, "pb.buffer", luaopen_pb_buffer, 0);
			luaL_requiref(L, "pb.conv", luaopen_pb_conv, 0);

        }
    }
}
