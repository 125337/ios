@interface GameLifeMsgChatInfoViewController : GameCenterNativeVc <WCActionSheetDelegate, GameLifeBlackHalfViewControllerDelegate>
{
    BOOL _isInBlackList; // +0x70
    BOOL _isAssociateWithWxGame; // +0x71
    id <GameLifeMsgChatInfoViewControllerDelegate> _delegate; // +0x78
    CBaseContact * _myRoleContact; // +0x80
    CBaseContact * _sessionContact; // +0x88
    CBaseContact * _realChatContact; // +0x90
    MMTableViewInfo * _tableViewMgr; // +0x98
}
- (void)viewDidLoad;
- (void)initView;
- (void)reloadTableViewData;
- (void)checkBlackListStatus:(unsigned int)arg1 callback:(id /* block */)arg2;
- (void)makeContactInfo:(id)arg1 CellInfo:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)openContactInfo;
- (void)onClearAllMessage:(id)arg1;
- (void)clearAllMsg;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onExpose:(id)arg1;
- (void)addBlackList:(id)arg1;
- (void)showDealBlackDialog:(id)arg1 accoutType:(unsigned int)arg2 isBlack:(BOOL)arg3 isAssociate:(BOOL)arg4;
- (void)onCancelClick:(BOOL)arg1 isAssociateWithWxGame:(BOOL)arg2;
- (void)onConfirmClick:(BOOL)arg1 isAssociateWithWxGame:(BOOL)arg2;
- (id)getSessionId;
- (void)reportChattingInfoUIExposure;
- (void)reportClickAvatar;
- (void)reportClearMsg:(int)arg1;
- (void)reportExpose;
- (void)reportClickBlackListDialog;
- (void)reportBlackListDialogExposure:(BOOL)arg1;
- (void)reportBlackListDialogUserAction:(BOOL)arg1 isAssociateWithWxGame:(BOOL)arg2 isCancel:(BOOL)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)myRoleContact;
- (void)setMyRoleContact:(id)arg1;
- (id)sessionContact;
- (void)setSessionContact:(id)arg1;
- (id)realChatContact;
- (void)setRealChatContact:(id)arg1;
- (id)tableViewMgr;
- (void)setTableViewMgr:(id)arg1;
- (void).cxx_destruct;
@end
