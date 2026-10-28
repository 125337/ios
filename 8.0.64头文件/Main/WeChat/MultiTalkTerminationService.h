@interface MultiTalkTerminationService : MMUserService <MMServiceProtocol>
+ (BOOL)shouldSupportExceptionMessage;
+ (void)supplementLocalExceptionMessage:(id)arg1 exceptionType:(unsigned long long)arg2 hasRemain:(BOOL)arg3;
+ (void)setMMKVMultiTalkStatus:(unsigned long long)arg1 status:(int)arg2 roomname:(id)arg3;
+ (void)cleanMMKVMultiTalkStatus:(BOOL)arg1;
+ (int)getIfMMKVMultiTalkStatusMatch:(unsigned long long)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
@end
