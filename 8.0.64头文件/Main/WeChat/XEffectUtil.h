@interface XEffectUtil : NSObject
+ (id)bgraPixelBufferTo420fFormat:(__CVBuffer *)arg1;
+ (id)bgraPixelBuferFromImage:(id)arg1;
+ (id)imageFromBGRAPixelBuffer:(__CVBuffer *)arg1;
+ (id)imageFromBGRAPixelBuffer:(__CVBuffer *)arg1 outputSize:(CGSize)arg2;
+ (id)rotateBGRAPixelBuffer:(__CVBuffer *)arg1 orientation:(long long)arg2;
+ (id)cropBGRAPixelBuffer:(__CVBuffer *)arg1 rect:(CGRect)arg2;
+ (id)nv12PixelBufferToBGRAFormat:(__CVBuffer *)arg1;
@end
