@interface WCFImageUtil : NSObject
+ (long long)cgImageOrientToUI:(unsigned int)arg1;
+ (WCFImageMeta)imageMetaFromSource:(CGImageSource *)arg1;
+ (id)thubmnailForImageSource:(CGImageSource *)arg1 maxPixel:(double)arg2 scaleAspectFill:(BOOL)arg3 orientation:(long long)arg4 scale:(double)arg5;
+ (BOOL)enableScale;
+ (id)scaleImageData:(id)arg1 toSize:(CGSize)arg2 mode:(long long)arg3;
+ (id)scaleImageData:(id)arg1 toSize:(CGSize)arg2 mode:(long long)arg3 error:(id *)arg4;
+ (id)scaleImageFile:(id)arg1 toSize:(CGSize)arg2 mode:(long long)arg3;
+ (BOOL)isHighEndDevice;
+ (BOOL)fileExistsAtPath:(id)arg1;
+ (void)setEnableWideGamutConvert:(BOOL)arg1;
+ (BOOL)isDisplayP3Image:(CGImage *)arg1;
+ (CGImage *)fastConvert2sRGB:(CGImage *)arg1;
@end

