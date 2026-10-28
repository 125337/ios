@interface NativeDecoder : NSObject
+ (CGColorSpace *)colorSpaceGetDeviceRGB;
+ (BOOL)CGImageContainsAlpha:(CGImage *)arg1;
+ (unsigned long long)pixelFormatOfImageRef:(CGImage *)arg1;
+ (id)createUIImage:(id)arg1 maxWidth:(int)arg2 maxHeight:(int)arg3;
+ (int)Flutter_nativeDecoderCreate:(id)arg1 maxWidth:(int)arg2 maxHeight:(int)arg3;
+ (int)Flutter_nativeDecoderGetFrameCount:(int)arg1;
+ (struct *)Flutter_nativeDecoderGetFrame:(int)arg1 frameIndex:(int)arg2;
+ (BOOL)Flutter_nativeDecoderReleaseFrameData:(int)arg1 frameInfo:(struct *)arg2;
+ (BOOL)Flutter_nativeDecoderReleaseDecoder:(int)arg1;
+ (void)lsof;
@end
