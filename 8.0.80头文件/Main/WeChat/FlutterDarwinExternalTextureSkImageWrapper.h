@interface FlutterDarwinExternalTextureSkImageWrapper : NSObject
+ (sk_sp<SkImage>)wrapYUVATexture:(id)arg1 UVTex:(id)arg2 YUVColorSpace:(int)arg3 grContext:(void *)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6;
+ (sk_sp<SkImage>)wrapRGBATexture:(id)arg1 grContext:(void *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
@end
