@interface StreamVoiceInputControlView : MMUIView
{
    id <StreamVoiceInputControlViewDelegate> _delegate; // +0x8
    double _buttonLen; // +0x10
    UIImage * _normalButtonImage; // +0x18
    UIColor * _coverViewColor; // +0x20
    UIImage * _highlightButtonImage; // +0x28
    double _baseButtonShadowRadius; // +0x30
    double _minButtonShadowRadius; // +0x38
    double _maxButtonShadowRadius; // +0x40
    double _touchUpOutsideDelay; // +0x48
    UIView * _buttonShadowView; // +0x50
    UIButton * _buttonView; // +0x58
    CAShapeLayer * _indicator; // +0x60
    UIView * _buttonCoverView; // +0x68
}
- (id)init;
- (void)initUI;
- (void)layoutSubviews;
- (void)buttonTouchDown;
- (void)checkHoldEvent;
- (void)buttonTouchUpInside;
- (void)buttonTouchUpOutside;
- (void)buttonTouchUp:(BOOL)arg1;
- (void)startTapRecordingAnimation;
- (void)startHoldRecordingAnimation;
- (void)startHoldInitAnimation;
- (void)startWaitingForResultAnimation;
- (void)stopAnimation;
- (void)resetAnimation;
- (void)startBreatheAnimation;
- (void)addBreatheAnimation;
- (BOOL)isBreatheAnimationActive;
- (void)stopBreatheAnimation;
- (void)displayRecordingStatusForHold:(float)arg1;
- (void)displayPeakPower:(float)arg1 MaxRadius:(double)arg2 MinRadius:(double)arg3 BaseRadius:(double)arg4 UIView:(id)arg5 ShapeLayer:(id)arg6;
- (void)initDefaultConfig;
- (void)setButtonLen:(double)arg1;
- (void)setBaseButtonShadowRadius:(double)arg1;
- (void)setCoverViewColor:(id)arg1;
- (void)setNormalButtonImage:(id)arg1;
- (void)setHighlightButtonImage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)buttonLen;
- (id)normalButtonImage;
- (id)coverViewColor;
- (id)highlightButtonImage;
- (double)baseButtonShadowRadius;
- (double)minButtonShadowRadius;
- (void)setMinButtonShadowRadius:(double)arg1;
- (double)maxButtonShadowRadius;
- (void)setMaxButtonShadowRadius:(double)arg1;
- (double)touchUpOutsideDelay;
- (void)setTouchUpOutsideDelay:(double)arg1;
- (id)buttonShadowView;
- (void)setButtonShadowView:(id)arg1;
- (id)buttonView;
- (void)setButtonView:(id)arg1;
- (id)indicator;
- (void)setIndicator:(id)arg1;
- (id)buttonCoverView;
- (void)setButtonCoverView:(id)arg1;
- (void).cxx_destruct;
@end

