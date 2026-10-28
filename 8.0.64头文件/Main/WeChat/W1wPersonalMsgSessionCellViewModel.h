@interface W1wPersonalMsgSessionCellViewModel : NSObject <W1wUserContactMgrExt>
{
    BOOL _notifyEnable; // +0x8
    W1wPersonalMsgSessionInfo * _sessionInfo; // +0x10
    id /* block */ _onSessionUpdated; // +0x18
    W1wUserContact * _userContact; // +0x20
}
- (id)initWithSessionInfo:(id)arg1 contact:(id)arg2 notifyEnable:(BOOL)arg3;
- (void)dealloc;
- (id)cellData;
- (BOOL)useRoundAvatar;
- (void)W1wUserContactUpdatedForUsername:(id)arg1 contact:(id)arg2;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id /* block */)onSessionUpdated;
- (void)setOnSessionUpdated:(id /* block */)arg1;
- (id)userContact;
- (void)setUserContact:(id)arg1;
- (BOOL)notifyEnable;
- (void)setNotifyEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
