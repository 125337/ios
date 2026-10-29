@interface W1wPersonalMsgContentLogicController : BypMsgContentLogicController <W1wUserContactMgrExt, MMGrowTextViewDelegate>
{
    BOOL _hasAppeared; // +0xda
    W1wUserContact * _contact; // +0xe0
    W1wPersonalMsgSessionInfo * _sessionInfo; // +0xe8
    MMInputToolView * _toolViewEx; // +0xf0
    NSString * _pageId; // +0xf8
}
- (id)initWithContact:(id)arg1 sessionInfo:(id)arg2;
- (void)configWithSessionId:(id)arg1;
- (void)dealloc;
- (void)setup;
- (void)ViewWillAppear;
- (void)ViewDidAppear;
- (void)ViewDidDisappear;
- (void)onWillPopFromNavigationController;
- (void)onWillPushFromNavigationController;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (void)showReplyTipsIfNeed;
- (void)showSecureInformIfNeed;
- (BOOL)checkCanUseAttachmentWithNeedAlert:(BOOL)arg1;
- (BOOL)CanSendEmoticonMessage;
- (BOOL)CanSendVideoMsg;
- (BOOL)canPasteImage;
- (BOOL)canSendCaptureImage;
- (BOOL)canSendLivePhoto;
- (void)onOpenMediaBrowser;
- (void)onOpenCameraController;
- (id)GetMessageFromImage:(id)arg1;
- (BOOL)textViewHeadViewSeparateStyle;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (void)clickChangeIdentityAction;
- (void)clickSend;
- (void)W1wUserContactUpdatedForUsername:(id)arg1 contact:(id)arg2;
- (void)onW1wPersonalMsgSessionReplyTipsUpdatedForSessionInfo:(id)arg1;
- (void)onW1wPersonalMsgAdded:(id)arg1 message:(id)arg2;
- (void)onW1wPersonalMsgSessionCanRecvMsgUpdatedForSessionInfo:(id)arg1;
- (void)onW1wPersonalMsgSessionCanChangeIdentityUpdatedForSessionInfo:(id)arg1;
- (BOOL)hasAppeared;
- (void)setHasAppeared:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)toolViewEx;
- (void)setToolViewEx:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (void).cxx_destruct;
@end
