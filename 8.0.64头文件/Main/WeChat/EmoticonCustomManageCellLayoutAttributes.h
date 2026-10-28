@interface EmoticonCustomManageCellLayoutAttributes : UICollectionViewLayoutAttributes
{
    BOOL _shouldShowDivider; // +0x8
    BOOL _isScaled; // +0x9
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)shouldShowDivider;
- (void)setShouldShowDivider:(BOOL)arg1;
- (BOOL)isScaled;
- (void)setIsScaled:(BOOL)arg1;
@end
