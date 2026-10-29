@interface ChatBotSwitchModeView : UIView <ICBTMomentExt>
{
    id <ChatBotSwitchModeViewDelegate> _delegate; // +0x8
    long long _mode; // +0x10
    MMUIButton * _momentButton; // +0x18
    MMBadgeView * _momentRedDot; // +0x20
    MMUIButton * _chatButton; // +0x28
    UIView * _moveView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)switchMode:(long long)arg1;
- (long long)getMode;
- (void)setMode:(long long)arg1;
- (void)layoutSubviews;
- (BOOL)enableMomentMode;
- (void)layoutMomentButton;
- (void)layoutChatButton;
- (void)layoutMoveView;
- (void)onMomentButtonClick;
- (void)showMomentRedDot;
- (void)resetMomentRedDot;
- (void)onChatButtonClick;
- (void)updateBtnTitleColor;
- (void)checkNeedShowMomentRedDot;
- (void)onMomentTimelineEntryUpdate:(BOOL)arg1;
- (void)onRecvNewInteraction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)mode;
- (id)momentButton;
- (void)setMomentButton:(id)arg1;
- (id)momentRedDot;
- (void)setMomentRedDot:(id)arg1;
- (id)chatButton;
- (void)setChatButton:(id)arg1;
- (id)moveView;
- (void)setMoveView:(id)arg1;
- (void).cxx_destruct;
@end
