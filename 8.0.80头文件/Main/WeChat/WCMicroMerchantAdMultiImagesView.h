@interface WCMicroMerchantAdMultiImagesView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _userInteracted; // +0x8
    BOOL _isRecentering; // +0x9
    BOOL _isUserDragging; // +0xa
    BOOL _needsInitialScroll; // +0xb
    double _scrollInterval; // +0x10
    double _cardVerticalPadding; // +0x18
    double _sideCardInset; // +0x20
    id <WCMicroMerchantAdMultiImagesViewDelegate> _delegate; // +0x28
    UICollectionView * _collectionView; // +0x30
    WCAdMultiImagesLayout * _carouselLayout; // +0x38
    NSArray * _images; // +0x40
    long long _realCount; // +0x48
    MMTimer * _animateTimer; // +0x50
    CADisplayLink * _displayLink; // +0x58
    double _animStartOffsetX; // +0x60
    double _animTargetOffsetX; // +0x68
    double _animStartTime; // +0x70
    long long _dragStartPage; // +0x78
    CGSize _lastLayoutSize; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupView;
- (void)dealloc;
- (void)setCardVerticalPadding:(double)arg1;
- (void)setSideCardInset:(double)arg1;
- (void)configureWithImages:(id)arg1;
- (void)resumeAutoScroll;
- (void)layoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onScrollingStopped;
- (void)scrollToMiddleGroupAnimated:(BOOL)arg1;
- (void)recenterIfNeeded;
- (double)scrollInterval;
- (void)startAutoScrollTimer;
- (void)endAutoScrollTimer;
- (void)autoScrollToNext;
- (void)displayLinkTick:(id)arg1;
- (void)stopDisplayLink;
- (void)setScrollInterval:(double)arg1;
- (double)cardVerticalPadding;
- (double)sideCardInset;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)carouselLayout;
- (void)setCarouselLayout:(id)arg1;
- (id)images;
- (void)setImages:(id)arg1;
- (long long)realCount;
- (void)setRealCount:(long long)arg1;
- (BOOL)userInteracted;
- (void)setUserInteracted:(BOOL)arg1;
- (id)animateTimer;
- (void)setAnimateTimer:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)animStartOffsetX;
- (void)setAnimStartOffsetX:(double)arg1;
- (double)animTargetOffsetX;
- (void)setAnimTargetOffsetX:(double)arg1;
- (double)animStartTime;
- (void)setAnimStartTime:(double)arg1;
- (BOOL)isRecentering;
- (void)setIsRecentering:(BOOL)arg1;
- (long long)dragStartPage;
- (void)setDragStartPage:(long long)arg1;
- (BOOL)isUserDragging;
- (void)setIsUserDragging:(BOOL)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (BOOL)needsInitialScroll;
- (void)setNeedsInitialScroll:(BOOL)arg1;
- (void).cxx_destruct;
@end
