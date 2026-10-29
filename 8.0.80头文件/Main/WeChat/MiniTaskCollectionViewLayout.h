@interface MiniTaskCollectionViewLayout : UICollectionViewLayout
{
    NSMutableSet * _changedCells; // +0x8
    id <MiniTaskCollectionViewLayoutDelegate> _delegate; // +0x10
    double _collectionContentHeight; // +0x18
    NSMutableDictionary * _itemAttributes; // +0x20
    NSMutableArray * _headerAttrs; // +0x28
    NSMutableDictionary * _footerAttrs; // +0x30
}
- (id)init;
- (CGSize)itemSizeForIndexPath:(id)arg1;
- (BOOL)useAdaptiveCardGrid;
- (double)cardContentWidth;
- (long long)preferredCardColumnCount;
- (double)cardWidthForColumnCount:(long long)arg1;
- (long long)cardColumnCount;
- (double)cardWidth;
- (double)cardColumnSpacing;
- (void)prepareLayout;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)calculateLayoutAttributesForItemAtIndexPath:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeCollectionViewUpdates;
- (CGRect)frameForItemAtIndexPath:(id)arg1;
- (id)firstRowCardFramesWithItemCount:(long long)arg1;
- (CGSize)sizeForCellSnapshot;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)stringFromIndexPath:(id)arg1;
- (BOOL)isOutdateSectionEmpty;
- (BOOL)isSectionCanLoadMore:(long long)arg1;
- (BOOL)shouldShowSectionHeader:(long long)arg1;
- (id)changedCells;
- (void)setChangedCells:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)collectionContentHeight;
- (void)setCollectionContentHeight:(double)arg1;
- (id)itemAttributes;
- (void)setItemAttributes:(id)arg1;
- (id)headerAttrs;
- (void)setHeaderAttrs:(id)arg1;
- (id)footerAttrs;
- (void)setFooterAttrs:(id)arg1;
- (void).cxx_destruct;
@end
