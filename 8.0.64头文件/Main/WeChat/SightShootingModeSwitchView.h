@interface SightShootingModeSwitchView : MMUIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    NSArray * _dataSource; // +0x8
    id <SightShootingModeSwitchViewDelegate> _delegate; // +0x10
    UICollectionView * _collectionView; // +0x18
    MMUIView * _dotView; // +0x20
    unsigned long long _currentShootingMode; // +0x28
    unsigned long long _lastShootingMode; // +0x30
}
+ (double)viewH;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)reloadData;
- (void)prepareToScroll;
- (void)setToTemplateShootingMode;
- (void)scrollToIndex:(unsigned long long)arg1;
- (id)collectionView;
- (id)dotView;
- (unsigned long long)getCurrentShootingMode;
- (unsigned long long)getLastShootingMode;
- (void)updateTitleStats;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (CGPoint)nearestTargetOffsetForOffset:(CGPoint)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setDotView:(id)arg1;
- (unsigned long long)currentShootingMode;
- (void)setCurrentShootingMode:(unsigned long long)arg1;
- (unsigned long long)lastShootingMode;
- (void)setLastShootingMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
