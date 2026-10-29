@interface ScanQRCodeDataUsedInMultiCode : NSObject
{
    id /* block */ _block; // +0x8
    UIImage * _clippedImage; // +0x10
    CGPoint _normalLongPressPoint; // +0x18
    CGRect _visibleRect; // +0x28
    CGAffineTransform _normalizedImageToOverlay; // +0x48
    CGAffineTransform _normalizedImageToImageView; // +0x78
}
+ (CGRect)imageRectForSize:(CGSize)arg1 inBounds:(CGRect)arg2 contentMode:(long long)arg3;
+ (id)dataWithImage:(id)arg1 imageView:(id)arg2 viewportView:(id)arg3 overlayView:(id)arg4 longPressPoint:(CGPoint)arg5 allowClipping:(BOOL)arg6;
+ (id)dataWithImage:(id)arg1 aspectFitInView:(id)arg2;
+ (id)dataWithImage:(id)arg1 imageView:(id)arg2 viewportView:(id)arg3 overlayView:(id)arg4 longPressPoint:(CGPoint)arg5 allowClipping:(BOOL)arg6 contentMode:(long long)arg7;
- (BOOL)isClipImage;
- (CGPoint)normalizedCenterForMarkDotInfo:(id)arg1;
- (CGPoint)imageViewCenterForMarkDotInfo:(id)arg1;
- (id)convertedMarkDotInfoList:(id)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (CGPoint)normalLongPressPoint;
- (void)setNormalLongPressPoint:(CGPoint)arg1;
- (CGRect)visibleRect;
- (void)setVisibleRect:(CGRect)arg1;
- (CGAffineTransform)normalizedImageToOverlay;
- (void)setNormalizedImageToOverlay:(CGAffineTransform)arg1;
- (id)clippedImage;
- (void)setClippedImage:(id)arg1;
- (CGAffineTransform)normalizedImageToImageView;
- (void)setNormalizedImageToImageView:(CGAffineTransform)arg1;
- (void).cxx_destruct;
@end
