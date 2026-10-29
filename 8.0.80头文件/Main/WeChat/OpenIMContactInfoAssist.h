@interface OpenIMContactInfoAssist : CBaseContactInfoAssist <MMCPLabelDelegate, IAutoSetRemarkExt, SendVerifyMsgViewControllerDelegate, ILinkEventExt, IHDHeadImageViewExt, IOpenImResourceMgrExt, IOpenImContactMgrExt, SetPermissionsViewControllerDelegate, WCFinderContactFinderAssistDelegate, OpenIMAddContactRemindDelegate, ContactVerifyPreCheckBusinessLogicDelegate, MMTableViewInfoDelegate, SocialInfomationViewControllerDelegate, ContactSettingViewControllerDelegate>
{
    BOOL m_bFirstBecomeFriend; // +0x50
    MMTableViewInfo * m_tableViewInfo; // +0x58
    CContact * m_chatContact; // +0x60
    unsigned int m_uiVerify; // +0x68
    BOOL m_hasRequestUpdateMoments; // +0x6c
    NSString * m_cpKeyForNickname; // +0x70
    NSString * m_cpKeyForChatRoomDisplayName; // +0x78
    NSString * m_cpKeyForSignature; // +0x80
    NSString * m_cpKeyForOpenIMDesc; // +0x88
    BOOL m_isNickNameUnsafe; // +0x90
    BOOL m_isChatRoomDisplayNameUnsafe; // +0x91
    BOOL m_isSignatureUnsafe; // +0x92
    BOOL m_isOpenIMDescUnsafe; // +0x93
    WCFinderContactFinderAssist * _finderAssist; // +0x98
    SendVerifyMsgLogicController * m_sendVerifylogicVC; // +0xa0
    ContactRelatedGroupLogic * m_relatedGroupLogic; // +0xa8
    NSString * m_InviteUserName; // +0xb0
    NSString * m_InviterTraceTemplate; // +0xb8
    MMURLHandler * m_urlHandler; // +0xc0
    BOOL m_hasUpdatedFinderEntranceCell; // +0xc8
    UILabel * m_blackListTipsLabel; // +0xd0
    UIView * m_profileHeadBackgroundView; // +0xd8
    BOOL m_hasDisplayedInviterCell; // +0xe0
    UIView * m_blackOrExposepView; // +0xe8
    ContactSettingViewController * m_settingViewController; // +0xf0
    SocialInfomationViewController * m_socialInfoController; // +0xf8
    COpenIMContactVerifyPreCheckBusinessLogic * m_openIMVerifyPreCheckBusinessLogic; // +0x100
    BOOL _m_bDisableAllOperation; // +0x108
    BOOL _isOpenIMContactVerifyPreChecking; // +0x109
    id <ContactInfoAssistDelegate> _delegate; // +0x110
    UIView * _bottomActionView; // +0x118
    MMTableViewInfo * _actionTableViewInfo; // +0x120
}
- (id)initWithContact:(id)arg1 andChatContact:(id)arg2 andVerify:(unsigned int)arg3 delegate:(id)arg4;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)onHDHeadImageWillAppear;
- (void)onHDHeadImageDidDisappear;
- (void)loadLocalContactData;
- (void)resetStrengCotnactOpenIMInfo:(id)arg1;
- (void)dealloc;
- (BOOL)isFromStrangeScene;
- (id)GetTableView;
- (void)initTableView;
- (BOOL)isNeedShowRightBtn;
- (BOOL)isShowBlackAction;
- (BOOL)isNeedVerify;
- (id)getInfoDisplayName;
- (BOOL)isFromQRCode;
- (id)getWechatUserName;
- (BOOL)IsShowUserName;
- (BOOL)isNeedHideUserName;
- (id)getContactInfoViewController;
- (BOOL)shouldRemoveContactPopPreviousPage;
- (void)updateFooterView;
- (void)onSocialInfoHandle;
- (id)genSocialInfomationViewController;
- (void)tryCall:(id)arg1;
- (void)tryHandleLink:(id)arg1;
- (void)opEditRemarkName;
- (id)getEditRemarkNameInViewController;
- (id)makeHeadSmallLabel:(id)arg1 cpKey:(id)arg2 inUnsafe:(BOOL)arg3 withPrefixTitle:(id)arg4 maxWidth:(double)arg5;
- (id)makeHeadSmallTitleLabel:(id)arg1;
- (void)makeHeadCell:(id)arg1 CellInfo:(id)arg2;
- (id)getTagNameList;
- (id)getProfileIntroView;
- (double)getMaxProfileIntroViewTitleWidthWithMaxLabelWidth:(double)arg1;
- (id)getHelloMsgPanel;
- (void)genAccountDeletedViewInProfileIntroView:(id)arg1;
- (BOOL)canShowVOIPBtn;
- (id)getPermissionIconsView;
- (id)getPermissionView;
- (id)getProfileHeadView;
- (void)addInfoAndPermissionAndAlbumSection;
- (void)addAlbumCellAtSection:(id)arg1;
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
- (void)initData;
- (void)sendMsgBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)addAccountDeletedMsgActionView;
- (void)addMsgActionView;
- (id)getActionSection;
- (BOOL)checkIsHadOpenIMContactVerify;
- (id)makeOpenIMInfoSection;
- (BOOL)shouldShowFinderEntranceCell;
- (void)insertFinderEntranceCellFollowWecomCorpCell:(id)arg1 toCellArray:(id)arg2;
- (id)createOpenIMInfoCellAndFindWecomCorpCell:(id *)arg1;
- (id)finderEntranceCellInfo;
- (BOOL)checkISNeedShowIMSource;
- (void)reloadTableView;
- (void)opEditSetPermission;
- (id)getContactSetPermissionsViewController;
- (void)makeFriendInformationCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeSourceCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (void)makePermissionCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (void)makeInviterCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (id)getInviterValue;
- (id)getInviterRichTextView;
- (void)makeEmptyFriendInfoCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (id)getEmptyFriendTitle;
- (id)genLeftTitleLabel:(id)arg1;
- (double)getLeftTitleLableMaxWidth;
- (id)createMomentsCellInfo;
- (void)updateMomentsCellView:(id)arg1;
- (void)requestUpdateMomentsIfNeeded;
- (void)cancelUpdateMomentsIfNeeded;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onOpenVoipActionSheet:(id)arg1;
- (void)onSayHelloToContact;
- (void)initExposeBtn;
- (void)initBlackAndExposeContactBtn;
- (void)initFooterBtnArea;
- (void)initBlackListTipsLabel;
- (double)footerViewHeight;
- (void)layoutFooterView;
- (void)initFooterView;
- (void)showRightButton;
- (void)removeFromBlackList;
- (void)addToBlackList:(id)arg1;
- (void)doAddToBlackList;
- (void)onExposeByRecommand;
- (void)onOpenVoipView;
- (void)onOpenVoiceVoipView;
- (void)opBlackList:(id)arg1;
- (void)onAction;
- (void)doDeleteContact;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onNewMessage:(id)arg1;
- (void)onStartChat:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onOpenIMNormalClicked:(id)arg1;
- (void)onMomentsCellClicked:(id)arg1;
- (void)onExpiredVerifyRequestTryAddContact;
- (void)finderAssistDidUpdate;
- (id)currentViewController;
- (id)getViewController;
- (void)doAddContact;
- (void)onVerifyContact:(id)arg1 opcode:(unsigned int)arg2;
- (void)onClickAddToContacts;
- (void)reportAddToContactsForThird;
- (void)showOpenIMAddContactRemind;
- (void)onAddToContacts;
- (void)startAddContactWithSendVerifyMsgViewController;
- (void)onContactVerifyPreCheckBusinessSuccess:(id)arg1 opcode:(unsigned int)arg2;
- (void)onContactVerifyPreCheckBusinessFail:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (id)getOpenIMVerifyPreCheckBusinessLogic;
- (void)updateShouldRemoveAllSubviews:(BOOL *)arg1;
- (void)onRelpyContact:(id)arg1;
- (void)onVerifyContactOk;
- (void)onOpenIMVerifyContactOk;
- (void)handleAddedContact;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactSendReplyOk:(id)arg1;
- (void)onClickSendVerifyMsg;
- (id)getDicReportPageParams;
- (void)clickSocialInfomationRemarkItem;
- (void)onSocialInfomationViewWillPop;
- (void)onDataChangeCloseSetPermissionsPageSheet;
- (id)init;
- (void)updateCPState;
- (void)onRestoreCPLabel:(id)arg1;
- (BOOL)isChatRoom;
- (void)reportContactInfoViewEnter;
- (void)reportContactInfoItemClickWithCellInfo:(id)arg1;
- (void)reportContactInfoComeWithReportScene:(int)arg1;
- (void)reportContactInfoItemClickedWithScene:(long long)arg1;
- (void)reportContactInfoItemWithScene:(long long)arg1 actionResultCode:(long long)arg2;
- (long long)getSubSource;
- (void)reportOpenimChatroomMember:(id)arg1 viewId:(id)arg2;
- (int)getOperatorUserRole;
- (int)getProfileUserRole;
- (void)reportFriendAssistActionIfNeeded:(unsigned long long)arg1;
- (void)getChatRoomMemberContact;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onOpenImGetContactOpenUrlDone:(id)arg1 openUrl:(id)arg2 errorTip:(id)arg3 scene:(unsigned int)arg4;
- (void)onDisableContactVerifyByOpenIMFriReqAcceptedInWxWork:(id)arg1;
- (void)onOpenImGetContactDone:(id)arg1 contact:(id)arg2;
- (void)onClickAddContactMakeSure:(id)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)isInPageSheet;
- (double)getTableViewTopInset;
- (void)viewDidLayoutSubviews;
- (void)updateActionTableView;
- (BOOL)m_bDisableAllOperation;
- (void)setM_bDisableAllOperation:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bottomActionView;
- (void)setBottomActionView:(id)arg1;
- (id)actionTableViewInfo;
- (void)setActionTableViewInfo:(id)arg1;
- (BOOL)isOpenIMContactVerifyPreChecking;
- (void)setIsOpenIMContactVerifyPreChecking:(BOOL)arg1;
- (void).cxx_destruct;
@end
