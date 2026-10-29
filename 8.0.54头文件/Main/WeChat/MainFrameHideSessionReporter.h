@interface MainFrameHideSessionReporter : MMUserService <IMsgExt, IMMNewSessionMgrExt, MMServiceProtocol>
{
    NSString * _enterChatName; // +0x8
    long long _enterScene; // +0x10
    unsigned long long _enterChatTime; // +0x18
    long long _enterChatType; // +0x20
    long long _exitHiddenStatus; // +0x28
    NSMutableSet * _visibleSessionSet; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onBatchContactExpose:(id)arg1;
- (void)enterChatName:(id)arg1 scene:(long long)arg2;
- (void)enterSession:(id)arg1 scene:(long long)arg2;
- (void)exitSession:(id)arg1;
- (void)onSessionShow:(id)arg1 showUpScene:(long long)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onHideSessionWithUserName:(id)arg1;
- (void)logSessionExpose:(long long)arg1 chatname:(id)arg2 sessionType:(long long)arg3;
- (long long)getReportSessionTypeFor:(id)arg1;
- (id)enterChatName;
- (void)setEnterChatName:(id)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (unsigned long long)enterChatTime;
- (void)setEnterChatTime:(unsigned long long)arg1;
- (long long)enterChatType;
- (void)setEnterChatType:(long long)arg1;
- (long long)exitHiddenStatus;
- (void)setExitHiddenStatus:(long long)arg1;
- (id)visibleSessionSet;
- (void)setVisibleSessionSet:(id)arg1;
- (void).cxx_destruct;
@end

