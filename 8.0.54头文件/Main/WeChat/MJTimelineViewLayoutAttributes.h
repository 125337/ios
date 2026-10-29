@interface MJTimelineViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    BOOL _disableImplicitAnimation; // +0x8
    CGRect _modelFrame; // +0x10
    CGRect _leadingMaskFrame; // +0x30
    CGRect _trailingMaskFrame; // +0x50
}
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)disableImplicitAnimation;
- (void)setDisableImplicitAnimation:(BOOL)arg1;
- (CGRect)modelFrame;
- (void)setModelFrame:(CGRect)arg1;
- (CGRect)leadingMaskFrame;
- (void)setLeadingMaskFrame:(CGRect)arg1;
- (CGRect)trailingMaskFrame;
- (void)setTrailingMaskFrame:(CGRect)arg1;
@end

