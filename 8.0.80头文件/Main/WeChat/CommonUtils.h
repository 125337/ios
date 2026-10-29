@interface CommonUtils : NSObject
+ (BOOL)createYTexture:(unsigned int *)arg1 uvTexture:(unsigned int *)arg2 withPixelBuffer:(__CVBuffer * *)arg3 textureCache:(__CVOpenGLESTextureCache *)arg4;
+ (void)setupTargetTexture:(unsigned int)arg1;
@end
