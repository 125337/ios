@interface ChatRoomStateInvitationReasonPageSheet : MMPageSheetBaseView <UIScrollViewDelegate, IMMGrowTextViewExt>
{
    UIButton * m_sendBtn; // +0x8
    MMGrowTextView * m_stateInvitationReasonInputView; // +0x10
    double m_pageSheetContentHeight; // +0x18
    NSArray * m_arrMemberList; // +0x20
    id <ChatRoomStateInvitationReasonPageSheetDelegate> _invitationReasonDelegate; // +0x28
    MMUIView * _containerView; // +0x30
}
- (id)initWithContentHeight:(double)arg1 arrMemberList:(id)arg2;
- (void)dealloc;
- (void)pageSheetWillAppear;
- (BOOL)canBecomeFirstResponder;
- (void)initConfig;
- (void)initView;
- (id)genRightButton;
- (id)genStateInvitationReasonView;
- (void)hideKeyboard;
- (void)onDidSendBtn;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (id)invitationReasonDelegate;
- (void)setInvitationReasonDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
