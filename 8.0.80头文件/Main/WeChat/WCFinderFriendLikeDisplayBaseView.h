@interface WCFinderFriendLikeDisplayBaseView : UIView
{
    BOOL _enableClickAction; // +0x8
    WCFinderFriendLikeDisplayLayoutConfig * _layoutConfig; // +0x10
    WCFinderFeedFriendLikeViewModel * _viewmodel; // +0x18
    id /* block */ _clickViewAction; // +0x20
    long long _supportedInterfaceStyle; // +0x28
    UITapGestureRecognizer * _actionGesture; // +0x30
}
- (id)layoutConfig;
- (id)initWithFrame:(CGRect)arg1;
- (id)createLikeInfoTextView;
- (void)setUpUI;
- (id)initWithViewModel:(id)arg1 frame:(CGRect)arg2;
- (id)initWithViewModel:(id)arg1 frame:(CGRect)arg2 layoutConfig:(id)arg3 supportedInterfaceStyle:(long long)arg4;
- (double)layoutNicknameTextView:(id)arg1 appendTipsView:(id)arg2 nicknameTipsLeft:(double)arg3 maxLeftTipsWidth:(double)arg4 appendTipsMargin:(double)arg5;
- (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2 headerViewSize:(CGSize)arg3;
- (void)setEnableClickAction:(BOOL)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)clickSelfViewAction;
- (CGRect)maxCombinedSubviewFrame;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setLayoutConfig:(id)arg1;
- (id)viewmodel;
- (void)setViewmodel:(id)arg1;
- (id /* block */)clickViewAction;
- (void)setClickViewAction:(id /* block */)arg1;
- (BOOL)enableClickAction;
- (long long)supportedInterfaceStyle;
- (void)setSupportedInterfaceStyle:(long long)arg1;
- (id)actionGesture;
- (void)setActionGesture:(id)arg1;
- (void).cxx_destruct;
@end
