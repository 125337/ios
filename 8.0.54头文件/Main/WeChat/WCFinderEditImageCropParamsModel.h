@interface WCFinderEditImageCropParamsModel : NSObject
{
    CGRect _previewImageViewFrame; // +0x8
    CGRect _cropRectInImage; // +0x28
}
- (CGRect)convertCurRectToImage:(id)arg1;
- (CGRect)previewImageViewFrame;
- (void)setPreviewImageViewFrame:(CGRect)arg1;
- (CGRect)cropRectInImage;
- (void)setCropRectInImage:(CGRect)arg1;
@end

