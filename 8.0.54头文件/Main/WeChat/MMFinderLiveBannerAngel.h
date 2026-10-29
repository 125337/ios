@interface MMFinderLiveBannerAngel : ZZFLEXAngel <UICollectionViewDelegate>
{
    BOOL _isAnimation; // +0x8
    BOOL _disablePagAnimation; // +0x9
    BOOL _isInScrollAnimated; // +0xa
    id /* block */ _viewEventAction; // +0x10
    id <MMFinderLiveBannerAngelDelegate> _delegate; // +0x18
    id /* block */ _scrollAnimationCompleteAction; // +0x20
    MMFinderLiveBannerCellViewModel * _scrollingVM; // +0x28
}
+ (Class)cellClassWithBannerInfo:(id)arg1;
- (void)setBannerList:(id)arg1;
- (void)reloadData;
- (void)reloadOnScrollFinish;
- (BOOL)isInManualScroll;
- (id)bannerList;
- (id)bannerVMList;
- (long long)bannerCount;
- (long long)firstBannerUIIndex;
- (long long)lastBannerUIIndex;
- (void)fixBannerPositionIfNeed:(id)arg1;
- (void)deleteAnimatedFirstBanenr;
- (void)deleteAnimatedLastBanenr;
- (void)deleteAnimatedBanenr:(BOOL)arg1;
- (void)replaceAnimatedBanner:(id)arg1 lastBannerInfo:(id)arg2;
- (BOOL)showBannerInnerAnimationIfNeed:(id)arg1;
- (id)cellWithIndexPath:(id)arg1;
- (void)deleteBannerItem:(id)arg1 completeAction:(id /* block */)arg2;
- (void)setIsAnimation:(BOOL)arg1;
- (void)addNotifyBanner:(id)arg1 index:(long long)arg2;
- (void)deleteNotifyBanner:(id)arg1;
- (void)checkDeleteSameBanner;
- (id)currentDisplayCell;
- (void)scrollToPageIndex:(long long)arg1 animated:(BOOL)arg2 completeAction:(id /* block */)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onScrollComplete;
- (void)updateDisablePagAnimationSwitch:(BOOL)arg1;
- (BOOL)isAnimation;
- (id /* block */)viewEventAction;
- (void)setViewEventAction:(id /* block */)arg1;
- (BOOL)disablePagAnimation;
- (void)setDisablePagAnimation:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isInScrollAnimated;
- (void)setIsInScrollAnimated:(BOOL)arg1;
- (id /* block */)scrollAnimationCompleteAction;
- (void)setScrollAnimationCompleteAction:(id /* block */)arg1;
- (id)scrollingVM;
- (void)setScrollingVM:(id)arg1;
- (void).cxx_destruct;
@end

