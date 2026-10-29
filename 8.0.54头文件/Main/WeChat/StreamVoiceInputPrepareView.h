@interface StreamVoiceInputPrepareView : MMUIView
{
    NSMutableArray * _dots; // +0x8
    NSArray * _animationKeyTimes; // +0x10
}
- (id)init;
- (void)startPlayAnimation;
- (void)stopPlayAnimation;
- (id)dots;
- (void)setDots:(id)arg1;
- (id)animationKeyTimes;
- (void)setAnimationKeyTimes:(id)arg1;
- (void).cxx_destruct;
@end

