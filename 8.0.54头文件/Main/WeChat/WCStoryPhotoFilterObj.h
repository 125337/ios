@interface WCStoryPhotoFilterObj : NSObject
{
    CIContext * _context; // +0x8
    EAGLContext * _eaglContext; // +0x10
}
- (id)init;
- (void)dealloc;
- (id)createBlurImageBackgroundWithOriginalImage:(id)arg1 targetSize:(CGSize)arg2 blurRadius:(double)arg3;
- (id)createPureBlurImageBackgroundWithOriginalImage:(id)arg1 targetSize:(CGSize)arg2;
- (id)creatBlurBackgound:(id)arg1 blurRadius:(double)arg2;
- (id)creatBlurBackgound:(id)arg1 blurRadius:(double)arg2 offset:(double)arg3;
- (id)scalingImage:(id)arg1 toSize:(CGSize)arg2;
- (id)compositeBlurImage:(id)arg1 originalImage:(id)arg2;
- (id)imageByCroppingWithImage:(id)arg1 targetSize:(CGSize)arg2;
- (id)imageByCroppingWithImage:(id)arg1 targetRect:(CGRect)arg2;
- (CGSize)getImageSizeToScaleAspectFillSize:(id)arg1 targetSize:(CGSize)arg2;
- (CGSize)getImageSizeToScaleAspectFitSize:(id)arg1 targetSize:(CGSize)arg2;
- (CGRect)getBlurRegionWithBlurSize:(CGSize)arg1 targetSize:(CGSize)arg2 originalImageSize:(CGSize)arg3;
- (id)context;
- (void)setContext:(id)arg1;
- (id)eaglContext;
- (void)setEaglContext:(id)arg1;
- (void).cxx_destruct;
@end

