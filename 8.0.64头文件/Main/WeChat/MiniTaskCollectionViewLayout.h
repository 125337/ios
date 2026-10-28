@interface MiniTaskCollectionViewLayout : UICollectionViewLayout
{
    BOOL _singleRowStyle; // +0x8
    NSMutableSet * _changedCells; // +0x10
    id <MiniTaskCollectionViewLayoutDelegate> _delegate; // +0x18
    double _collectionContentHeight; // +0x20
    NSMutableDictionary * _itemAttributes; // +0x28
    NSMutableArray * _headerAttrs; // +0x30
    NSMutableDictionary * _footerAttrs; // +0x38
}
- (id)init;
- (CGSize)itemSizeForIndexPath:(id)arg1;
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
- (CGSize)sizeForCellSnapshot;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)stringFromIndexPath:(id)arg1;
- (BOOL)isOutdateSectionEmpty;
- (BOOL)isSectionCanLoadMore:(long long)arg1;
- (BOOL)shouldShowSectionHeader:(long long)arg1;
- (BOOL)singleRowStyle;
- (void)setSingleRowStyle:(BOOL)arg1;
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
