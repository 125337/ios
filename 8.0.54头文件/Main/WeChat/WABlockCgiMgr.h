@interface WABlockCgiMgr : MMUserService <MMServiceProtocol>
- (void)executeBlockCgiRequestCmd:(id)arg1;
- (BOOL)isCgi:(unsigned long long)arg1 blockedForAppid:(id)arg2 username:(id)arg3 inScene:(unsigned long long)arg4;
@end

