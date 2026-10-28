@interface StrongNotificationExclusiveMsgLogic : MMObject <StrongNotificationViewControllerDelegate, IMsgExt>
{
    StrongNotificationViewController * m_strongNotificationViewController; // +0x8
    id <StrongNotificationExclusiveMsgLogicDelegate> m_delegate; // +0x10
}
- (void)dealloc;
- (id)init;
- (void)checkMsgQueue;
- (BOOL)isWindowShowing;
- (void)onFromBackgroundToForeground;
- (void)p_internalCheckMsgQueue;
- (void)processMsg;
- (id)p_getExclusiveMsgQueue;
- (id)p_getStrongNotificationViewController;
- (void)clearAllStrongNotificationItemAndMessageHiddenWindow;
- (void)closeStrongNotificationWithItemWithForcePushId:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
