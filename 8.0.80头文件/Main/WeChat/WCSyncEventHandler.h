@interface WCSyncEventHandler : ProtobufEventHandler
- (void)onReveiceWCMessage:(id)arg1;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
- (BOOL)hitNormalMessageForbidNotifyExp;
- (BOOL)ABtestControlNormalMessageNeedInsert:(id)arg1;
- (void)reportForbidNotifyInfo:(id)arg1;
- (unsigned long long)getFeedIdBySnsAction:(id)arg1;
@end
