@interface WAAgentCardExpiredOverlayView : UIView
{
    NSString * _expiredText; // +0x8
    id /* block */ _tapHandler; // +0x10
    UIView * _maskView; // +0x18
    CustomVisualEffectView * _blurView; // +0x20
    UILabel * _textLabel; // +0x28
    UITapGestureRecognizer * _tapGesture; // +0x30
}
+ (id)attachToView:(id)arg1 expiredText:(id)arg2;
- (void)setTapHandler:(id /* block */)arg1;
- (void)onSelfTapped;
- (void)updateExpiredText:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)rebuildBlurView;
- (void)removeBlurView;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)expiredText;
- (void)setExpiredText:(id)arg1;
- (id /* block */)tapHandler;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
