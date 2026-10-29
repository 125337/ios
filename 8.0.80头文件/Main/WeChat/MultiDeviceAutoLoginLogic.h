@interface MultiDeviceAutoLoginLogic : NSObject
+ (void)switchOplogWithOnlineInfo:(id)arg1 opcode:(unsigned int)arg2 setting:(unsigned int)arg3;
+ (void)switchOplogWithOnlineInfo:(id)arg1 opcode:(unsigned int)arg2 setting:(unsigned int)arg3 complete:(id /* block */)arg4;
+ (void)switchOplogWithOnlineInfo:(id)arg1 deviceUUID:(id)arg2 clientVersion:(unsigned int)arg3 opcode:(unsigned int)arg4 setting:(unsigned int)arg5 complete:(id /* block */)arg6;
- (void)switchOplogWithOnlineInfo:(id)arg1 opcode:(unsigned int)arg2 setting:(unsigned int)arg3;
@end
