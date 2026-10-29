@interface CBTStreamTextView : UITextView <CBTStreamMDFeederOutput>
{
    BOOL _externalDriven; // +0x8
    double _fadeDuration; // +0x10
    NSMutableArray * _animatingChunks; // +0x18
    CADisplayLink * _displayLink; // +0x20
    double _lastTimestamp; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)removeTrailingText:(unsigned long long)arg1;
- (id)trailingTextAttributes;
- (void)appendStreamText:(id)arg1;
- (void)appendStreamText:(id)arg1 fadeDuration:(double)arg2;
- (void)setAllText:(id)arg1;
- (BOOL)hasAnimatingChunks;
- (BOOL)externalUpdateAlpha:(double)arg1;
- (id)getAttributeStringWithoutFadeAnimation;
- (void)updateAlpha;
- (void)dealloc;
- (double)fadeDuration;
- (void)setFadeDuration:(double)arg1;
- (BOOL)externalDriven;
- (void)setExternalDriven:(BOOL)arg1;
- (id)animatingChunks;
- (void)setAnimatingChunks:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)lastTimestamp;
- (void)setLastTimestamp:(double)arg1;
- (void).cxx_destruct;
@end
