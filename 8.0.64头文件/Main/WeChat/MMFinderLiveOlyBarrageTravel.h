@interface MMFinderLiveOlyBarrageTravel : NSObject
{
    NSMutableArray * _trailStageList; // +0x8
    NSMutableArray * _linearAnimateStageList; // +0x10
}
- (id)trailStageList;
- (double)animateDuration;
- (id)linearAnimateStageList;
- (double)linearAnimateDuration;
- (double)outerInnerRoundScalePercent;
- (void)setTrailStageList:(id)arg1;
- (void)setLinearAnimateStageList:(id)arg1;
- (void).cxx_destruct;
@end
