@interface WCCardCodeAnimator : MMObject
{
    UIView * _view; // +0x8
    UIView * _oldSuperView; // +0x10
    UIView * _maskView; // +0x18
    UIView * _newSuperView; // +0x20
    CGRect _oriFrame; // +0x28
    BOOL _bAnimating; // +0x48
    double _animationDuration; // +0x50
    double _scale; // +0x58
    BOOL _bRotateRight; // +0x60
    id <WCCardCodeAnimatorDelegate> _delegate; // +0x68
}
- (id)initWithView:(id)arg1 superView:(id)arg2;
- (void)setupView;
- (void)onTapRecognizer:(id)arg1;
- (void)handleEnterFullScreen;
- (void)handleExitFullScreen;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bRotateRight;
- (void)setBRotateRight:(BOOL)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (void).cxx_destruct;
@end
