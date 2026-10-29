@interface MJCoreAnimationMaker : NSObject
{
    CAAnimation * _animation; // +0x8
}
- (id /* block */)animations;
- (id /* block */)fromValue;
- (id /* block */)toValue;
- (id /* block */)byValue;
- (id /* block */)removedOnCompletion;
- (id /* block */)timingFunction;
- (id /* block */)beginTime;
- (id /* block */)timeOffset;
- (id /* block */)repeatCount;
- (id /* block */)repeatDuration;
- (id /* block */)duration;
- (id /* block */)speed;
- (id /* block */)autoreverses;
- (id /* block */)fillMode;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (void).cxx_destruct;
@end
