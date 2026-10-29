@interface W1wPersonalMsgSessionViewModel : NSObject <W1wPersonalMsgSessionMgrExt>
{
    BOOL _notifyEnable; // +0x8
    unsigned int _systemNotificationCount; // +0xc
    id <W1wPersonalMsgSessionViewModelDelegate> _delegate; // +0x10
    id <W1wPersonalMsgSessionViewModelDelegate> _helloDelegate; // +0x18
    W1wPersonalMsgSessionStorage * _sessionStorage; // +0x20
    NSString * _pageId; // +0x28
    NSMutableDictionary * _sessionId2ViewModelDic; // +0x30
}
- (id)initWithSessionStorage:(id)arg1;
- (void)dealloc;
- (unsigned long long)msgSessionCount;
- (unsigned long long)msgHelloSessionCount;
- (id)msgHelloSessionCellViewModelAtIndex:(long long)arg1;
- (id)msgSessionCellViewModelAtIndex:(long long)arg1;
- (void)deleteMsgSession:(id)arg1;
- (void)didSelectW1wMsgSessionAtIndex:(long long)arg1;
- (void)didSelectW1wMsgHelloSessionAtIndex:(long long)arg1;
- (void)didSelectGreetMsgSession;
- (void)didClickSettingItem;
- (id)greetMsgSessionCellViewModel;
- (void)setPageId:(id)arg1;
- (void)onW1wPersonalMsgSessionUpdatedForUsername:(id)arg1;
- (void)onW1wPersonalMsgNotifyEnableUpdatedForUsername:(id)arg1 enable:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)helloDelegate;
- (void)setHelloDelegate:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (unsigned int)systemNotificationCount;
- (void)setSystemNotificationCount:(unsigned int)arg1;
- (BOOL)notifyEnable;
- (void)setNotifyEnable:(BOOL)arg1;
- (id)pageId;
- (id)sessionId2ViewModelDic;
- (void)setSessionId2ViewModelDic:(id)arg1;
- (void).cxx_destruct;
@end
