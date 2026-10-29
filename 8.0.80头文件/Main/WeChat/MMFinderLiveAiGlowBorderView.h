@interface MMFinderLiveAiGlowBorderView : UIView
{
    BOOL _isReady; // +0x8
    BOOL _isVoiceActive; // +0x9
    double _borderWidth; // +0x10
    double _blurRadius; // +0x18
    UIView * _targetView; // +0x20
    double _cornerRadius; // +0x28
    CALayer * _glowLayer; // +0x30
    double _opacityMin; // +0x38
    double _opacityMax; // +0x40
    double _lastUpdateTime; // +0x48
    double _silenceStartTime; // +0x50
    CADisplayLink * _displayLink; // +0x58
    double _smoothVolume; // +0x60
    double _lastTargetVolume; // +0x68
    struct _springOpacity; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (struct)makeSpringWithValue:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
- (void)stepSpring:(struct *)arg1 dt:(double)arg2;
- (void)setBorderWidth:(double)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)invalidateAndRerender;
- (id)gradientColors;
- (id)gradientLocations;
- (void)attachToView:(id)arg1;
- (void)updateFrameForTargetView:(id)arg1;
- (void)updateSelfFrame;
- (void)prerenderAsync;
- (void)startBreathAnimation;
- (void)stopBreathAnimation;
- (void)updateWithVolume:(double)arg1;
- (void)enterVoiceActiveMode;
- (void)exitVoiceActiveMode;
- (void)startDisplayLink;
- (void)stopDisplayLink;
- (void)displayLinkTick:(id)arg1;
- (void)stopAnimatingAndRemove;
- (void)layoutSubviews;
- (double)borderWidth;
- (double)blurRadius;
- (BOOL)isReady;
- (void)setIsReady:(BOOL)arg1;
- (id)targetView;
- (void)setTargetView:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)glowLayer;
- (void)setGlowLayer:(id)arg1;
- (double)opacityMin;
- (void)setOpacityMin:(double)arg1;
- (double)opacityMax;
- (void)setOpacityMax:(double)arg1;
- (struct)springOpacity;
- (void)setSpringOpacity:(struct)arg1;
- (BOOL)isVoiceActive;
- (void)setIsVoiceActive:(BOOL)arg1;
- (double)lastUpdateTime;
- (void)setLastUpdateTime:(double)arg1;
- (double)silenceStartTime;
- (void)setSilenceStartTime:(double)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)smoothVolume;
- (void)setSmoothVolume:(double)arg1;
- (double)lastTargetVolume;
- (void)setLastTargetVolume:(double)arg1;
- (void).cxx_destruct;
@end
