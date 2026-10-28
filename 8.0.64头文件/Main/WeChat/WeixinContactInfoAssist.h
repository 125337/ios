@interface WeixinContactInfoAssist : CBaseContactInfoAssist <MMCPLabelDelegate, IAutoSetRemarkExt, SendVerifyMsgViewControllerDelegate, ILinkEventExt, IHDHeadImageViewExt, MMTableViewInfoDelegate, IOpenImContactMgrExt, ContactSettingViewControllerDelegate, SetPermissionsViewControllerDelegate, TextStateProfileCardContentViewDelegate, WCFinderContactFinderAssistDelegate, ContactVerifyPreCheckBusinessLogicDelegate, SocialInfomationViewControllerDelegate, CardImageBrowseViewControllerDelegate, RedesignHelloMsgsPanelViewDelegate, SendVerifyMsgBusinessCardImageDelegate, WCFacadeExt>
{
    BOOL m_bFirstBecomeFriend; // +0x50
    MMTableViewInfo * m_tableViewInfo; // +0x58
    BOOL m_hasRequestUpdateAlbum; // +0x60
    NSString * m_location; // +0x68
    CContact * m_chatContact; // +0x70
    unsigned int m_uiVerify; // +0x78
    long long m_curDownloadEntrance; // +0x80
    CMessageWrap * m_sourceMsg; // +0x88
    NSString * m_cpKeyForNickname; // +0x90
    NSString * m_cpKeyForChatRoomDisplayName; // +0x98
    NSString * m_cpKeyForSignature; // +0xa0
    NSString * m_introDisplayName; // +0xa8
    BOOL m_isNickNameUnsafe; // +0xb0
    BOOL m_isChatRoomDisplayNameUnsafe; // +0xb1
    BOOL m_isSignatureUnsafe; // +0xb2
    WCFinderContactFinderAssist * _finderAssist; // +0xb8
    SendVerifyMsgLogicController * m_sendVerifylogicVC; // +0xc0
    ContactRelatedGroupLogic * m_relatedGroupLogic; // +0xc8
    NSString * m_InviteUserName; // +0xd0
    NSString * m_InviterTraceTemplate; // +0xd8
    UIButton * m_remarkButton; // +0xe0
    UIButton * m_snsPrivacyButton; // +0xe8
    UILabel * m_blackListTipsLabel; // +0xf0
    UILabel * m_quitRoomTipsLabel; // +0xf8
    UILabel * m_shareCardAddErrorTipsLabel; // +0x100
    unsigned int m_entranceAlbumThumbnailCnt; // +0x108
    BOOL m_hasUpdatedFinderEntranceCell; // +0x10c
    BOOL m_hasDisplayedInviterCell; // +0x10d
    BOOL m_hasReportRelpyButtonExposure; // +0x10e
    CContactVerifyPreCheckBusinessLogic * m_verifyPreCheckBusinessLogic; // +0x110
    SocialInfomationViewController * m_socialInfoController; // +0x118
    ContactSettingViewController * m_settingViewController; // +0x120
    BOOL _m_bDisableAllOperation; // +0x128
    BOOL _m_downloadingImg; // +0x129
    BOOL _m_isDownloadFail; // +0x12a
    id <ContactInfoAssistDelegate> _delegate; // +0x130
    id <WeixinContactInfoAssistDelegate> _weixinContactAssistDelegate; // +0x138
    NSDictionary * _extraSourceInfo; // +0x140
    WCMomentsJumpData * _snsJumpData; // +0x148
    UIStackView * _footerStackView; // +0x150
    CContact * _m_goToAddWhenHadContactVerifyContact; // +0x158
    NSArray * _cardImgList; // +0x160
    ContactRemarkLogic * _m_logic; // +0x168
    MMUIButton * _m_cardImageBtn; // +0x170
    SendVerifyMsgBusinessCardImageLogic * _businessCardImageLogic; // +0x178
    RedesignHelloMsgsPanelView * _helloMsgPanel; // +0x180
}
- (id)initWithContact:(id)arg1 andChatContact:(id)arg2 andVerify:(unsigned int)arg3 delegate:(id)arg4 location:(id)arg5 sourceMsg:(id)arg6;
- (void)registerContactMgrShareCard;
- (void)onHDHeadImageWillAppear;
- (void)onHDHeadImageDidDisappear;
- (void)loadLocalContactData;
- (void)dealloc;
- (void)baseViewWillBePoped;
- (BOOL)isFromStrangeScene;
- (BOOL)isStrangerAllowedToSayHello;
- (BOOL)isNeedCopyFromLocalContact;
- (id)GetTableView;
- (void)initTableView;
- (BOOL)isNeedShowRightBtn;
- (BOOL)isShowBlackAction;
- (BOOL)isShowExposeButton;
- (BOOL)isNeedVerify;
- (id)getInfoDisplayName;
- (BOOL)isFromQRCode;
- (BOOL)isShowAddFriendScene;
- (BOOL)hasMore;
- (id)getWechatUserName;
- (BOOL)IsShowUserName;
- (BOOL)isNeedHideUserName;
- (BOOL)shouldShowTextState;
- (BOOL)shouldRemoveContactPopPreviousPage;
- (void)updateFooterView;
- (void)onSocialInfoHandle;
- (void)setSocialInfoController:(id)arg1;
- (id)genSocialInfomationViewController;
- (void)tryCall:(id)arg1;
- (void)opEditRemarkName;
- (void)opEditRemarkNameInViewController:(id)arg1;
- (id)getEditRemarkNameInViewController;
- (void)opEditSetPermission;
- (id)getContactSetPermissionsViewController;
- (BOOL)canShowVOIPBtn;
- (id)getTagNameList;
- (id)getProfileIntroView;
- (id)getPermissionView;
- (void)adjustmentProfileIntroViewTail:(double)arg1 andProfileIntroView:(id)arg2 andradiusCornerView:(id)arg3;
- (double)getMaxProfileIntroViewTitleWidthWithMaxLabelWidth:(double)arg1;
- (void)genAccountDeletedViewInProfileIntroView:(id)arg1 adjustmentProfileIntroViewTailBlock:(id /* block */)arg2;
- (id)getHelloMsgPanel;
- (id)getProfileHeadView;
- (id)getTagListViewWithHeight:(double)arg1 tageMaxWidth:(double)arg2 tagListViewLeft:(double)arg3 tagTextColor:(id)arg4 tagLabelFontSize:(double)arg5;
- (id)getAlbumView;
- (void)albumView:(id)arg1 displayCellsWithDataItems:(id)arg2 cellLeftContext:(double *)arg3;
- (id)getProfileDesViewWithCellHeight:(double)arg1 profileDesViewMaxWidth:(double)arg2 profileDesNumberOfLines:(long long)arg3 profileDesViewLeft:(double)arg4;
- (id)getPermissionIconsView;
- (id)getSocialInfoView;
- (id)makeHeadSmallLabel:(id)arg1 cpKey:(id)arg2 inUnsafe:(BOOL)arg3 withPrefixTitle:(id)arg4 maxWidth:(double)arg5;
- (id)makeHeadSmallTitleLabel:(id)arg1;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (id)genPhoneButton;
- (void)makeTagCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (void)makeDescCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (void)makeDescImageCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (void)makeSourceCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (void)makeEmptyFriendInfoCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (id)getEmptyFriendTitle;
- (void)makeSignatureCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (void)makePermissionCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (void)makeInviterCell:(id)arg1 CellInfo:(id)arg2 cellHeight:(id *)arg3 arrAccessibilityElement:(id)arg4;
- (id)getInviterValue;
- (id)getInviterRichTextView;
- (void)makeFriendInformationCell:(id)arg1 CellInfo:(id)arg2;
- (id)genLeftTitleLabel:(id)arg1;
- (id)getSection;
- (void)addAlbumSection;
- (void)addAlbumCellAtSection:(id)arg1;
- (BOOL)couldShowAlbum;
- (void)addFinderCellsAtSection:(id)arg1;
- (BOOL)couldShowFinderEntrace;
- (id)finderAssist;
- (BOOL)shouldShowSignatureCell;
- (void)addFileHelperSection;
- (void)addInfoAndPermissionSection;
- (void)initData;
- (void)sendMsgBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)addMsgActionView;
- (BOOL)checkIsHadOpenIMContactVerify;
- (BOOL)checkShareCardEffective;
- (void)reloadTableView;
- (void)reloadNavigationBarItem;
- (void)onOpenVoipActionSheet:(id)arg1;
- (void)onSayHelloToContact;
- (void)showAlbumList;
- (void)initExposeBtn;
- (void)initBlackAndExposeContactBtn;
- (void)initOverSeasWechatLabel;
- (void)initShareCardAddErrorTipsLabel;
- (void)initBlackListTipsLabel;
- (void)initQuitRoomTipsLabel;
- (void)initFooterBtnArea;
- (void)initFooterView;
- (void)initFooterStackView;
- (void)showRightButton;
- (id)navigationBarItemColor;
- (void)onAddToContacts;
- (void)showHDHeadViewImage;
- (void)removeFromBlackList;
- (void)addToBlackList:(id)arg1;
- (void)doAddToBlackList;
- (void)onExposeByRecommand;
- (BOOL)goToAddContactWhenHadContactVerify;
- (void)doCardImage;
- (void)openContactCardImageFullScreen;
- (void)openContactCradImageListPageSheet;
- (void)showMorePhoneList:(id)arg1;
- (unsigned int)getSourceSceneFromScene;
- (void)onOpenVoipView;
- (void)onOpenVoiceVoipView;
- (void)opBlackList:(id)arg1;
- (void)onAction;
- (void)doDeleteContact;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onNewMessage:(id)arg1;
- (void)onStartChat:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)doAddContact;
- (void)startForAddVerifyMsg:(id)arg1;
- (void)onVerifyContact:(id)arg1 opcode:(unsigned int)arg2;
- (void)onRelpyContact:(id)arg1;
- (void)onVerifyContactOk;
- (void)doVerifyContactOk;
- (void)onOpenIMVerifyContactOk;
- (void)handleAddedContact;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactSendReplyOk:(id)arg1;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onDoVerifyByAlertView:(id)arg1;
- (void)onClickSendVerifyMsg;
- (id)getDicReportPageParams;
- (void)startDownCardImg;
- (void)resetGetCardImg;
- (double)getLeftTitleLableMaxWidth;
- (id)getBusinessCardImgInVerify;
- (id)genLinkButton;
- (void)mergeModifyContactAndReloadTableView:(id)arg1;
- (BOOL)checkIsOpenShareCardFromShareCardMsg;
- (void)onDownloadCardImg:(id)arg1 success:(BOOL)arg2;
- (void)onCardImageBrowseViewControllerDidDeleteImageAtIndex:(unsigned int)arg1;
- (CGRect)cardImgViewFrameAtIndex:(unsigned int)arg1;
- (void)onContactVerifyPreCheckBusinessSuccess:(id)arg1 opcode:(unsigned int)arg2;
- (id)getVerifyPreCheckBusinessLogic;
- (BOOL)onCardImageBrowseViewControllerImageActionSheet:(id)arg1 shouldShowItem:(id)arg2;
- (BOOL)isChatRoom;
- (void)reportContactInfoItemClickWithReportScene:(long long)arg1;
- (void)reportContactInfoItemClickWithReportScene:(long long)arg1 andActionResultCode:(long long)arg2;
- (long long)getSubSource;
- (int)getOperatorUserRole;
- (int)getProfileUserRole;
- (void)reportContactInfoViewEnter;
- (void)reportSendVerifyMsg;
- (void)reportFriendAssistActionIfNeeded:(unsigned long long)arg1;
- (void)reportOpenimChatroomMember:(id)arg1 viewId:(id)arg2;
- (void)reportClickRelpyButtonExposureOrClick:(BOOL)arg1;
- (void)reportClickReplyImageExposureOrClick:(BOOL)arg1;
- (id)init;
- (void)updateCPState;
- (void)onRestoreCPLabel:(id)arg1;
- (void)getChatRoomMemberContact;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onOpenImGetContactOpenUrlDone:(id)arg1 openUrl:(id)arg2 errorTip:(id)arg3 scene:(unsigned int)arg4;
- (void)onDisableContactVerifyByOpenIMFriReqAcceptedInWxWork:(id)arg1;
- (void)clickSocialInfomationRemarkItem;
- (void)onSocialInfomationViewWillPop;
- (id)navigationBarBackgroundColor;
- (void)onTapExpandButton:(id)arg1;
- (void)onTapSelfFavoriteButton:(id)arg1;
- (void)onTapFavoriteButton:(id)arg1 isSelected:(BOOL)arg2;
- (void)onTapCommentButton:(id)arg1;
- (void)doSourceAction:(id)arg1;
- (void)onTapIconButton:(id)arg1;
- (void)onTapRedEnvelopeButton:(id)arg1;
- (void)finderAssistDidUpdate;
- (id)currentViewController;
- (void)onFinderAssistClickFinder;
- (void)onTapAuthViews;
- (id)getViewController;
- (void)onClickShowVerifyImageInRedesignHelloMsgs:(CGRect)arg1 verifyMsgImage:(id)arg2;
- (id)getBusinessCardItemImage:(id)arg1 businessCardItem:(id)arg2 isForceDownload:(BOOL)arg3;
- (void)onDownloadBusinessCardImg:(id)arg1 success:(BOOL)arg2 scene:(unsigned int)arg3;
- (void)onDataChangeCloseSetPermissionsPageSheet;
- (void)onDisabledShareCardMessageMsg:(id)arg1 shareCardMessageState:(unsigned int)arg2;
- (BOOL)m_bDisableAllOperation;
- (void)setM_bDisableAllOperation:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)weixinContactAssistDelegate;
- (void)setWeixinContactAssistDelegate:(id)arg1;
- (id)extraSourceInfo;
- (void)setExtraSourceInfo:(id)arg1;
- (id)snsJumpData;
- (void)setSnsJumpData:(id)arg1;
- (id)footerStackView;
- (void)setFooterStackView:(id)arg1;
- (id)m_goToAddWhenHadContactVerifyContact;
- (void)setM_goToAddWhenHadContactVerifyContact:(id)arg1;
- (id)cardImgList;
- (void)setCardImgList:(id)arg1;
- (id)m_logic;
- (void)setM_logic:(id)arg1;
- (id)m_cardImageBtn;
- (void)setM_cardImageBtn:(id)arg1;
- (BOOL)m_downloadingImg;
- (void)setM_downloadingImg:(BOOL)arg1;
- (BOOL)m_isDownloadFail;
- (void)setM_isDownloadFail:(BOOL)arg1;
- (id)businessCardImageLogic;
- (void)setBusinessCardImageLogic:(id)arg1;
- (id)helloMsgPanel;
- (void)setHelloMsgPanel:(id)arg1;
- (void).cxx_destruct;
@end
