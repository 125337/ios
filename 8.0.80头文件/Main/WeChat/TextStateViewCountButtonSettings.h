@interface TextStateViewCountButtonSettings : NSObject <NSCopying>
{
    double _nPercent; // +0x8
    double _mPercent; // +0x10
    unsigned long long _maxBubbleCount; // +0x18
    double _phase1Duration; // +0x20
    double _phase1RiseY; // +0x28
    double _phase2Duration; // +0x30
    double _phase2RiseY; // +0x38
    double _phase3Duration; // +0x40
    double _phase3RiseY; // +0x48
    double _bubbleStaggerDelay; // +0x50
}
+ (id)defaultSettings;
- (id)init;
- (void)loadFromExptOrDefault;
- (id)copyWithZone:(_NSZone *)arg1;
- (double)nPercent;
- (void)setNPercent:(double)arg1;
- (double)mPercent;
- (void)setMPercent:(double)arg1;
- (unsigned long long)maxBubbleCount;
- (void)setMaxBubbleCount:(unsigned long long)arg1;
- (double)phase1Duration;
- (void)setPhase1Duration:(double)arg1;
- (double)phase1RiseY;
- (void)setPhase1RiseY:(double)arg1;
- (double)phase2Duration;
- (void)setPhase2Duration:(double)arg1;
- (double)phase2RiseY;
- (void)setPhase2RiseY:(double)arg1;
- (double)phase3Duration;
- (void)setPhase3Duration:(double)arg1;
- (double)phase3RiseY;
- (void)setPhase3RiseY:(double)arg1;
- (double)bubbleStaggerDelay;
- (void)setBubbleStaggerDelay:(double)arg1;
@end
