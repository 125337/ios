@interface MMEasterEggEffectImplicitAnimation : MMEasterEggEffect <ImplicitViewDelegate, InteractiveImplicitViewDelegate, PAGViewListener>
{
    NSArray * _animations; // +0x8
    MMEasterEggTopAnimation * _topAnimation; // +0x10
    NSOperationQueue * _queue; // +0x18
    PAGView * _pagView; // +0x20
    long long _animationType; // +0x28
    id /* block */ _durationBlock; // +0x30
    CADisplayLink * _displayLink; // +0x38
    NSMutableArray * _implicitViews; // +0x40
    unsigned long long _startAnimationViewCount; // +0x48
    unsigned long long _countOfViewFinished; // +0x50
    double _nextStartAnimationTime; // +0x58
}
- (id)init;
- (void)dealloc;
- (BOOL)isRunning;
- (BOOL)startEffectWithExtInfo:(id)arg1;
- (void)continueEffectWithInteractiveUI:(id)arg1;
- (void)endEffectWithReason:(unsigned int)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)startTopAnimation;
- (void)startAnimationWithImplicitViews:(id)arg1;
- (void)updateFrame;
- (void)updateCountOfViewStartAnimationWithCurTime:(double)arg1;
- (BOOL)checkEnd;
- (void)setSessionId:(id)arg1;
- (id)description;
- (void)onAnimationEnd:(id)arg1;
- (CGRect)getBoundsForAnimationType:(long long)arg1;
- (void)didTapInteractiveImplicitView:(id)arg1;
- (id)animations;
- (void)setAnimations:(id)arg1;
- (id)topAnimation;
- (void)setTopAnimation:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (long long)animationType;
- (void)setAnimationType:(long long)arg1;
- (id /* block */)durationBlock;
- (void)setDurationBlock:(id /* block */)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)implicitViews;
- (void)setImplicitViews:(id)arg1;
- (unsigned long long)startAnimationViewCount;
- (void)setStartAnimationViewCount:(unsigned long long)arg1;
- (unsigned long long)countOfViewFinished;
- (void)setCountOfViewFinished:(unsigned long long)arg1;
- (double)nextStartAnimationTime;
- (void)setNextStartAnimationTime:(double)arg1;
- (void).cxx_destruct;
@end

