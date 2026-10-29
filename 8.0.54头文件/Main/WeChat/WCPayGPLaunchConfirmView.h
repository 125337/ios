@interface WCPayGPLaunchConfirmView : MMUIView
{
    BOOL _bChangeHeight; // +0x8
    id <WCPayGPLaunchConfirmViewDelegate> _delegate; // +0x10
    CContact * _contact; // +0x18
    NSString * _theme; // +0x20
    double _originHeight; // +0x28
    MMUIView * _contentView; // +0x30
    MMUIView * _chatroomContentView; // +0x38
    ChatroomProfileView * _chatroomInfoView; // +0x40
}
- (void)setupSubview;
- (void)setupContentView;
- (void)setupHeaderContent;
- (void)setupCenterContent;
- (void)setupBottomContent;
- (id)genNewBigButton;
- (double)getChatroomContentViewMaxHeight;
- (void)showView;
- (void)hideView;
- (void)onCancel;
- (void)onConfirm;
- (void)initPreViewAndBarView:(id)arg1 ContentView:(id)arg2;
- (void)viewChatroomProfile:(id)arg1;
- (void)showPreViewAnimate;
- (void)onPressBackBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)theme;
- (void)setTheme:(id)arg1;
- (BOOL)bChangeHeight;
- (void)setBChangeHeight:(BOOL)arg1;
- (double)originHeight;
- (void)setOriginHeight:(double)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)chatroomContentView;
- (void)setChatroomContentView:(id)arg1;
- (id)chatroomInfoView;
- (void)setChatroomInfoView:(id)arg1;
- (void).cxx_destruct;
@end

