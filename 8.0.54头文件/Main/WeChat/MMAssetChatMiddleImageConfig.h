@interface MMAssetChatMiddleImageConfig : MMAssetConfigObject
+ (id)ConfigInstance;
- (BOOL)isRetrivingOriginImage;
- (BOOL)shouldCompressLongImage;
- (CGSize)imageSizeLimit;
- (double)compressQuality;
- (unsigned int)getMaxSize;
@end

