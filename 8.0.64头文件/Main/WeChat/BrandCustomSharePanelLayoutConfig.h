@interface BrandCustomSharePanelLayoutConfig : NSObject
{
    double _itemEdgeInset; // +0x8
    double _minimumItemSpacing; // +0x10
    double _itemLineSpacing; // +0x18
    double _headerSpacing; // +0x20
    double _footerSpacing; // +0x28
    double _sectionSpacing; // +0x30
    CGSize _iconSize; // +0x38
}
+ (id)standardConfig;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (double)itemEdgeInset;
- (void)setItemEdgeInset:(double)arg1;
- (double)minimumItemSpacing;
- (void)setMinimumItemSpacing:(double)arg1;
- (double)itemLineSpacing;
- (void)setItemLineSpacing:(double)arg1;
- (double)headerSpacing;
- (void)setHeaderSpacing:(double)arg1;
- (double)footerSpacing;
- (void)setFooterSpacing:(double)arg1;
- (double)sectionSpacing;
- (void)setSectionSpacing:(double)arg1;
@end
