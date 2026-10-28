@interface BrandFansMsgSessionCellViewModel : NSObject <BrandFansContactMgrExt>
{
    BOOL _notifyEnable; // +0x8
    BrandFansMsgSessionInfo * _sessionInfo; // +0x10
    id /* block */ _onSessionUpdated; // +0x18
    BrandFansContact * _fansContact; // +0x20
}
- (id)initWithSessionInfo:(id)arg1 contact:(id)arg2 notifyEnable:(BOOL)arg3;
- (void)dealloc;
- (id)cellData;
- (BOOL)useRoundAvatar;
- (void)brandFansContactUpdatedForOpenID:(id)arg1 contact:(id)arg2;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id /* block */)onSessionUpdated;
- (void)setOnSessionUpdated:(id /* block */)arg1;
- (id)fansContact;
- (void)setFansContact:(id)arg1;
- (BOOL)notifyEnable;
- (void)setNotifyEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
