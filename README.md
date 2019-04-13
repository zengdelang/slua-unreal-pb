# slua-unreal-pb

sluaunreal
https://github.com/Tencent/sluaunreal

lua-protobuf
https://github.com/starwing/lua-protobuf

集成lua-protobuf到sluaunreal中

1 复制slua_unreal到sluaunreal的插件目录中

2 在LuaState的init函数中的LuaSocket::init(L)代码前添加代码LuaProtobuf::init(L)

3 移除了lua-protobuf中的pb.io模块
