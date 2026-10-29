@interface WCFinderLiveMsgSessionMgr : MMUserService <IMsgExt, WCFinderSwitchExt, WCFinderFinderInitExt, MMServiceProtocol>
{
    WCFinderLiveMsgSessionInfoStorage * _qaSessionInfoStorage; // +0x8
}
+ (id)defaultFinderContactForUsername:(id)arg1;
- (id)init;
- (void)onServiceMemoryWarning;
- (void)genLiveMsgSessionIdWithTaskId:(id)arg1 sourceType:(unsigned int)arg2 toUserName:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)getLiveMsgSessionInfoListByAnchorOrAssistantWithTaskId:(id)arg1;
- (void)getLiveMsgSessionInfoByAudienceWithTaskId:(id)arg1 sourceType:(unsigned int)arg2 completionBlock:(id /* block */)arg3;
- (id)getLocalMsgSessionInfoWithSessionId:(id)arg1;
- (id)getLocalLiveMsgSessionInfosWithTaskId:(id)arg1;
- (unsigned int)getUnreadCountForSessionId:(id)arg1;
- (void)clearUnreadCountForSessionId:(id)arg1;
- (void)deleteSessionWithSessionId:(id)arg1;
- (BOOL)isUserNeedProcess:(id)arg1;
- (id)addOrUpdateSessionWithSessionId:(id)arg1 wrapMsg:(id)arg2;
- (id)addLocalMsgWithSessionId:(id)arg1 liveAppMsg:(id)arg2 msgStatus:(unsigned int)arg3 localClientMsgId:(id)arg4;
- (void)finderLiveIdentityChange;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnDelMsg:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)_batchAddMsgListForSession:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onFinderInitSuccessful;
- (void)onFinderCancellationAccount;
- (void)onFinderCreateAccount;
- (void)onFinderUserprepare;
- (unsigned long long)getTotalUnreadCount;
- (id)qaSessionInfoStorage;
- (void)setQaSessionInfoStorage:(id)arg1;
- (void).cxx_destruct;
@end

