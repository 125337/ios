@interface TXCImageUtils : NSObject
+ (CGImage *)cgImageFromImage:(id)arg1;
+ (id)imageFromCgImage:(CGImage *)arg1;
+ (BOOL)isMirrored:(unsigned int)arg1;
+ (BOOL)isLandscape:(unsigned int)arg1;
+ (id)imageFromMTLTexture:(id)arg1;
+ (id)createImageWithColor:(id)arg1 width:(int)arg2 height:(int)arg3;
+ (id)createImageFromImage:(id)arg1 withAngle:(double)arg2;
@end

