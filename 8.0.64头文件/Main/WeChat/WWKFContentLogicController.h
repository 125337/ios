@interface WWKFContentLogicController : WeixinContentLogicController
{
    BOOL _bHasShowQuickSendMsg; // +0xdb
    NSString * _sessionTitle; // +0xe0
    NSString * _sessionSubTitle; // +0xe8
    NSString * _sessionCarryWord; // +0xf0
    WWKFContentSendMsgInfo * _sendMsgInfo; // +0xf8
}
- (id)init;
- (id)GetUsrTitle;
- (id)getSubTitle;
- (void)initViewController;
- (void)setNeedUpdateTitle:(BOOL *)arg1;
- (id)getLeftBarButton;
- (void)OpenDetailInfo;
- (void)ViewDidInit;
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
- (id)sendMsgInfo;
- (void)setSendMsgInfo:(id)arg1;
- (BOOL)bHasShowQuickSendMsg;
- (void)setBHasShowQuickSendMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end
