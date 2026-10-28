@interface MMAssetTimeLineConfig : MMAssetConfigObject
{
    BOOL _useHighResolutionImageSize; // +0x8
}
+ (id)ConfigInstance;
- (BOOL)isRetrivingOriginImage;
- (BOOL)shouldCompressLongImage;
- (CGSize)imageSizeLimit;
- (CGSize)imageResultSizeForOriginSize:(CGSize)arg1;
- (double)compressQuality;
- (BOOL)useHighResolutionImageSize;
- (void)setUseHighResolutionImageSize:(BOOL)arg1;
@end
