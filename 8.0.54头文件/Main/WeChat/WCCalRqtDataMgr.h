@interface WCCalRqtDataMgr : MMUserService <MMServiceProtocol>
- (unsigned int)calRqtData:(const void *)arg1 len:(unsigned int)arg2 cmd:(int)arg3 uin:(unsigned long long)arg4;
- (id)calJsApiSpeRqtData:(const void *)arg1 len:(unsigned int)arg2 type:(int)arg3;
- (id)calFullSpeRqtData:(const void *)arg1 len:(unsigned long long)arg2 type:(int)arg3;
- (BOOL)p_needCalRqtData:(int)arg1 uin:(unsigned long long)arg2;
@end

