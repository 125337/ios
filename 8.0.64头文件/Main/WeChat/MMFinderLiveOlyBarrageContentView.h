@interface MMFinderLiveOlyBarrageContentView : UIView
{
    BOOL _hasStartPlay; // +0x8
    id /* block */ _displayFinishCompletion; // +0x10
    id /* block */ _barragePubbleTapCallback; // +0x18
    NSArray * _barrageTravelList; // +0x20
    MMFinderLiveOlyBarrageTravel * _barrageTravel; // +0x28
    NSMutableArray * _displayingPubbleList; // +0x30
}
- (id)initWithBarrageTravelList:(id)arg1;
- (void)addBarragePubbleCellList:(id)arg1;
- (void)startDisplay;
- (void)cancelDisplay;
- (id)requestBarrageHitTestViewWithConvertedPoint:(CGPoint)arg1;
- (void)refreshDisplayingBarragePubblesForLightTorch;
- (void)layoutSubviews;
- (void)configBarragePubbleCells:(id)arg1 withTravelList:(id)arg2;
- (void)innerStartDisplay;
- (id)getDisplayAnimationGroup;
- (CGRect)getBarragePubblePresentFrame:(id)arg1 contentPresentFrame:(CGRect)arg2;
- (void)displayFinish;
- (id)displayingPubbleList;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id /* block */)displayFinishCompletion;
- (void)setDisplayFinishCompletion:(id /* block */)arg1;
- (id /* block */)barragePubbleTapCallback;
- (void)setBarragePubbleTapCallback:(id /* block */)arg1;
- (id)barrageTravelList;
- (void)setBarrageTravelList:(id)arg1;
- (id)barrageTravel;
- (void)setBarrageTravel:(id)arg1;
- (void)setDisplayingPubbleList:(id)arg1;
- (BOOL)hasStartPlay;
- (void)setHasStartPlay:(BOOL)arg1;
- (void).cxx_destruct;
@end
