@interface GCCollectionWaterfallLayout : UICollectionViewFlowLayout
{
    id <GCCollectionWaterfallLayoutProtocol> _delegate; // +0x8
    unsigned long long _columns; // +0x10
    double _columnSpacing; // +0x18
    double _itemSpacing; // +0x20
    NSMutableArray * _attributesArray; // +0x28
    NSMutableDictionary * _attributesCacheDic; // +0x30
    NSMutableDictionary * _supplementaryAttributesCacheDic; // +0x38
    NSMutableArray * _columnHeights; // +0x40
    UIEdgeInsets _insets; // +0x48
}
- (id)init;
- (void)prepareLayout;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (void)invalidateLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (long long)columnOfLessHeight;
- (long long)columnOfMostHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)columns;
- (void)setColumns:(unsigned long long)arg1;
- (double)columnSpacing;
- (void)setColumnSpacing:(double)arg1;
- (double)itemSpacing;
- (void)setItemSpacing:(double)arg1;
- (UIEdgeInsets)insets;
- (void)setInsets:(UIEdgeInsets)arg1;
- (id)attributesArray;
- (void)setAttributesArray:(id)arg1;
- (id)attributesCacheDic;
- (void)setAttributesCacheDic:(id)arg1;
- (id)supplementaryAttributesCacheDic;
- (void)setSupplementaryAttributesCacheDic:(id)arg1;
- (id)columnHeights;
- (void)setColumnHeights:(id)arg1;
- (void).cxx_destruct;
@end

