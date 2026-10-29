@interface MMAssetEditImageConfig : MMAssetConfigObject
{
    BOOL _retrivingOriginEditedImage; // +0x8
}
+ (id)ConfigInstance;
- (BOOL)isRetrivingOriginImage;
- (BOOL)shouldCompressLongImage;
- (BOOL)isRetrivingOriginEditedImage;
- (CGSize)imageSizeLimit;
- (BOOL)retrivingOriginEditedImage;
- (void)setRetrivingOriginEditedImage:(BOOL)arg1;
@end
