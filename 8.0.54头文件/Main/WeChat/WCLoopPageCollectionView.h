@interface WCLoopPageCollectionView : UIView <UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCLoopPageCollectionViewLayoutDelegate>
{
    BOOL _forbiddenNextAutoChange; // +0x8
    id <WCLoopPageCollectionViewDataSource> _datasource; // +0x10
    id <WCLoopPageCollectionViewDelegate> _delegate; // +0x18
    UICollectionView * _collectionView; // +0x20
    WCLoopPageCollectionViewLayout * _collectionLayout; // +0x28
    unsigned long long _currentIndex; // +0x30
    NSArray * _cellList; // +0x38
    NSArray * _cellWidthList; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configCollectionViewWithFrame:(CGRect)arg1;
- (void)layoutOnDidSetup;
- (void)changeToNext;
- (void)reloadData;
- (void)genCellList;
- (void)genCellWidthList;
- (unsigned long long)getPrevCellIndex;
- (unsigned long long)getNextCellIndex;
- (unsigned long long)getLastCellIndex;
- (double)currentIndexCellOffsetX;
- (double)nextIndexCellOffsetX;
- (double)prevIndexCellOffsetX;
- (double)prevIndexCellWidth;
- (double)currentIndexCellWidth;
- (unsigned long long)numberOfItems;
- (id)viewForItemAtIndex:(unsigned long long)arg1;
- (double)widthForViewAtIndex:(unsigned long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)updateOffset;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)lastItemWidth;
- (id)datasource;
- (void)setDatasource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id)cellList;
- (void)setCellList:(id)arg1;
- (id)cellWidthList;
- (void)setCellWidthList:(id)arg1;
- (BOOL)forbiddenNextAutoChange;
- (void)setForbiddenNextAutoChange:(BOOL)arg1;
- (void).cxx_destruct;
@end

