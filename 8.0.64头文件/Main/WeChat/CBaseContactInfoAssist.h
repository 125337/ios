@interface CBaseContactInfoAssist : MMObject <contactVerifyLogicDelegate, IContactMgrExt, WCActionSheetDelegate, PBMessageObserverDelegate>
{
    UIView * m_headerView; // +0x8
    UIView * m_footerView; // +0x10
    MMHeadImageView * m_headView; // +0x18
    MMHDHeadImageView * m_HDHeadView; // +0x20
    MMLoadingView * m_loadingView; // +0x28
    CContact * m_contact; // +0x30
    UILabel * m_displayNameLabel; // +0x38
    UILabel * m_userNameLabel; // +0x40
    id <ContactInfoAssistDelegate> m_delegate; // +0x48
    unsigned int _m_uiFromScene; // +0x50
    NSString * _reportSessionId; // +0x58
}
- (id)init;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear;
- (void)updateNickNameLabel;
- (void)updateFooterView;
- (void)profileDestory;
- (void)opShareMyFriend;
- (void)onShareMyFriendDone:(id)arg1;
- (void)updateInstallStateAndReloadTableView;
- (id)getUserNameCol;
- (void)initUserNameLabel;
- (void)initNickNameLabel;
- (void)reloadTableView;
- (void)reloadNavigationBarItem;
- (void)reloadView;
- (BOOL)isInMyContactList;
- (void)doAddContact;
- (void)modifyVerifyContactWrap:(id)arg1;
- (void)onAddToContacts;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)handleAddedContact;
- (void)contactAddContactOk:(id)arg1;
- (void)stopLoading;
- (id)GetTableView;
- (id)GetMainScrollView;
- (id)getFooterView;
- (void)dealloc;
- (double)getSignatureWidth;
- (void)makeContactIntroCell:(id)arg1 text:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onContactUpdated;
- (void)baseViewWillBePoped;
- (id)navigationBarBackgroundColor;
- (id)navigationBarItemColor;
- (BOOL)shouldForceHideNavigationBarSepLine;
- (BOOL)shouldFobidPopWhenDeleteContact;
- (BOOL)shouldRemoveContactPopPreviousPage;
- (void)reportContactInfoViewEnter;
- (BOOL)isSeachActive;
- (BOOL)isInteractivePopEnabled;
- (BOOL)isChatRoom;
- (double)getTableViewTopInset;
- (long long)transferFromSceneToSourceScene;
- (id)reportSessionId;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_headView;
- (void)setM_headView:(id)arg1;
- (void)setReportSessionId:(id)arg1;
- (unsigned int)m_uiFromScene;
- (void)setM_uiFromScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
