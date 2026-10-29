@interface WCFinderLiveHomePageAggregationImageCard : WCFinderLiveHomePageAggregationBaseCard <InfiniteLoopContainerViewDelegate>
{
    UIView * _headInfoBgView; // +0x8
    InfiniteLoopContainerView * _loopPageView; // +0x10
    MMTimer * _timer; // +0x18
}
- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithCard:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)changeToNextPage;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (void)containerView:(id)arg1 onTapItemAtIndex:(unsigned long long)arg2;
- (void)willDisplay;
- (void)didEndDisplay;
- (id)headInfoBgView;
- (void)setHeadInfoBgView:(id)arg1;
- (id)loopPageView;
- (void)setLoopPageView:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
