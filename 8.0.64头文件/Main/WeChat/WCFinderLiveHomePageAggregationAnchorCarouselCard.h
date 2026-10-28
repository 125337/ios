@interface WCFinderLiveHomePageAggregationAnchorCarouselCard : WCFinderLiveHomePageAggregationBaseCard <InfiniteLoopContainerViewDelegate>
{
    InfiniteLoopContainerView * _loopPageView; // +0x8
    MMLiveColorfulLabel * _titleLabel; // +0x10
    MMTimer * _timer; // +0x18
}
- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithCard:(id)arg1;
- (double)pageHeight;
- (BOOL)isSmallScreen;
- (void)stopTimer;
- (void)startTimer;
- (void)changeToNextPage;
- (id)currentGroupEntryBuffer;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (void)containerView:(id)arg1 onTapItemAtIndex:(unsigned long long)arg2;
- (void)willDisplay;
- (void)didEndDisplay;
- (id)loopPageView;
- (void)setLoopPageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
