@interface WCFinderEditCropData : NSObject
{
    CGPoint _previewScale; // +0x8
    CGRect _cropRectInPreview; // +0x18
}
- (id)initWithVideoPreviewOriginSize:(CGSize)arg1 resultSize:(CGSize)arg2 cropRect:(CGRect)arg3;
- (CGRect)cropRectInPreview;
- (void)setCropRectInPreview:(CGRect)arg1;
- (CGPoint)previewScale;
- (void)setPreviewScale:(CGPoint)arg1;
@end
