@interface EmitterTextViewV2 : UIView
{
    struct * _particleBuffer; // +0x8
    unsigned long long _particleCount; // +0x10
    unsigned long long _particleCapacity; // +0x18
    BOOL _isAnimating; // +0x20
    double _scatterAmount; // +0x28
    double _scatterAnimDuration; // +0x30
    double _rotationSpeed; // +0x38
    double _particleSize; // +0x40
    UIColor * _particleColor; // +0x48
    CADisplayLink * _displayLink; // +0x50
    double _lastTime; // +0x58
    UITextView * _textView; // +0x60
    NSString * _currentText; // +0x68
    double _currentScatterAmount; // +0x70
    double _targetScatterAmount; // +0x78
    double _scatterAnimElapsed; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)dealloc;
- (void)updateFromTextView:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (void)resetParticles;
- (void)scatterParticles;
- (void)setScatterAmount:(double)arg1;
- (void)setScatterAmount:(double)arg1 animated:(BOOL)arg2;
- (void)updateParticlePositions;
- (void)generateParticles;
- (void)samplePointsFromPath:(CGPath *)arg1 sampleCount:(unsigned long long)arg2;
- (void)addParticleAtPoint:(CGPoint)arg1 index:(unsigned long long)arg2;
- (void)updateAnimation:(id)arg1;
- (void)drawRect:(CGRect)arg1;
- (double)scatterAmount;
- (double)scatterAnimDuration;
- (void)setScatterAnimDuration:(double)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (double)rotationSpeed;
- (void)setRotationSpeed:(double)arg1;
- (double)particleSize;
- (void)setParticleSize:(double)arg1;
- (id)particleColor;
- (void)setParticleColor:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)lastTime;
- (void)setLastTime:(double)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)currentText;
- (void)setCurrentText:(id)arg1;
- (double)currentScatterAmount;
- (void)setCurrentScatterAmount:(double)arg1;
- (double)targetScatterAmount;
- (void)setTargetScatterAmount:(double)arg1;
- (double)scatterAnimElapsed;
- (void)setScatterAnimElapsed:(double)arg1;
- (void).cxx_destruct;
@end
