@interface W1wPersonalMsgSessionCellViewModel : NSObject <W1wUserContactMgrExt>
{
    BOOL _openNotify; // +0x8
    BOOL _notifyEnable; // +0x9
    W1wPersonalMsgSessionInfo * _sessionInfo; // +0x10
    MMBaseSessionCellData * _cellData; // +0x18
    W1wPersonalMsgSessionCell * _cell; // +0x20
    id /* block */ _onSessionUpdated; // +0x28
    W1wUserContact * _userContact; // +0x30
}
- (id)initWithSessionInfo:(id)arg1 contact:(id)arg2 notifyEnable:(BOOL)arg3;
- (void)dealloc;
- (id)cellData;
- (BOOL)useRoundAvatar;
- (void)W1wUserContactUpdatedForUsername:(id)arg1 contact:(id)arg2;
- (void)updateCellView;
- (void)updateCellData;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (void)setCellData:(id)arg1;
- (id)cell;
- (void)setCell:(id)arg1;
- (id /* block */)onSessionUpdated;
- (void)setOnSessionUpdated:(id /* block */)arg1;
- (BOOL)openNotify;
- (void)setOpenNotify:(BOOL)arg1;
- (id)userContact;
- (void)setUserContact:(id)arg1;
- (BOOL)notifyEnable;
- (void)setNotifyEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
