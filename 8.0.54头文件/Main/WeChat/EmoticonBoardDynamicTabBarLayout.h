@interface EmoticonBoardDynamicTabBarLayout : UICollectionViewLayout
{
    BOOL _useMaskSelection; // +0x8
    double _itemSpacing; // +0x10
    UIColor * _backgroundColor; // +0x18
    NSIndexPath * _maskSelectedIndexPath; // +0x20
    NSMutableArray * _indexPaths; // +0x28
    CGSize _itemSize; // +0x30
    UIEdgeInsets _inset; // +0x40
}
- (id)init;
- (void)setBackgroundColor:(id)arg1;
- (void)setUseMaskSelection:(BOOL)arg1;
- (void)setMaskSelectedIndexPath:(id)arg1;
- (void)prepareLayout;
- (CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)virtualIndexForX:(double)arg1;
- (id)getBackgroundView;
- (void)updateBackgroundView;
- (id)getSelectionMaskLayerAtIndexPath:(id)arg1;
- (CGSize)itemSize;
- (void)setItemSize:(CGSize)arg1;
- (UIEdgeInsets)inset;
- (void)setInset:(UIEdgeInsets)arg1;
- (double)itemSpacing;
- (void)setItemSpacing:(double)arg1;
- (id)backgroundColor;
- (BOOL)useMaskSelection;
- (id)maskSelectedIndexPath;
- (id)indexPaths;
- (void)setIndexPaths:(id)arg1;
- (void).cxx_destruct;
@end

