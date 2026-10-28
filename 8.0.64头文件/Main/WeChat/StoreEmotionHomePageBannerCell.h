@interface StoreEmotionHomePageBannerCell : UICollectionViewCell <InfiniteLoopContainerViewDelegate>
{
    NSArray * _bannerList; // +0x8
    InfiniteLoopContainerView * _pageLoopView; // +0x10
    MMTimer * _timer; // +0x18
    id /* block */ _tapItemHandler; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)initTimer;
- (void)setBannerList:(id)arg1;
- (void)onLoop;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (void)containerView:(id)arg1 onTapItemAtIndex:(unsigned long long)arg2;
- (id)bannerList;
- (id)pageLoopView;
- (void)setPageLoopView:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id /* block */)tapItemHandler;
- (void)setTapItemHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
