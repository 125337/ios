@interface WCFinderStreamLayout : UICollectionViewLayout
{
    BOOL _sectionHeadersPinToVisibleBounds; // +0x8
    BOOL _sectionFootersPinToVisibleBounds; // +0x9
    unsigned long long _columnCount; // +0x10
    double _cellHeight; // +0x18
    long long _crossPinHeaderIndex; // +0x20
    NSValue * _contentInsetValue; // +0x28
    NSMutableDictionary * _caches; // +0x30
    CGSize _cellSpace; // +0x38
    CGSize _minSize; // +0x48
    UIEdgeInsets _cellEdgeInsets; // +0x58
    UIEdgeInsets _headerEdgeInsets; // +0x78
    UIEdgeInsets _footerEdgeInsets; // +0x98
    UIEdgeInsets _decorationEdgeInsets; // +0xb8
}
+ (Class)invalidationContextClass;
- (id)init;
- (id)delegate;
- (double)contentHeightToSection:(double)arg1;
- (unsigned long long)numberOfSections;
- (BOOL)headerPinToVisibleBoundsInSection:(unsigned long long)arg1;
- (BOOL)footerPinToVisibleBoundsInSection:(unsigned long long)arg1;
- (void)prepareLayout;
- (void)prepareLayoutForSection:(unsigned long long)arg1;
- (void)prepareHeaderLayoutForSection:(unsigned long long)arg1;
- (long long)cellCountForSection:(unsigned long long)arg1;
- (void)prepareCellLayoutForSection:(unsigned long long)arg1;
- (void)prepareFooterLayoutForSection:(unsigned long long)arg1;
- (void)prepareDecorationLayoutForSection:(unsigned long long)arg1;
- (id)copyAttributes:(id)arg1 withDeltaTop:(double)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (unsigned long long)topVisibleSectionInBounds:(CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)invalidationContextForBoundsChange:(CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateLayout;
- (unsigned long long)columnCount;
- (void)setColumnCount:(unsigned long long)arg1;
- (CGSize)cellSpace;
- (void)setCellSpace:(CGSize)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (UIEdgeInsets)cellEdgeInsets;
- (void)setCellEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)headerEdgeInsets;
- (void)setHeaderEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)footerEdgeInsets;
- (void)setFooterEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)decorationEdgeInsets;
- (void)setDecorationEdgeInsets:(UIEdgeInsets)arg1;
- (BOOL)sectionHeadersPinToVisibleBounds;
- (void)setSectionHeadersPinToVisibleBounds:(BOOL)arg1;
- (BOOL)sectionFootersPinToVisibleBounds;
- (void)setSectionFootersPinToVisibleBounds:(BOOL)arg1;
- (long long)crossPinHeaderIndex;
- (void)setCrossPinHeaderIndex:(long long)arg1;
- (id)contentInsetValue;
- (void)setContentInsetValue:(id)arg1;
- (CGSize)minSize;
- (void)setMinSize:(CGSize)arg1;
- (id)caches;
- (void)setCaches:(id)arg1;
- (void).cxx_destruct;
@end

