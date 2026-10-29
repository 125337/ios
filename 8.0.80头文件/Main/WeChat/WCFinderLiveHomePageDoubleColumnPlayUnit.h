@interface WCFinderLiveHomePageDoubleColumnPlayUnit : WCFinderLiveHomePageAutoPlayUnit
{
    BOOL _hasPlayUnitBefore; // +0x8
    NSIndexPath * _firstRowLeft; // +0x10
    NSIndexPath * _firstRowRight; // +0x18
    NSIndexPath * _secondRowLeft; // +0x20
    NSIndexPath * _secondRowRight; // +0x28
    double _firstRowExposeRatio; // +0x30
    double _secondRowExposeRatio; // +0x38
}
- (id)initWithSection:(unsigned long long)arg1 sectionVM:(id)arg2;
- (id)currentPlayingIndexPaths;
- (BOOL)containIndexPath:(id)arg1;
- (BOOL)isDoubleRowMode;
- (void)removePlayingIndexPath:(id)arg1;
- (id)description;
- (id)adjustAndReplenish;
- (id)adjustAndReplenishWithDeleteIndexPath:(id)arg1;
- (id)firstRowLeft;
- (void)setFirstRowLeft:(id)arg1;
- (id)firstRowRight;
- (void)setFirstRowRight:(id)arg1;
- (id)secondRowLeft;
- (void)setSecondRowLeft:(id)arg1;
- (id)secondRowRight;
- (void)setSecondRowRight:(id)arg1;
- (double)firstRowExposeRatio;
- (void)setFirstRowExposeRatio:(double)arg1;
- (double)secondRowExposeRatio;
- (void)setSecondRowExposeRatio:(double)arg1;
- (BOOL)hasPlayUnitBefore;
- (void)setHasPlayUnitBefore:(BOOL)arg1;
- (void).cxx_destruct;
@end
