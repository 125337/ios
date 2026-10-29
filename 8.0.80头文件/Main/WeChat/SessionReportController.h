@interface SessionReportController : NSObject <SessionReportControllerProtocol>
{
    CContact * m_oChatContact; // +0x8
    unsigned int m_uiUnReadCount; // +0x10
    unsigned int m_uiReceiveCount; // +0x14
    unsigned int m_uiSendCount; // +0x18
    BOOL m_bShowUnreadTip; // +0x1c
    BOOL m_bClickUnreadTip; // +0x1d
    BOOL m_bDidScroll; // +0x1e
    unsigned long long m_enterSessionTimeMs; // +0x20
    unsigned long long m_leaveSessionTimeMs; // +0x28
    CMessageWrap * m_lastMsg; // +0x30
    NSMutableArray * m_msgInfos; // +0x38
    unsigned long long _fromScene; // +0x40
}
- (id)initWithChatContact:(id)arg1 unreadMsgCount:(unsigned int)arg2 lastMsg:(id)arg3;
- (void)dealloc;
- (void)onSessionWillDisplayMsg:(id)arg1;
- (void)onSessionAddMsg:(id)arg1;
- (void)onSessionDidScroll;
- (void)onShowUnreadTip;
- (void)onClickUnreadTip;
- (void)onLeaveSession;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)willTerminate:(id)arg1;
- (void)doReport:(BOOL)arg1;
- (void)realReport:(BOOL)arg1;
- (int)getEnterScene;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
