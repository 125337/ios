@interface MMAssetChatNormalImageConfig : MMAssetConfigObject
+ (id)ConfigInstance;
- (BOOL)isRetrivingOriginImage;
- (BOOL)shouldCompressLongImage;
- (CGSize)imageSizeLimit;
- (double)compressQuality;
@end

