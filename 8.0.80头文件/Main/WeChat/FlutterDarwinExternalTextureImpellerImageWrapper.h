@interface FlutterDarwinExternalTextureImpellerImageWrapper : NSObject
+ (sk_sp<flutter::DlImage>)wrapYUVATexture:(id)arg1 UVTex:(id)arg2 YUVColorSpace:(int)arg3 aiksContext:(void *)arg4;
+ (sk_sp<flutter::DlImage>)wrapRGBATexture:(id)arg1 aiksContext:(void *)arg2;
@end
