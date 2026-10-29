@interface WWKFContactInfoAssist : CBaseContactInfoAssist <MMCPLabelDelegate, IAutoSetRemarkExt, IHDHeadImageViewExt, IOpenImResourceMgrExt, IOpenImContactMgrExt, IWWKFContactMgrExt, WCFinderContactFinderAssistDelegate, SetPermissionsViewControllerDelegate, WWKFContactSettingViewControllerDelegate>
{
    BOOL m_bFirstBecomeFriend; // +0x50
    MMTableViewInfo * m_tableViewInfo; // +0x58
    CContact * m_chatContact; // +0x60
    NSString * m_cpKeyForNickname; // +0x68
    NSString * m_cpKeyForChatRoomDisplayName; // +0x70
    NSString * m_cpKeyForSignature; // +0x78
    NSString * m_cpKeyForOpenIMDesc; // +0x80
    BOOL m_isNickNameUnsafe; // +0x88
    BOOL m_isChatRoomDisplayNameUnsafe; // +0x89
    BOOL m_isSignatureUnsafe; // +0x8a
    BOOL m_isOpenIMDescUnsafe; // +0x8b
    ContactRelatedGroupLogic * m_relatedGroupLogic; // +0x90
    NSString * m_InviteUserName; // +0x98
    MMURLHandler * m_urlHandler; // +0xa0
    WCFinderContactFinderAssist * m_finderAssist; // +0xa8
    id <ContactInfoAssistDelegate> _delegate; // +0xb0
}
- (id)initWithContact:(id)arg1 andChatContact:(id)arg2 delegate:(id)arg3;
- (void)onHDHeadImageWillAppear;
- (void)onHDHeadImageDidDisappear;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)onWWKFContactUpdated:(id)arg1;
- (id)GetTableView;
- (id)currentViewController;
- (id)navigationBarBackgroundColor;
- (void)initData;
- (void)addOpenIMKefuInfoSection:(id)arg1;
- (void)addOpenIMKefuFinderSection:(id)arg1;
- (void)addOpenIMKefuIntroSection;
- (id)getTagNameList;
- (void)initTableView;
- (void)updateNavigationBarRightButton;
- (void)showContactSetting;
- (void)onKFContactShareToFriend;
- (void)tryHandleLink:(id)arg1;
- (void)tryCall:(id)arg1;
- (void)introCellClick;
- (void)finderAssistDidUpdate;
- (void)onFinderAssistClickFinder;
- (id)makeHeadSmallLabel:(id)arg1 cpKey:(id)arg2 inUnsafe:(BOOL)arg3 withPrefixTitle:(id)arg4 maxWidth:(double)arg5;
- (id)makeHeadSmallTitleLabel:(id)arg1;
- (void)makeHeadCell:(id)arg1 CellInfo:(id)arg2;
- (id)getProfileIntroView;
- (double)getMaxProfileIntroViewTitleWidthWithMaxLabelWidth:(double)arg1;
- (id)getPermissionIconsView;
- (id)getPermissionView;
- (id)getProfileHeadView;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 actionSel:(SEL)arg3 height:(double)arg4 userInfo:(id)arg5;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 actionSel:(SEL)arg3;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 userInfo:(id)arg3;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 height:(double)arg3 userInfo:(id)arg4;
- (void)makeLeftValueCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeOpenIMNormalCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeOpenIMPhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2 phoneList:(id)arg3 autoresizingMask:(unsigned long long)arg4;
- (void)makeDisclosureIndicatorCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeOpenIMInfoSection;
- (void)reloadTableView;
- (void)initFooterView;
- (void)onOpenIMNormalClicked:(id)arg1;
- (void)reportOnOpenIMNormalClicked:(id)arg1;
- (void)onShareToFriend;
- (void)onShareMyFriendDone:(id)arg1;
- (void)updateCPState;
- (void)onRestoreCPLabel:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

