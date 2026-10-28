@interface WCFinderFriendLikeDisplayBaseView : UIView
{
    BOOL _enableClickAction; // +0x8
    WCFinderFeedFriendLikeViewModel * _viewmodel; // +0x10
    id /* block */ _clickViewAction; // +0x18
    UITapGestureRecognizer * _actionGesture; // +0x20
}
- (id)createLikeInfoTextView;
- (void)setUpUI;
- (id)initWithViewModel:(id)arg1 frame:(CGRect)arg2;
- (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2 headerViewSize:(CGSize)arg3;
- (void)setEnableClickAction:(BOOL)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)clickSelfViewAction;
- (CGRect)maxCombinedSubviewFrame;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)viewmodel;
- (void)setViewmodel:(id)arg1;
- (id /* block */)clickViewAction;
- (void)setClickViewAction:(id /* block */)arg1;
- (BOOL)enableClickAction;
- (id)actionGesture;
- (void)setActionGesture:(id)arg1;
- (void).cxx_destruct;
@end
