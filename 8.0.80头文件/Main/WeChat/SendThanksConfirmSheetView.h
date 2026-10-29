@interface SendThanksConfirmSheetView : MMPageSheetBaseView
{
    BOOL _isGroupChat; // +0x8
    id <SendThanksConfirmSheetViewDelegate> _delegate; // +0x10
    NSString * _chatName; // +0x18
    NSString * _giverNickName; // +0x20
    UIView * _containerView; // +0x28
    MMUILabel * _titleView; // +0x30
    UIView * _guideView; // +0x38
    UIView * _bottomView; // +0x40
    UIButton * _cancelButton; // +0x48
    UIButton * _confirmButton; // +0x50
}
- (void)showWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)updateContentViewHeight;
- (void)initView;
- (void)initTitleView;
- (void)initGuideView;
- (void)initBottomView;
- (void)layoutUI;
- (void)onCancelButtonClick;
- (void)onConfirmButtonClick;
- (void)pageSheetWillCloseWithType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)giverNickName;
- (void)setGiverNickName:(id)arg1;
- (BOOL)isGroupChat;
- (void)setIsGroupChat:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)guideView;
- (void)setGuideView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
