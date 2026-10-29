@interface TPImageUtil : NSObject
+ (id)imageFromCGImageRef:(CGImage *)arg1;
+ (id)getImageFromRGB24:(char *)arg1 width:(int)arg2 height:(int)arg3;
+ (id)getImageFromRGBA:(char *)arg1 width:(int)arg2 height:(int)arg3;
+ (id)image:(id)arg1 rotation:(int)arg2;
+ (id)image:(id)arg1 scaleToSize:(CGSize)arg2;
+ (id)sharedContext;
+ (id)getImageFromCVPixelBuffer:(__CVBuffer *)arg1;
@end
