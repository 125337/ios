@interface MMFinderLiveOlyBarragePubbleRoute : NSObject
{
    BOOL _hasInvokeContinueDisplay; // +0x8
    MMFinderLiveOlyBarragePubbleCell * _floatingPubbleCell; // +0x10
    MMFinderLiveOlyBarrageTravel * _rootTravel; // +0x18
    id /* block */ _displayFinishCompletion; // +0x20
    CGPoint _currentCenter; // +0x28
}
- (void)startFloatingWithDuration:(double)arg1;
- (void)endFloating;
- (void)continueDisplay;
- (void)pause;
- (CGRect)getPubbleCellPresentFrame;
- (void)adjustPresentCenter;
- (void)displayWithAnimationRoute:(id)arg1;
- (double)getRadiusPercentForPoint:(CGPoint)arg1 containerSize:(CGSize)arg2;
- (id)getAnimationRouteWithPrecentCenter:(CGPoint)arg1 containerSize:(CGSize)arg2;
- (long long)getLinearAnimateStageIndexWithCurrentPercent:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)floatingPubbleCell;
- (void)setFloatingPubbleCell:(id)arg1;
- (id)rootTravel;
- (void)setRootTravel:(id)arg1;
- (CGPoint)currentCenter;
- (void)setCurrentCenter:(CGPoint)arg1;
- (BOOL)hasInvokeContinueDisplay;
- (void)setHasInvokeContinueDisplay:(BOOL)arg1;
- (id /* block */)displayFinishCompletion;
- (void)setDisplayFinishCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

