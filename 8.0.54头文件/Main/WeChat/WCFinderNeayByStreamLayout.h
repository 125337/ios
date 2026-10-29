@interface WCFinderNeayByStreamLayout : UICollectionViewLayout
{
    id <WCFinderNeayByStreamLayoutDelegate> _delegate; // +0x8
    NSMutableArray * _attrsArr; // +0x10
    NSMutableArray * _columnHeights; // +0x18
    double _maxContentHeight; // +0x20
    NSMutableArray * _shouldAnimationArr; // +0x28
    NSMutableDictionary * _headerAttrsArr; // +0x30
    NSMutableDictionary * _footerAttrArr; // +0x38
    NSMutableDictionary * _cellAttrArr; // +0x40
}
- (id)attrsArr;
- (id)headerAttrsArr;
- (id)footerAttrArr;
- (id)cellAttrArr;
- (id)shouldAnimationArr;
- (id)columnHeights;
- (void)prepareLayout;
- (void)clearData;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeCollectionViewUpdates;
- (void)setupSectionHeader:(unsigned long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)setupSectionFooter:(unsigned long long)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)setupDecorationViewatIndexPath:(id)arg1 top:(double)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)maxYWithColumnHeights;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (void)invalidateLayout;
- (id)cellAttributeAtIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setAttrsArr:(id)arg1;
- (void)setColumnHeights:(id)arg1;
- (double)maxContentHeight;
- (void)setMaxContentHeight:(double)arg1;
- (void)setShouldAnimationArr:(id)arg1;
- (void)setHeaderAttrsArr:(id)arg1;
- (void)setFooterAttrArr:(id)arg1;
- (void)setCellAttrArr:(id)arg1;
- (void).cxx_destruct;
@end

