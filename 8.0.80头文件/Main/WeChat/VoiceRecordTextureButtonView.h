@interface VoiceRecordTextureButtonView : MMUIView
{
    BOOL _hideVoiceIcon; // +0x8
    BOOL _fixedVoiceIconPosition; // +0x9
    long long _state; // +0x10
    CALayer * _voiceIconMaskLayer; // +0x18
    CALayer * _voiceIconContentLayer; // +0x20
    double _voiceIconCenterY; // +0x28
    NSString * _voiceIconName; // +0x30
    CAShapeLayer * _ovalLayer; // +0x38
    CAShapeLayer * _ovalWaveLayer; // +0x40
    CAShapeLayer * _maskLayer; // +0x48
    CAGradientLayer * _gradientLayer; // +0x50
    CAShapeLayer * _strokeLayer; // +0x58
    UIColor * _fillColor; // +0x60
    UIColor * _unselectedFillColor; // +0x68
    UIColor * _strokeColor; // +0x70
    NSArray * _gradientColors; // +0x78
    CGRect _originOvalFrame; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 voiceIconName:(id)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)removeAllSublayers;
- (void)createAndAddAllSublayers;
- (void)layoutAllSublayers;
- (void)setState:(long long)arg1;
- (void)setOriginOvalFrame:(CGRect)arg1;
- (void)setVoiceIconCenterY:(double)arg1;
- (void)setHideVoiceIcon:(BOOL)arg1;
- (void)doExpandAnimation;
- (void)doDeselectAnimation:(BOOL)arg1;
- (void)doFadeAnimation;
- (double)getOvalYFromX:(double)arg1;
- (BOOL)isPointInOval:(CGPoint)arg1;
- (void)doWaveAnimationWithVolume:(unsigned long long)arg1;
- (CGRect)originOvalFrame;
- (long long)state;
- (BOOL)hideVoiceIcon;
- (BOOL)fixedVoiceIconPosition;
- (void)setFixedVoiceIconPosition:(BOOL)arg1;
- (id)voiceIconMaskLayer;
- (void)setVoiceIconMaskLayer:(id)arg1;
- (id)voiceIconContentLayer;
- (void)setVoiceIconContentLayer:(id)arg1;
- (double)voiceIconCenterY;
- (id)voiceIconName;
- (void)setVoiceIconName:(id)arg1;
- (id)ovalLayer;
- (void)setOvalLayer:(id)arg1;
- (id)ovalWaveLayer;
- (void)setOvalWaveLayer:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)strokeLayer;
- (void)setStrokeLayer:(id)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (id)unselectedFillColor;
- (void)setUnselectedFillColor:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (id)gradientColors;
- (void)setGradientColors:(id)arg1;
- (void).cxx_destruct;
@end
