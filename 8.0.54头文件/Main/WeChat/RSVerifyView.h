@interface RSVerifyView : MMUIImageView <ContactVerifyPreCheckBusinessLogicDelegate, RSVerifyAnimationViewDelegate>
{
    MMHeadImageView * _imageView; // +0x8
    UIImageView * _headBGView; // +0x10
    UILabel * _displayName; // +0x18
    RSVerifyAnimationView * _animationView; // +0x20
    UIButton * _statusFrame; // +0x28
    UILabel * _helloLabel; // +0x30
    UIButton * _remarkBtn; // +0x38
    UIButton * _addFriendBtn; // +0x40
    UIButton * _exposeBtn; // +0x48
    RSHeadImageView * _headImage; // +0x50
    id <RSVerifyViewDelegate> _delegate; // +0x58
    CContactVerifyPreCheckBusinessLogic * m_verifyPreCheckBusinessLogic; // +0x60
    WCUIAlertView * _alertView; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initHeadView;
- (void)initDisplayNameLabel;
- (void)initStatusFrame;
- (void)initHelloLabel;
- (void)initRemarkBtn;
- (void)initAddFriendButton;
- (void)initExposeButton;
- (void)initBackgroundView;
- (void)initAnimationView;
- (void)initView;
- (void)doShowStatusFrameAnimation;
- (void)doShowAddFriendButtonAnimation;
- (void)layoutSubviews;
- (void)startAnimationWithUsername:(id)arg1 OriginPoint:(CGPoint)arg2;
- (void)hideSelf;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)doSetRemark;
- (void)onSetRemark;
- (void)onAddFriend;
- (void)onDoAddFriend;
- (void)onExpose;
- (void)onAnimationFinish:(BOOL)arg1;
- (void)onContactVerifyPreCheckBusinessSuccess:(id)arg1 opcode:(unsigned int)arg2;
- (id)getVerifyPreCheckBusinessLogic;
- (id)getViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)alertView;
- (void)setAlertView:(id)arg1;
- (void).cxx_destruct;
@end

