@interface WWKFContentLogicController : WeixinContentLogicController <IEcsAliasProfileExt>
{
    BOOL _bHasShowQuickSendMsg; // +0xdc
    int _roomEnterScene; // +0xe0
    NSString * _sessionTitle; // +0xe8
    NSString * _sessionSubTitle; // +0xf0
    NSString * _sessionCarryWord; // +0xf8
    WWKFContentSendMsgInfo * _sendMsgInfo; // +0x100
    EcsAliasProfileInfo * _lastRenderedProfile; // +0x108
}
- (BOOL)isEcsKfChat;
- (void)updateQuickSendMsgInfoReportContext;
- (id)init;
- (void)dealloc;
- (id)GetUsrTitle;
- (id)GetHeadImageUrl:(id)arg1;
- (double)GetHeadImageCornerRadius:(id)arg1;
- (id)getSubTitle;
- (void)initViewController;
- (void)setNeedUpdateTitle:(BOOL *)arg1;
- (id)getLeftBarButton;
- (void)OpenDetailInfo;
- (void)OpenContactInfo:(id)arg1;
- (void)ViewDidInit;
- (void)onEcsAliasProfileChanged:(id)arg1 seq:(long long)arg2;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (BOOL)isNeedShowQuickSendMsgView;
- (void)onHideQuickSendSessionMsgBtn;
- (void)onClickQuickSendSessionMsgBtn:(id)arg1;
- (id)getInputToolView;
- (void)setCarryWordToInputToolView;
- (void)onWWKFContactUpdated:(id)arg1;
- (void)ViewDidAppear;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)onWillPushFromNavigationController;
- (id)sessionTitle;
- (void)setSessionTitle:(id)arg1;
- (id)sessionSubTitle;
- (void)setSessionSubTitle:(id)arg1;
- (id)sessionCarryWord;
- (void)setSessionCarryWord:(id)arg1;
- (int)roomEnterScene;
- (void)setRoomEnterScene:(int)arg1;
- (id)sendMsgInfo;
- (void)setSendMsgInfo:(id)arg1;
- (BOOL)bHasShowQuickSendMsg;
- (void)setBHasShowQuickSendMsg:(BOOL)arg1;
- (id)lastRenderedProfile;
- (void)setLastRenderedProfile:(id)arg1;
- (void).cxx_destruct;
@end
