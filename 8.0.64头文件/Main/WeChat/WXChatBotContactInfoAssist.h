@interface WXChatBotContactInfoAssist : CBaseContactInfoAssist <IHDHeadImageViewExt, MMTableViewInfoDelegate, MMCPLabelDelegate, ContactSettingViewControllerDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x50
    NSString * m_cpKeyForNickname; // +0x58
    BOOL m_isNickNameUnsafe; // +0x60
    UIView * m_footerView; // +0x68
    ContactSettingViewController * m_settingViewController; // +0x70
}
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)initTableView;
- (id)GetTableView;
- (id)getFooterView;
- (void)loadFooterView;
- (id)getProfileIntroView;
- (void)adjustmentProfileIntroViewTail:(double)arg1 andProfileIntroView:(id)arg2 andradiusCornerView:(id)arg3;
- (id)getProfileHeadView;
- (void)showHDHeadViewImage;
- (void)reloadNavigationBarItem;
- (void)reloadTableView;
- (id)getSection;
- (void)addMsgActionView;
- (void)sendMsgBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)addWXChatBotSection;
- (void)addOpenIMSection;
- (void)makeOpenIMNormalCell:(id)arg1 CellInfo:(id)arg2;
- (void)onOpenIMNormalClicked:(id)arg1;
- (BOOL)shouldRemoveContactPopPreviousPage;
- (void)onAction;
- (void)onNewMessage:(id)arg1;
- (void)showChatBotExtentInfo:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onHDHeadImageWillAppear;
- (void)onHDHeadImageDidDisappear;
- (void)updateCPState;
- (void)onRestoreCPLabel:(id)arg1;
- (void).cxx_destruct;
@end
