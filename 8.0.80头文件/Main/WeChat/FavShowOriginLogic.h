@interface FavShowOriginLogic : NSObject
{
    MMUIViewController * _fromVC; // +0x8
    NSString * _originImageAssetID; // +0x10
    UIImage * _originImageFromPhotos; // +0x18
    NSData * _originImageDataFromPhotos; // +0x20
    PHAsset * _originImagePHAsset; // +0x28
    NSString * _rawVideoAssetID; // +0x30
    AVAsset * _rawVideoAsset; // +0x38
    NSURL * _rawVideoAssetUrl; // +0x40
}
- (id)initWithFromViewController:(id)arg1;
- (void)showImageForRecordMsg:(id)arg1 dataId:(id)arg2;
- (void)showImageControllerWithImage:(id)arg1 Data:(id)arg2 recordMsg:(id)arg3 dataId:(id)arg4;
- (void)showVideoForRecordMsg:(id)arg1 dataId:(id)arg2;
- (void)showVideoControllerWithMsgWrap:(id)arg1 dataId:(id)arg2;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
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
