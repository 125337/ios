@interface MMUIImageView : UIImageView
{
    BOOL _isTopAlignScaleImage; // +0x8
    BOOL _isCenterCropScaleImage; // +0x9
}
- (void)setImage:(id)arg1;
- (id)scaleImage:(id)arg1;
- (id)topAlignScaleImage:(id)arg1;
- (id)centerCropScaleImage:(id)arg1;
- (BOOL)isTopAlignScaleImage;
- (void)setIsTopAlignScaleImage:(BOOL)arg1;
- (BOOL)isCenterCropScaleImage;
- (void)setIsCenterCropScaleImage:(BOOL)arg1;
@end
