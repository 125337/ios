@interface CMessageCustomizeRecoverMgr : MMUserService <MMServiceProtocol>
- (BOOL)checkNeedMessageCustomizeRecover;
- (id)getNeedMessageCustomizeRecoverSessions;
- (BOOL)handleMessageCustomizeRecoverWithHandler:(id /* block */)arg1;
- (BOOL)handleMessageCustomizeRecoverWithUserName:(id)arg1;
- (BOOL)handleAbnormalMsgsWithUserName:(id)arg1 firstAbnormalCreateTimeMsg:(id)arg2 maxBeforeAbnormalMsgCreateTime:(unsigned int)arg3;
- (id)handleAbnormalMsgsOneBatchWithUserName:(id)arg1 abnormalCreateTime:(unsigned int)arg2 minCreateTime:(unsigned int *)arg3;
- (unsigned int)getMaxBeforeAbnormalMsgCreateTimeWithUserName:(id)arg1 firstAbnormalCreateTimeMsg:(id)arg2;
@end
