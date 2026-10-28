@interface MMMultiSelectedContactCustomLayout : UICollectionViewFlowLayout
{
    double _itemSizeLen; // +0x8
    NSArray * _itemXPosArray; // +0x10
    NSArray * _finalLayoutAttributes; // +0x18
    NSMutableArray * _insertIndexPaths; // +0x20
    CGSize _conentSize; // +0x28
}
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (CGSize)collectionViewContentSize;
- (id)calcCenterLayoutItemXPos:(unsigned long long)arg1;
- (unsigned long long)maxCountInScreen;
- (void)calcCenterAligmentLayoutWithCurLayoutAttributes:(id)arg1 isDelete:(BOOL)arg2;
- (void)calcItemLayoutAttributesOriginXWithXPosArray:(id)arg1 layoutAttributes:(id)arg2;
- (double)itemSizeLen;
- (void)setItemSizeLen:(double)arg1;
- (id)itemXPosArray;
- (void)setItemXPosArray:(id)arg1;
- (id)finalLayoutAttributes;
- (void)setFinalLayoutAttributes:(id)arg1;
- (id)insertIndexPaths;
- (void)setInsertIndexPaths:(id)arg1;
- (CGSize)conentSize;
- (void)setConentSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
