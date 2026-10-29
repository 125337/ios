@interface MMImgFullScreenLogic_ShowOrigin : MMImgFullScreenLogic
{
    NSString * _originImageAssetID; // +0x8
    UIImage * _originImageFromPhotos; // +0x10
    NSData * _originImageDataFromPhotos; // +0x18
    PHAsset * _originImagePHAsset; // +0x20
    NSString * _rawVideoAssetID; // +0x28
    AVAsset * _rawVideoAsset; // +0x30
    NSURL * _rawVideoAssetUrl; // +0x38
}
- (void)doShowOriginAsset;
- (void)onShowImageAsset;
- (void)showImageControllerWithImage:(id)arg1 Data:(id)arg2;
- (void)onShowVideoAsset;
- (void)showVideoController;
- (id)originImageAssetID;
- (void)setOriginImageAssetID:(id)arg1;
- (id)originImageFromPhotos;
- (void)setOriginImageFromPhotos:(id)arg1;
- (id)originImageDataFromPhotos;
- (void)setOriginImageDataFromPhotos:(id)arg1;
- (id)originImagePHAsset;
- (void)setOriginImagePHAsset:(id)arg1;
- (id)rawVideoAssetID;
- (void)setRawVideoAssetID:(id)arg1;
- (id)rawVideoAsset;
- (void)setRawVideoAsset:(id)arg1;
- (id)rawVideoAssetUrl;
- (void)setRawVideoAssetUrl:(id)arg1;
- (void).cxx_destruct;
@end
