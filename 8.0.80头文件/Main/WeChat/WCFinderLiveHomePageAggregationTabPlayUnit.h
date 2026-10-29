@interface WCFinderLiveHomePageAggregationTabPlayUnit : WCFinderLiveHomePageAutoPlayUnit
{
    BOOL _enableDoubleRow; // +0x8
    BOOL _forceSingleRow; // +0x9
    BOOL _hasPlayUnitBefore; // +0xa
    WCFinderLiveHomePageAggregationTabLiveStreamAdapter * _adapter; // +0x10
    WCFinderFeedFlowView * _outerFeedFlowView; // +0x18
    double _outerCollectionInsetTop; // +0x20
    double _outerTopHeaderViewHeight; // +0x28
    double _outerCollectionHeight; // +0x30
    double _secondRowExposeRatio; // +0x38
    NSMutableArray * _cachedVisibleIndexPaths; // +0x40
}
- (id)initWithSection:(unsigned long long)arg1 sectionVM:(id)arg2 adapter:(id)arg3;
- (id)currentPlayingIndexPaths;
- (void)updateVisibleIndexPaths:(BOOL)arg1;
- (BOOL)isDoubleRowMode;
- (id)description;
- (id)currentTabKey;
- (BOOL)hasSameIdentityAsUnit:(id)arg1;
- (BOOL)containIndexPath:(id)arg1;
- (void)removePlayingIndexPath:(id)arg1;
- (id)adjustAndReplenish;
- (id)adjustAndReplenishWithDeleteIndexPath:(id)arg1;
- (BOOL)enableDoubleRow;
- (void)setEnableDoubleRow:(BOOL)arg1;
- (BOOL)forceSingleRow;
- (void)setForceSingleRow:(BOOL)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id)outerFeedFlowView;
- (void)setOuterFeedFlowView:(id)arg1;
- (double)outerCollectionInsetTop;
- (void)setOuterCollectionInsetTop:(double)arg1;
- (double)outerTopHeaderViewHeight;
- (void)setOuterTopHeaderViewHeight:(double)arg1;
- (double)outerCollectionHeight;
- (void)setOuterCollectionHeight:(double)arg1;
- (double)secondRowExposeRatio;
- (void)setSecondRowExposeRatio:(double)arg1;
- (BOOL)hasPlayUnitBefore;
- (void)setHasPlayUnitBefore:(BOOL)arg1;
- (id)cachedVisibleIndexPaths;
- (void)setCachedVisibleIndexPaths:(id)arg1;
- (void).cxx_destruct;
@end
