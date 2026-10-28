@interface BrandFansMsgContentLogicController : BypMsgContentLogicController <BrandFansContactMgrExt, BrandFansContactProfileControllerDelegate>
{
    BOOL _hasAppeared; // +0xda
    BrandFansContact * _fansContact; // +0xe0
    BrandFansMsgSessionInfo * _sessionInfo; // +0xe8
    MMInputToolView * _toolViewEx; // +0xf0
}
- (id)initWithFansContact:(id)arg1 sessionInfo:(id)arg2;
- (void)dealloc;
- (void)setup;
- (void)ViewWillAppear;
- (void)ViewDidAppear;
- (void)onWillPopFromNavigationController;
- (void)OpenContactInfo:(id)arg1;
- (id)GetRightBarButtonImageName;
- (id)GetRightBarButtonTitle;
- (void)showReplyTipsIfNeed;
- (BOOL)CanSendEmoticonMessage;
- (BOOL)CanSendVideoMsg;
- (BOOL)textViewHeadViewSeparateStyle;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (void)brandFansContactUpdatedForOpenID:(id)arg1 contact:(id)arg2;
- (void)onBrandFansMsgSessionReplyTipsUpdatedForSessionInfo:(id)arg1;
- (void)onBrandFansMsgAdded:(id)arg1 message:(id)arg2;
- (void)clickViewDetailInController:(id)arg1;
- (void)clickBlockContactInController:(id)arg1;
- (void)confirmBlockContact;
- (void)clickUnblockContactInController:(id)arg1;
- (void)clickViewProfileInController:(id)arg1;
- (id)getContactByUsername:(id)arg1;
- (void)goToBizProfileWithUsername:(id)arg1;
- (void)goToFinderProfileWithUsername:(id)arg1;
- (BOOL)hasAppeared;
- (void)setHasAppeared:(BOOL)arg1;
- (id)fansContact;
- (void)setFansContact:(id)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)toolViewEx;
- (void)setToolViewEx:(id)arg1;
- (void).cxx_destruct;
@end
