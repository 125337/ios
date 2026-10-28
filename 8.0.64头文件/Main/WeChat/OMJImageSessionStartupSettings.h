@interface OMJImageSessionStartupSettings : NSObject
{
    CGSize _previewLimitedPixelSize; // +0x8
    CGSize _thumbnailSize; // +0x18
}
- (id)initWithPreviewLimitedPixelSize:(CGSize)arg1 thumbnailSize:(CGSize)arg2;
- (id)description;
- (CGSize)previewLimitedPixelSize;
- (CGSize)thumbnailSize;
@end
