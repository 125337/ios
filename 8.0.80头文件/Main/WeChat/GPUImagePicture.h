@interface GPUImagePicture : GPUImageOutput
{
    CGSize pixelSizeOfImage; // +0x70
    BOOL hasProcessedImage; // +0x80
    NSObject<OS_dispatch_semaphore> * imageUpdateSemaphore; // +0x88
}
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithCGImage:(CGImage *)arg1;
- (id)initWithImage:(id)arg1 smoothlyScaleOutput:(BOOL)arg2;
- (id)initWithCGImage:(CGImage *)arg1 smoothlyScaleOutput:(BOOL)arg2;
- (id)initWithImage:(id)arg1 removePremultiplication:(BOOL)arg2;
- (id)initWithCGImage:(CGImage *)arg1 removePremultiplication:(BOOL)arg2;
- (id)initWithImage:(id)arg1 smoothlyScaleOutput:(BOOL)arg2 removePremultiplication:(BOOL)arg3;
- (id)initWithCGImage:(CGImage *)arg1 smoothlyScaleOutput:(BOOL)arg2 removePremultiplication:(BOOL)arg3;
- (void)dealloc;
- (void)removeAllTargets;
- (void)processImage;
- (BOOL)processImageWithCompletionHandler:(id /* block */)arg1;
- (void)processImageUpToFilter:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (CGSize)outputImageSize;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void).cxx_destruct;
@end
