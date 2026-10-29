@interface CBTAsstContactInfoAssist : CBaseContactInfoAssist <MMTableViewInfoDelegate, MMCPLabelDelegate, ContactSettingViewControllerDelegate>
{
    BOOL _isNickNameUnsafe; // +0x50
    MMTableViewInfo * _tableViewInfo; // +0x58
    NSString * _cpKeyForNickname; // +0x60
    ContactSettingViewController * _settingViewController; // +0x68
}
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)initTableView;
- (id)GetTableView;
- (void)reloadTableView;
- (id)getProfileHeadView;
- (id)getProfileIntroView;
- (void)adjustmentProfileIntroViewTail:(double)arg1 andProfileIntroView:(id)arg2 andradiusCornerView:(id)arg3;
- (void)onNewMessage:(id)arg1;
- (void)showHDHeadViewImage;
- (id)getSection;
- (void)addMsgActionView;
- (void)sendMsgBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)reloadNavigationBarItem;
- (BOOL)shouldRemoveContactPopPreviousPage;
- (void)onAction;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateCPState;
- (void)onRestoreCPLabel:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)cpKeyForNickname;
- (void)setCpKeyForNickname:(id)arg1;
- (BOOL)isNickNameUnsafe;
- (void)setIsNickNameUnsafe:(BOOL)arg1;
- (id)settingViewController;
- (void)setSettingViewController:(id)arg1;
- (void).cxx_destruct;
@end
