@interface MMLiveAudioSoundActivityIndicatorView : UIView
{
    BOOL _soundActive; // +0x8
    BOOL _isStub; // +0x9
    UIView * _containerView; // +0x10
    MMLiveAudioSoundActivityIndicatorAnimationView * _indicatorViewA; // +0x18
    MMLiveAudioSoundActivityIndicatorAnimationView * _indicatorViewB; // +0x20
    MMLiveAudioSoundActivityIndicatorAnimationView * _indicatorViewC; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 isStub:(BOOL)arg2;
- (void)setSoundActive:(BOOL)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (CGPath *)indicatorShapeMaskPathWithDimension:(double)arg1 innerRadius:(double)arg2 outerRadius:(double)arg3;
- (void)startIndicatorAnimation;
- (void)stopIndicatorAnimation;
- (void)startIndicatorAnimationOnIndicatorView:(id)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)updateSoundActive:(BOOL)arg1;
- (BOOL)soundActive;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)indicatorViewA;
- (void)setIndicatorViewA:(id)arg1;
- (id)indicatorViewB;
- (void)setIndicatorViewB:(id)arg1;
- (id)indicatorViewC;
- (void)setIndicatorViewC:(id)arg1;
- (BOOL)isStub;
- (void)setIsStub:(BOOL)arg1;
- (void).cxx_destruct;
@end
