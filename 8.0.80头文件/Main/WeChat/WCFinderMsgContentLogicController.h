@interface WCFinderMsgContentLogicController : BypMsgContentLogicController <WCFinderContactExt, WCFinderMsgSessionMgrExt, WCFinderMsgChatInfoViewControllerDelegate, WCFinderTrumpetSelectViewControllerDelegate, WCFinderFansProfileViewControllerDelegate, MMInputToolViewCustomizationDelegate>
{
    BOOL _canSendAttachment; // +0xda
    BOOL _canShowChangeRoleTips; // +0xdb
    BOOL _needUpdateSessionInfo; // +0xdc
    BOOL _hasUpdateSessionInfo; // +0xdd
    int _sourceType; // +0xe0
    WCFinderAuthInfo * _authInfo; // +0xe8
    WCFinderMsgChatContentReporter * _reporter; // +0xf0
    double _navigationBarHeightWithoutBadgeGroupView; // +0xf8
    WCFinderUserBindPhoneAssist * _assist; // +0x100
    MMInputToolView * _toolViewEx; // +0x108
    WCFinderInteractionLimitWarningView * _warningView; // +0x110
    unsigned long long _aliasInfoCount; // +0x118
}
- (id)init;
- (void)configWithSessionId:(id)arg1;
- (void)dealloc;
- (void)onEnterRoom;
- (void)triggerPrivateReportAction;
- (void)configReportInfoWithReporter:(id)arg1;
- (BOOL)checkCanUseAttachmentWithNeedAlert:(BOOL)arg1;
- (BOOL)canSendTextMessageWithText:(id)arg1;
- (BOOL)canShowGreetLimitTips;
- (BOOL)canShowChangeRoleTips;
- (void)Register;
- (void)UnRegister;
- (BOOL)shouldCreateBadgeGroupView;
- (BOOL)hasCustomNavBarTitleView;
- (id)GetTitleTailImageView;
- (void)ViewWillAppear;
- (void)showGreetSystemMessageTipsBar;
- (void)updateNavBarHeightAndCustomNavBarTitleView;
- (id)makeACustomNavBarTitleView;
- (BOOL)CanSendEmoticonMessage;
- (BOOL)CanSendImageMsg:(id)arg1;
- (BOOL)CanSendVideoMsg;
- (BOOL)canPasteImage;
- (BOOL)canSendCaptureImage;
- (BOOL)canSendLivePhoto;
- (void)onOpenMediaBrowser;
- (void)onOpenCameraController;
- (id)GetMessageFromImage:(id)arg1;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (BOOL)shouldUseNewTipsNavBar;
- (void)updateDisSendMsgView;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)clickChangeIdentityAction;
- (void)OpenDetailInfo;
- (void)OpenContactInfo:(id)arg1;
- (void)onPopFromNavigationController;
- (void)onExpressionButtonClicked;
- (void)OnClickAttachmentButtonAction;
- (void)onTextBeginEditing:(id)arg1;
- (void)checkShowFirstEnterTips;
- (BOOL)shouldShowFirstEnterTips;
- (void)onWillPushFromNavigationController;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onFinderPrivateMsgContactExtInfoUpdatedWithSessionId:(id)arg1;
- (void)onFinderMsgAuthorSessionOwnerChanged;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderTrumpetSelectViewLiveIdentityDidChanged:(unsigned int)arg1 scene:(unsigned long long)arg2;
- (void)onOpenNewPrivateMsgSessionWithChangeView:(id)arg1;
- (void)onFinderProfileClearAllMsg;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)addToBlackList:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)onFinderMsgSessionStatusUpdatedWithSessionId:(id)arg1;
- (BOOL)textViewHeadViewSeparateStyle;
- (BOOL)canSendAttachment;
- (void)setCanSendAttachment:(BOOL)arg1;
- (void)setCanShowChangeRoleTips:(BOOL)arg1;
- (BOOL)needUpdateSessionInfo;
- (void)setNeedUpdateSessionInfo:(BOOL)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (double)navigationBarHeightWithoutBadgeGroupView;
- (void)setNavigationBarHeightWithoutBadgeGroupView:(double)arg1;
- (id)assist;
- (void)setAssist:(id)arg1;
- (BOOL)hasUpdateSessionInfo;
- (void)setHasUpdateSessionInfo:(BOOL)arg1;
- (id)toolViewEx;
- (void)setToolViewEx:(id)arg1;
- (id)warningView;
- (void)setWarningView:(id)arg1;
- (unsigned long long)aliasInfoCount;
- (void)setAliasInfoCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
