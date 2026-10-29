@interface MMFinderLiveSubsidyPriceDecrementAnim : NSObject
{
    BOOL _hasRendered; // +0x8
    BOOL _cancelled; // +0x9
    BOOL _finished; // +0xa
    id /* block */ _onUpdate; // +0x10
    id /* block */ _onComplete; // +0x18
    long long _startPriceCents; // +0x20
    long long _finalPriceCents; // +0x28
    long long _unitCents; // +0x30
    NSArray * _route; // +0x38
    NSArray * _transitionTimes; // +0x40
    long long _nextRouteIndex; // +0x48
    double _finalTransitionTime; // +0x50
    long long _lastRenderedCents; // +0x58
    double _animationStartTime; // +0x60
    CADisplayLink * _displayLink; // +0x68
}
+ (id)runWithStartCents:(long long)arg1 endCents:(long long)arg2 onUpdate:(id /* block */)arg3 onComplete:(id /* block */)arg4;
- (void)startWithStartCents:(long long)arg1 endCents:(long long)arg2;
- (void)onFrame:(id)arg1;
- (void)renderCents:(long long)arg1;
- (void)finishNow;
- (void)stopDisplayLink;
- (void)cancel;
- (void)dealloc;
- (id /* block */)onUpdate;
- (void)setOnUpdate:(id /* block */)arg1;
- (id /* block */)onComplete;
- (void)setOnComplete:(id /* block */)arg1;
- (long long)startPriceCents;
- (void)setStartPriceCents:(long long)arg1;
- (long long)finalPriceCents;
- (void)setFinalPriceCents:(long long)arg1;
- (long long)unitCents;
- (void)setUnitCents:(long long)arg1;
- (id)route;
- (void)setRoute:(id)arg1;
- (id)transitionTimes;
- (void)setTransitionTimes:(id)arg1;
- (long long)nextRouteIndex;
- (void)setNextRouteIndex:(long long)arg1;
- (double)finalTransitionTime;
- (void)setFinalTransitionTime:(double)arg1;
- (long long)lastRenderedCents;
- (void)setLastRenderedCents:(long long)arg1;
- (BOOL)hasRendered;
- (void)setHasRendered:(BOOL)arg1;
- (double)animationStartTime;
- (void)setAnimationStartTime:(double)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
