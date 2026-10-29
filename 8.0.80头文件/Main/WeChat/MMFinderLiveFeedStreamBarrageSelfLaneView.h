@interface MMFinderLiveFeedStreamBarrageSelfLaneView : UIView <CAAnimationDelegate>
{
    BOOL _pressing; // +0x8
    id /* block */ _onBulletFired; // +0x10
    id /* block */ _onBurstEnd; // +0x18
    unsigned long long _lineCount; // +0x20
    double _lineHeight; // +0x28
    double _lineSpacing; // +0x30
    MMFinderLiveFeedStreamBarrageStyleConfig * _styleConfig; // +0x38
    NSArray * _laneTops; // +0x40
    NSMutableArray * _laneLastDeparture; // +0x48
    NSMutableArray * _shuffledLaneIndexes; // +0x50
    NSMutableArray * _flyingItems; // +0x58
    MMTimer * _burstTimer; // +0x60
    NSString * _burstContent; // +0x68
    unsigned long long _burstFiredCount; // +0x70
    MMFinderLiveFeedStreamFollowMotionProfile * _motionProfile; // +0x78
}
- (id)initWithLineCount:(unsigned long long)arg1 lineHeight:(double)arg2 lineSpacing:(double)arg3 styleConfig:(id)arg4;
- (void)rebuildLanes;
- (void)layoutSubviews;
- (void)fireSingleBulletWithContent:(id)arg1;
- (void)beginBurstWithContent:(id)arg1;
- (unsigned long long)endBurst;
- (void)resetBurstForContentChange;
- (void)clearAll;
- (void)onBurstTimerFired;
- (void)resetBurst;
- (BOOL)tryInsertBulletWithContent:(id)arg1;
- (long long)pickAvailableLane;
- (void)refillShuffledLaneIndexes;
- (BOOL)checkLaneAvailable:(unsigned long long)arg1;
- (double)lastBulletWidthInLane:(unsigned long long)arg1;
- (void)insertBulletWithContent:(id)arg1 laneIndex:(unsigned long long)arg2;
- (id)createBulletViewWithContent:(id)arg1;
- (id)currentStrokeTextAttributeObj;
- (void)startFollowMotionAnimationForItem:(id)arg1;
- (id)matchedTimingFunctionWithStartSpeed:(double)arg1 endSpeed:(double)arg2 duration:(double)arg3 distance:(double)arg4;
- (void)recycleItem:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id /* block */)onBulletFired;
- (void)setOnBulletFired:(id /* block */)arg1;
- (id /* block */)onBurstEnd;
- (void)setOnBurstEnd:(id /* block */)arg1;
- (unsigned long long)lineCount;
- (void)setLineCount:(unsigned long long)arg1;
- (double)lineHeight;
- (void)setLineHeight:(double)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (id)styleConfig;
- (void)setStyleConfig:(id)arg1;
- (id)laneTops;
- (void)setLaneTops:(id)arg1;
- (id)laneLastDeparture;
- (void)setLaneLastDeparture:(id)arg1;
- (id)shuffledLaneIndexes;
- (void)setShuffledLaneIndexes:(id)arg1;
- (id)flyingItems;
- (void)setFlyingItems:(id)arg1;
- (BOOL)pressing;
- (void)setPressing:(BOOL)arg1;
- (id)burstTimer;
- (void)setBurstTimer:(id)arg1;
- (id)burstContent;
- (void)setBurstContent:(id)arg1;
- (unsigned long long)burstFiredCount;
- (void)setBurstFiredCount:(unsigned long long)arg1;
- (id)motionProfile;
- (void)setMotionProfile:(id)arg1;
- (void).cxx_destruct;
@end
