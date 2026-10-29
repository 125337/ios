@interface CIImage (PixelBufCached)
+ (id)imageWithColor:(id)arg1 size:(CGSize)arg2;
- (__CVBuffer *)videoCompositionCopyCurrentPixelBuffer;
- (__CVBuffer *)videoCompositionCopyImagePixelBuffer:(id)arg1;
- (__CVBuffer *)videoCompositinRenderNewPixelBufferWithSize:(CGSize)arg1 ciContext:(id)arg2;
- (void)toMetalTexture:(__CVBuffer * *)arg1 ciContext:(id)arg2 cache:(__CVMetalTextureCache *)arg3;
- (id)wc_imageByCroppingToAspectRatio:(double)arg1;
- (id)flipYCoordinate;
- (id)applyAlpha:(double)arg1;
- (id)safeApplyTransform:(CGAffineTransform)arg1;
- (__CVBuffer *)tav_copyPixelBuffer;
- (__CVBuffer *)tav_copyPixelBufferWithRenderSize:(CGSize)arg1;
- (__CVBuffer *)tav_renderNewPixelBufferWithSize:(CGSize)arg1;
- (__CVBuffer *)tav_copyCurrentPixelBuffer;
- (__CVBuffer *)getRGBPixelBufCached;
@end

