@interface WCPlainTextTipFullScreenView : MMUIView <CAAnimationDelegate>
{
    id <WCPlainTextTipFullScreenViewDelegate> _delegate; // +0x8
    UIImageView * _backgroundView; // +0x10
    UIButton * _knowButton; // +0x18
    UILabel * _plainTextTipLabel; // +0x20
}
- (void)onIKnowItBtnClick:(id)arg1;
- (void)initView;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)showAnimation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)knowButton;
- (void)setKnowButton:(id)arg1;
- (id)plainTextTipLabel;
- (void)setPlainTextTipLabel:(id)arg1;
- (void).cxx_destruct;
@end
