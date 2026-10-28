@interface MMAssetEditImageConfig : MMAssetConfigObject
+ (id)ConfigInstance;
- (BOOL)isRetrivingOriginImage;
- (BOOL)shouldCompressLongImage;
- (BOOL)isRetrivingOriginEditedImage;
- (CGSize)imageSizeLimit;
@end
