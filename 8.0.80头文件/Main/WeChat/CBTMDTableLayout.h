@interface CBTMDTableLayout : UICollectionViewLayout
{
    CBTMDTableDataController * _dataController; // +0x8
    NSMutableDictionary * _attributesCache; // +0x10
    NSMutableArray * _rowYOffsets; // +0x18
    CGSize _contentSize; // +0x20
}
- (id)init;
- (void)prepareLayout;
- (void)buildAllLayoutAttributes;
- (void)invalidateLayoutForIndexPath:(id)arg1;
- (void)invalidateLayoutForSection:(unsigned long long)arg1;
- (void)invalidateLayoutForInsertedSections:(id)arg1;
- (void)invalidateLayoutForColumn:(unsigned long long)arg1;
- (void)invalidateLayoutFromRow:(unsigned long long)arg1;
- (double)yOffsetForSection:(unsigned long long)arg1;
- (double)xOffsetForColumn:(unsigned long long)arg1;
- (void)updateContentSize;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)dataController;
- (void)setDataController:(id)arg1;
- (id)attributesCache;
- (void)setAttributesCache:(id)arg1;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (id)rowYOffsets;
- (void)setRowYOffsets:(id)arg1;
- (void).cxx_destruct;
@end
