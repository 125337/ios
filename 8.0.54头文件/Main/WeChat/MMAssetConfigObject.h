@interface MMAssetConfigObject : NSObject
{
    BOOL _disableConvertRawImageData; // +0x8
}
- (BOOL)isRetrivingOriginImage;
- (BOOL)shouldCompressLongImage;
- (CGSize)imageSizeLimit;
- (BOOL)isCompressResolutionSizeValid:(CGSize)arg1;
- (CGSize)imageResultSizeForOriginSize:(CGSize)arg1;
- (double)compressQuality;
- (double)minCompressEarnings;
- (unsigned long long)minNoneCompressNormalImageSize;
- (unsigned long long)minNoneCompressLongImageSize;
- (BOOL)isRetrivingOriginEditedImage;
- (BOOL)disableOpportunisticDeliverMode;
- (id)description;
- (BOOL)disableConvertRawImageData;
- (void)setDisableConvertRawImageData:(BOOL)arg1;
@end

