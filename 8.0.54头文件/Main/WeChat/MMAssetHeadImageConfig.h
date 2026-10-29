@interface MMAssetHeadImageConfig : MMAssetConfigObject
+ (id)ConfigInstance;
- (BOOL)isRetrivingOriginImage;
- (CGSize)imageSizeLimit;
- (double)compressQuality;
- (BOOL)shouldCompressLongImage;
@end

