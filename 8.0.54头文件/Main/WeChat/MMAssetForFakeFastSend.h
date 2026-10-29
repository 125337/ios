@interface MMAssetForFakeFastSend : MMAsset
{
    BOOL _isNeedOriginImage; // +0x8
    UIImage * _oImage; // +0x10
    EditImageAttr * _editImageAttr; // +0x18
    EditImageLogicController * _editImageLogicController; // +0x20
    NSURL * _screenShotUrl; // +0x28
}
+ (BOOL)isAsset:(id)arg1 CreateWithInSecond:(double)arg2;
- (id)initWithUrl:(id)arg1 withImg:(id)arg2 IsNeedOrigin:(BOOL)arg3;
- (CGSize)retriveOriginImageSize;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(id /* block */)arg2 ErrorBlock:(id /* block */)arg3;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4 FaceCountBlock:(id /* block */)arg5;
- (id)getThumbImage;
- (id)getThumbnail;
- (id)getThumbImageWithSize:(CGSize)arg1;
- (void)asyncGetThumbnail:(id /* block */)arg1;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(CGSize)arg1 andResult:(id /* block */)arg2;
- (id)assetUrl;
- (id)assetId;
- (id)alAssetReferenceUrl;
- (BOOL)isPicture;
- (id)getOriginImageDataSize;
- (void)asyncGetOriginImageDataSizeWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getCreatedDate;
- (CGSize)getImageRatioSize;
- (void)setEditedImage:(id)arg1 withDrawLayer:(id)arg2 withEdited:(BOOL)arg3;
- (id)getDrawLayerArray;
- (BOOL)getIsEdited;
- (id)getEditImageAttr;
- (id)m_editImageAttr;
- (BOOL)tryUpdateAsset;
- (BOOL)isNeedOriginImage;
- (void)setIsNeedOriginImage:(BOOL)arg1;
- (id)oImage;
- (void)setOImage:(id)arg1;
- (id)editImageAttr;
- (void)setEditImageAttr:(id)arg1;
- (id)editImageLogicController;
- (void)setEditImageLogicController:(id)arg1;
- (id)screenShotUrl;
- (void)setScreenShotUrl:(id)arg1;
- (void).cxx_destruct;
@end

