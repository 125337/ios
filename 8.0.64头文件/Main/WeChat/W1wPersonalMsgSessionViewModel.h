@interface W1wPersonalMsgSessionViewModel : NSObject <W1wPersonalMsgSessionMgrExt>
{
    BOOL _notifyEnable; // +0x8
    unsigned int _systemNotificationCount; // +0xc
    id <W1wPersonalMsgSessionViewModelDelegate> _delegate; // +0x10
    W1wPersonalMsgSessionStorage * _sessionStorage; // +0x18
}
- (id)initWithSessionStorage:(id)arg1;
- (void)dealloc;
- (id)W1wSystemSessionData;
- (unsigned long long)msgSessionCount;
- (id)msgSessionCellViewModelAtIndex:(long long)arg1;
- (void)deleteMsgSession:(id)arg1;
- (void)didSelectW1wMsgSessionAtIndex:(long long)arg1;
- (void)onW1wPersonalMsgSessionUpdatedForUsername:(id)arg1;
- (void)onW1wPersonalMsgNotifyEnableUpdatedForUsername:(id)arg1 enable:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (unsigned int)systemNotificationCount;
- (void)setSystemNotificationCount:(unsigned int)arg1;
- (BOOL)notifyEnable;
- (void)setNotifyEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
