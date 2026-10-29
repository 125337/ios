@interface WCFinderCarouselView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _endless; // +0x8
    unsigned long long _style; // +0x10
    id <WCFinderCarouseDelegate> _delegate; // +0x18
    id <WCFinderCarouselDatasource> _dataSource; // +0x20
    WCFinderCarouselFlowLayout * _flowLayout; // +0x28
    WCFinderCarouselCollectionView * _carouselView; // +0x30
    long long _numbers; // +0x38
    NSIndexPath * _currentIndexPath; // +0x40
    long long _currentIndex; // +0x48
}
+ (double)displayHeightWithWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1 flowLayout:(id)arg2;
- (void)configureView;
- (void)registerViewClass:(Class)arg1 identifier:(id)arg2;
- (void)freshCarousel;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)cusScrollViewWillBeginDecelerating:(BOOL)arg1 scroll:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)cusScrollAnimationEnd:(id)arg1;
- (id)originIndexPath;
- (void)checkOutofBounds;
- (long long)caculateIndex:(long long)arg1;
- (void)adjustErrorCell:(BOOL)arg1;
- (void)velocityZero;
- (void)nextCell;
- (void)scrollTo:(long long)arg1 animation:(BOOL)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setEndless:(BOOL)arg1;
- (id)carouselView;
- (unsigned long long)style;
- (long long)numbers;
- (long long)infactNumbers;
- (void)setStyle:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (BOOL)endless;
- (void)setCarouselView:(id)arg1;
- (void)setNumbers:(long long)arg1;
- (id)currentIndexPath;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (void).cxx_destruct;
@end

