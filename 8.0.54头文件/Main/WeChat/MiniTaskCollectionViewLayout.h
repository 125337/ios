@interface MiniTaskCollectionViewLayout : UICollectionViewLayout
{
    NSMutableSet * _changedCells; // +0x8
    id <MiniTaskCollectionViewLayoutDelegate> _delegate; // +0x10
    double _viewHeight; // +0x18
    double _normalItemHeight; // +0x20
    NSMutableDictionary * _itemAttributes; // +0x28
    NSMutableArray * _headerAttrs; // +0x30
    NSMutableDictionary * _footerAttrs; // +0x38
    CGSize _normalItemSize; // +0x40
    CGSize _outdateItemSize; // +0x50
    CGSize _scheduleItemSize; // +0x60
}
- (id)init;
- (void)prepareLayout;
- (void)preCalculatePropertiesForLayout;
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
- (double)contentHeightForSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)stringFromIndexPath:(id)arg1;
- (BOOL)isOutdateSectionEmpty;
- (BOOL)isSectionCanLoadMore:(long long)arg1;
- (BOOL)shouldShowSectionHeader:(long long)arg1;
- (id)changedCells;
- (void)setChangedCells:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)normalItemSize;
- (void)setNormalItemSize:(CGSize)arg1;
- (CGSize)outdateItemSize;
- (void)setOutdateItemSize:(CGSize)arg1;
- (CGSize)scheduleItemSize;
- (void)setScheduleItemSize:(CGSize)arg1;
- (double)viewHeight;
- (void)setViewHeight:(double)arg1;
- (double)normalItemHeight;
- (void)setNormalItemHeight:(double)arg1;
- (id)itemAttributes;
- (void)setItemAttributes:(id)arg1;
- (id)headerAttrs;
- (void)setHeaderAttrs:(id)arg1;
- (id)footerAttrs;
- (void)setFooterAttrs:(id)arg1;
- (void).cxx_destruct;
@end

