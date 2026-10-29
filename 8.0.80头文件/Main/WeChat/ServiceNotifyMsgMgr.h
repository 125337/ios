@interface ServiceNotifyMsgMgr : MMUserService <IMsgExt, IFunctionMsgExt, MMServiceProtocol>
{
    BOOL _isServerNotifyBoxExposed; // +0x8
    NSMutableDictionary * _dicClientReqInfo; // +0x10
    NotifyMsgDB * _notifyDB; // +0x18
}
- (void)onServiceInit;
- (void)onMainFrameExposeMsg:(id)arg1 rowIndex:(unsigned long long)arg2 unreadCount:(unsigned int)arg3;
- (void)onMainFrameMsgClick:(id)arg1 rowIndex:(unsigned long long)arg2 unreadCount:(unsigned int)arg3;
- (void)onMainFrameMsgClickForNewRowIndex:(id)arg1 rowIndex:(unsigned long long)arg2 unreadCount:(unsigned int)arg3;
- (void)onSessionExposeViewModels:(id)arg1;
- (void)onSessionEndExposeMsgs;
- (void)makeExposedWithMsgs:(id)arg1;
- (void)requestNewMsgWithCustomBuff:(id)arg1;
- (void)modifyFollowNotifyWithMsgWrap:(id)arg1 blockNotify:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)modAcceptTeamupMsg:(id)arg1 liveId:(unsigned long long)arg2 objectId:(unsigned long long)arg3 blockNotify:(BOOL)arg4 finderUsername:(id)arg5 successBlock:(id /* block */)arg6;
- (void)modAcceptFansGroupLiveMsg:(id)arg1 liveId:(unsigned long long)arg2 objectId:(unsigned long long)arg3 blockNotify:(BOOL)arg4 finderUsername:(id)arg5 successBlock:(id /* block */)arg6;
- (void)modCustomNotifyMsg:(id)arg1 liveId:(unsigned long long)arg2 objectId:(unsigned long long)arg3 accept:(BOOL)arg4 finderUsername:(id)arg5 noticeType:(unsigned int)arg6 completion:(id /* block */)arg7;
- (BOOL)canShowNotifyMsg:(id)arg1;
- (void)updateXmlInfoWithMsg:(id)arg1 notify:(BOOL)arg2;
- (void)markLiveEndForNotifyMsgWrap:(id)arg1;
- (void)refreshLivingStatusForNotifyMsgWrap:(id)arg1;
- (BOOL)isInTemplateMsgSeesion;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onFunctionMgrShowMsgs:(id)arg1 bussinessId:(unsigned long long)arg2 businessInfo:(id)arg3;
- (void)replaceUnReadLiveEndWithMsgID:(id)arg1 arrNewTipsID:(id)arg2;
- (id)getReportInfoWithExtInfos:(id)arg1 msgSvrID:(long long)arg2;
- (void)onFunctionMsgRequest:(id)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(id)arg3;
- (void)onFunctionMgrWillShowMsg:(id)arg1 bussinessId:(unsigned long long)arg2 canShow:(id)arg3;
- (void)onFunctionMgrFetchMsgFailWithBussinessId:(unsigned long long)arg1 functionMsgId:(id)arg2;
- (void)reportServerNotifyBoxOprationWithOpType:(unsigned int)arg1 message:(id)arg2 rowIndex:(unsigned long long)arg3 firstExpose:(BOOL)arg4 unreadCount:(unsigned int)arg5;
- (id)dicClientReqInfo;
- (void)setDicClientReqInfo:(id)arg1;
- (id)notifyDB;
- (void)setNotifyDB:(id)arg1;
- (BOOL)isServerNotifyBoxExposed;
- (void)setIsServerNotifyBoxExposed:(BOOL)arg1;
- (void).cxx_destruct;
@end
