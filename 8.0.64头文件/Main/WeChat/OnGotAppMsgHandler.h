@interface OnGotAppMsgHandler : MMObject <ShareMessageConfirmLogicHelperDelegate, IPreEnterWechatLogicExt>
{
    NSString * m_nsAppid; // +0x8
    AppCommunicateData * m_appData; // +0x10
    ShareMessageConfirmLogicHelper * _confirmHelper; // +0x18
    id <OnGotAppMsgHandleDelegate> m_delegate; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)onGotAppMsg:(id)arg1 withData:(id)arg2;
- (void)cancelGotAppMsg;
- (void)cancelAllHandle;
- (void)clearAllHandle;
- (void)createConfirmView;
- (void)jumpToMessageContentViewAndConfirm;
- (void)removeConfirmView;
- (void)onPreEnterWechatDone;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnSendMessageCancel:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
