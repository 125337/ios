@interface VoiceTransView_Bottom : UIView
{
    long long _state; // +0x8
    CALayer * _originVoiceIconContentLayer; // +0x10
    CALayer * _voiceIconContentLayer; // +0x18
    CAShapeLayer * _ovalLayer; // +0x20
    CAShapeLayer * _ovalWaveLayer; // +0x28
    CAShapeLayer * _maskLayer; // +0x30
    CAGradientLayer * _gradientLayer; // +0x38
    CAShapeLayer * _strokeLayer; // +0x40
    CALayer * _haloContentLayer; // +0x48
    CAShapeLayer * _shadowLayer; // +0x50
    VoiceTransView_BottomConfig * _config; // +0x58
    NSMutableArray * _volumeArray; // +0x60
    MMTimer * _volumeTimer; // +0x68
    CGRect _originOvalFrame; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)createAndAddAllSublayers;
- (void)setFrame:(CGRect)arg1;
- (void)layoutAllSublayers;
- (void)setState:(long long)arg1;
- (void)doExpandAnimation;
- (void)doExpandAnimationOld;
- (void)doDeselectAnimation:(BOOL)arg1;
- (void)doFadeAnimation;
- (double)getOvalYFromX:(double)arg1;
- (BOOL)isPointInOval:(CGPoint)arg1;
- (void)doWaveAnimationWithVolume:(unsigned long long)arg1;
- (void)onVolumeUpdate;
- (void)doVolumeShrinkAnimation;
- (double)normalizedVolume:(int)arg1;
- (double)calculateWeightedVolume;
- (CGRect)originOvalFrame;
- (void)setOriginOvalFrame:(CGRect)arg1;
- (long long)state;
- (id)originVoiceIconContentLayer;
- (void)setOriginVoiceIconContentLayer:(id)arg1;
- (id)voiceIconContentLayer;
- (void)setVoiceIconContentLayer:(id)arg1;
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
- (id)haloContentLayer;
- (void)setHaloContentLayer:(id)arg1;
- (id)shadowLayer;
- (void)setShadowLayer:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)volumeArray;
- (void)setVolumeArray:(id)arg1;
- (id)volumeTimer;
- (void)setVolumeTimer:(id)arg1;
- (void).cxx_destruct;
@end
