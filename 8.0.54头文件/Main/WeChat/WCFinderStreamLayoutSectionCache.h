@interface WCFinderStreamLayoutSectionCache : NSObject
{
    double _headerHeight; // +0x8
    double _cellsHeight; // +0x10
    double _footerHeight; // +0x18
    UICollectionViewLayoutAttributes * _headerAttr; // +0x20
    NSMutableDictionary * _cellsAttr; // +0x28
    UICollectionViewLayoutAttributes * _footerAttr; // +0x30
    UICollectionViewLayoutAttributes * _decorationAttr; // +0x38
}
- (id)init;
- (double)sectionHeight;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1;
- (double)headerHeight;
- (void)setHeaderHeight:(double)arg1;
- (double)cellsHeight;
- (void)setCellsHeight:(double)arg1;
- (double)footerHeight;
- (void)setFooterHeight:(double)arg1;
- (id)headerAttr;
- (void)setHeaderAttr:(id)arg1;
- (id)cellsAttr;
- (void)setCellsAttr:(id)arg1;
- (id)footerAttr;
- (void)setFooterAttr:(id)arg1;
- (id)decorationAttr;
- (void)setDecorationAttr:(id)arg1;
- (void).cxx_destruct;
@end

