@interface WCAdTypewriterLabel : MMUILabel
{
    MMTimer * _typewriterTimer; // +0x8
    NSString * _typewriterText; // +0x10
    double _animationInterval; // +0x18
}
- (void)setTypewriterText:(id)arg1 animationDuration:(double)arg2;
- (void)typewriterPrint;
- (void)startTimer;
- (void)stopTimer;
- (void)dealloc;
- (id)typewriterTimer;
- (void)setTypewriterTimer:(id)arg1;
- (id)typewriterText;
- (void)setTypewriterText:(id)arg1;
- (double)animationInterval;
- (void)setAnimationInterval:(double)arg1;
- (void).cxx_destruct;
@end

