@interface MMLivePivotView : UICollectionViewLayout <UICollectionViewDataSource>
{
    unsigned long long _recommendationLoadingState; // +0x8
    unsigned long long _historyLoadingState; // +0x10
    id <MMLivePivotViewDelegate> _delegate; // +0x18
    MMLivePivotFooterView * _footerView; // +0x20
    MMLivePivotFooterView * _headerView; // +0x28
}
- (id)initWithDelegate:(id)arg1;
- (void)setRecommendationLoadingState:(unsigned long long)arg1;
- (void)setHistoryLoadingState:(unsigned long long)arg1;
- (BOOL)useSkeleton;
- (id)getContainerWindow;
- (CGSize)cellSize;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)headerLayoutAttributesWithCellSize:(CGSize)arg1;
- (id)skeletonLayoutAttributesAtIndexPath:(id)arg1 cellSize:(CGSize)arg2;
- (id)footerLayoutAttributesAfterNumberOfCells:(unsigned long long)arg1 cellSize:(CGSize)arg2;
- (unsigned long long)recommendationLoadingState;
- (unsigned long long)historyLoadingState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void).cxx_destruct;
@end

