@interface WCStoryLyricWaveView : MMUIView
{
    NSArray * _animationLayers; // +0x8
    UIColor * _waveColor; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithColor:(id)arg1;
- (void)setupView;
- (void)startAnimation;
- (void)addAnimationInLayerArray:(id)arg1 usedForCompose:(BOOL)arg2;
- (void)stopAnimation;
- (id)exportAnimatedLayer;
- (void)setupAnimationLayer:(id)arg1 withIndex:(unsigned long long)arg2 userForCompose:(BOOL)arg3;
- (id)createFrameValue;
- (id)createDurationArray;
- (id)animationLayers;
- (void)setAnimationLayers:(id)arg1;
- (id)waveColor;
- (void)setWaveColor:(id)arg1;
- (void).cxx_destruct;
@end

