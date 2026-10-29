@interface WCFinderLiveHomePageAggregationECGridCard : WCFinderLiveHomePageAggregationBaseCard <InfiniteLoopContainerViewDelegate, WCFinderLiveHomePageAggregationECGridGroupDelegate>
{
    MMLiveColorfulLabel * _titleLabel; // +0x8
    MMLiveColorfulLabel * _subTitleLabel; // +0x10
    InfiniteLoopContainerView * _loopPageView; // +0x18
    MMTimer * _timer; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (double)pageSize;
- (void)updateWithCard:(id)arg1;
- (void)layoutSubviews;
- (void)stopTimer;
- (void)startTimer;
- (void)changeToNextPage;
- (unsigned long long)currenLoopPageIndex;
- (id)currentGroupEntryBuffer;
- (id)currentGroupJumpBypassBuffer;
- (void)refreshHotSalePag;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (void)containerView:(id)arg1 onTapItemAtIndex:(unsigned long long)arg2;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)onAggregationECGridStartHotSellingAnimation:(id)arg1;
- (void)onAggregationECGridStopHotSellingAnimation:(id)arg1;
- (BOOL)enableAggregationECGridHotSellingAnimation:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)loopPageView;
- (void)setLoopPageView:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end

