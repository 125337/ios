@interface WCCanvasRandomEncoreView : UIView <WCAdInteractionDeviceMotionContainerDelegate>
{
    BOOL _didShowEncoreAnimation; // +0x8
    WCCanvasRandomLayoutEncoreInfo * _encoreInfo; // +0x10
    id <WCCanvasRandomEncoreViewDelegate> _delegate; // +0x18
    UIView * _containerView; // +0x20
    WCAdURLImageView * _imageView; // +0x28
    UILabel * _titleLabel; // +0x30
    WCAdInteractionDeviceMotionContainer * _deviceMotionContainer; // +0x38
    NSNumber * _maxAccelerationInfo; // +0x40
}
+ (CGSize)calcSizeForRandomEncoreInfo:(id)arg1 orientation:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1 encoreInfo:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (void)generateContainerView;
- (id)containerView;
- (id)imageView;
- (id)titleLabel;
- (id)deviceMotionContainer;
- (void)notifyViewStatusChanged:(BOOL)arg1;
- (void)switchToNormalState;
- (BOOL)isDeviceMotionRunning;
- (void)resetRandomEncoreView;
- (void)shakeRandomViewDelay;
- (void)shakeRandomView;
- (void)showShakeAnimationToView:(id)arg1;
- (void)hideEncoreView;
- (void)updateMaxAccelerationWithX:(double)arg1 y:(double)arg2;
- (id)fetchMaxAccelerationInfo;
- (void)deviceMotionAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)encoreInfo;
- (void)setEncoreInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (BOOL)didShowEncoreAnimation;
- (void)setDidShowEncoreAnimation:(BOOL)arg1;
- (void)setDeviceMotionContainer:(id)arg1;
- (id)maxAccelerationInfo;
- (void)setMaxAccelerationInfo:(id)arg1;
- (void).cxx_destruct;
@end
