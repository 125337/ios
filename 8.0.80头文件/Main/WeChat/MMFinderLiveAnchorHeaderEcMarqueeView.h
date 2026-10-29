@interface MMFinderLiveAnchorHeaderEcMarqueeView : UIView
{
    BOOL _shouldScroll; // +0x8
    BOOL _isWaiting; // +0x9
    unsigned int _version; // +0xc
    unsigned int _waitTimeMs; // +0x10
    unsigned int _stopTimeMs; // +0x14
    double _singleContentWidth; // +0x18
    MMFinderLiveAnchorHeaderEcMarqueeContentView * _currentView; // +0x20
    MMFinderLiveAnchorHeaderEcMarqueeContentView * _nextView; // +0x28
    NSSet * _allowedTypes; // +0x30
    NSArray * _currentDataList; // +0x38
    NSArray * _pendingDataList; // +0x40
    UIViewPropertyAnimator * _currentAnimator; // +0x48
    id /* block */ _pendingDelayBlock; // +0x50
    CAGradientLayer * _fadeMaskLayer; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)hasData;
- (void)reset;
- (void)updateMarquee:(id)arg1;
- (void)stopAnimation;
- (void)refreshFontSize;
- (void)refreshShouldScrollAndAnimate;
- (void)updateFadeMaskMode:(unsigned long long)arg1;
- (unsigned long long)currentFadeMaskMode;
- (void)applyPendingByRebuildingCurrent;
- (id)filterDataList:(id)arg1;
- (void)runFirstRoundEntry;
- (void)runFirstRoundScroll;
- (void)enterLoopRound;
- (void)prepareNextViewForUpcomingRound;
- (void)runLoopScrollPhase1;
- (void)runLoopWaitStop;
- (void)runLoopScrollPhase2;
- (void)handleLoopReset;
- (void)animateCurrentToX:(double)arg1 nextToX:(double)arg2 completion:(id /* block */)arg3;
- (void)scheduleAfterDelay:(double)arg1 block:(id /* block */)arg2;
- (double)singleContentWidth;
- (void)setSingleContentWidth:(double)arg1;
- (id)currentView;
- (void)setCurrentView:(id)arg1;
- (id)nextView;
- (void)setNextView:(id)arg1;
- (id)allowedTypes;
- (void)setAllowedTypes:(id)arg1;
- (id)currentDataList;
- (void)setCurrentDataList:(id)arg1;
- (id)pendingDataList;
- (void)setPendingDataList:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)waitTimeMs;
- (void)setWaitTimeMs:(unsigned int)arg1;
- (unsigned int)stopTimeMs;
- (void)setStopTimeMs:(unsigned int)arg1;
- (BOOL)shouldScroll;
- (void)setShouldScroll:(BOOL)arg1;
- (BOOL)isWaiting;
- (void)setIsWaiting:(BOOL)arg1;
- (id)currentAnimator;
- (void)setCurrentAnimator:(id)arg1;
- (id /* block */)pendingDelayBlock;
- (void)setPendingDelayBlock:(id /* block */)arg1;
- (id)fadeMaskLayer;
- (void)setFadeMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
