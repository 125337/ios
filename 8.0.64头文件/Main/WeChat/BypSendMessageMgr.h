@interface BypSendMessageMgr : NSObject <IMsgExt>
{
    id <BypSendMessageMgrDelegate> _delegate; // +0x8
    NSMutableArray * _sendMsgQueue; // +0x10
    CMessageWrap * _curSendMsg; // +0x18
    WCCgiBlockHelper * _curCgiBlockHelper; // +0x20
}
+ (int)bizTypeForMsgWrap:(id)arg1;
- (id)init;
- (BOOL)IsMsgInSendQueue:(id)arg1;
- (void)StartSendMsg:(id)arg1;
- (void)StopSendMsg:(id)arg1;
- (void)StopSendMsgByChatName:(id)arg1;
- (void)CheckSendQueue;
- (BOOL)createSendMsgEvent:(id)arg1;
- (void)stopCurSendMsg;
- (void)clearCurSendMsg;
- (void)onSendSuccessedWithSvrId:(long long)arg1;
- (void)onSendFailed;
- (void)modMsgAfterSendFailedWithMsgWrap:(id)arg1;
- (BOOL)shouldModContentAfterSendWithMsgWrap:(id)arg1;
- (id)createImagePackWithMsg:(id)arg1;
- (id)createTextPackWithMsg:(id)arg1;
- (id)createVideoPackWithMsg:(id)arg1;
- (id)createAppmsgPackWithMsg:(id)arg1;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sendMsgQueue;
- (void)setSendMsgQueue:(id)arg1;
- (id)curSendMsg;
- (void)setCurSendMsg:(id)arg1;
- (id)curCgiBlockHelper;
- (void)setCurCgiBlockHelper:(id)arg1;
- (void).cxx_destruct;
@end
