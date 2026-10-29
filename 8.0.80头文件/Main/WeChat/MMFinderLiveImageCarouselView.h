@interface MMFinderLiveImageCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate>
{
    BOOL _isAnimating; // +0x8
    BOOL _isShowForClear; // +0x9
    BOOL _isScrolling; // +0xa
    BOOL _isForceDisplay; // +0xb
    UICollectionView * _collectionView; // +0x10
    long long _autoScrollCurrentIndex; // +0x18
    NSArray * _viewModelArr; // +0x20
    MMTimer * _timer; // +0x28
    double _scrollTimeInterval; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateViewModel:(id)arg1;
- (BOOL)checkViewModelNotEqual:(id)arg1;
- (void)tryUpdateCollectionView:(id)arg1;
- (void)updateScrollTimeIfNeeded:(double)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (void)operationViewShow;
- (void)operationViewHide;
- (id)collectionView;
- (void)invokeAutoScroll;
- (void)scrollCollectionViewToNext;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void)setCollectionView:(id)arg1;
- (long long)autoScrollCurrentIndex;
- (void)setAutoScrollCurrentIndex:(long long)arg1;
- (BOOL)isShowForClear;
- (void)setIsShowForClear:(BOOL)arg1;
- (id)viewModelArr;
- (void)setViewModelArr:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)isScrolling;
- (void)setIsScrolling:(BOOL)arg1;
- (double)scrollTimeInterval;
- (void)setScrollTimeInterval:(double)arg1;
- (BOOL)isForceDisplay;
- (void)setIsForceDisplay:(BOOL)arg1;
- (void).cxx_destruct;
@end
