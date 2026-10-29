@interface EcsGMsgIdMgr : MMUserService <MMServiceProtocol>
- (id)genGMsgIdWithMessage:(id)arg1;
- (id)genGMsgIdWithSns:(id)arg1 createTime:(unsigned long long)arg2;
- (void)updateLastGMsgIdOfForwardMessage:(id)arg1 withOldMsg:(id)arg2;
- (id)getHashString:(id)arg1 msgId:(long long)arg2;
@end
