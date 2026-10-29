@interface WCLiveBlurButtonAnimationHandler : NSObject <CAAnimationDelegate>
{
    CALayer * _animationLayer; // +0x8
    NSString * _currentAnimationKey; // +0x10
}
- (void)startEnlargeReduceAnimation;
- (void)startEnLargeAnimation:(id)arg1;
- (void)startReduceAnimation:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)animationLayer;
- (void)setAnimationLayer:(id)arg1;
- (id)currentAnimationKey;
- (void)setCurrentAnimationKey:(id)arg1;
- (void).cxx_destruct;
@end

