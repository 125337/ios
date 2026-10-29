@interface MMAsset : MMObject <NSCopying, NSCoding>
{
    BOOL _m_isNeedOriginImage; // +0x8
    BOOL _m_isSupportHeif; // +0x9
    BOOL _m_isFailedFromIcloud; // +0xa
    BOOL _m_isLoadingFromIcloud; // +0xb
    BOOL _m_isUseLivePhoto; // +0xc
    double _m_progressFromIcloud; // +0x10
    unsigned long long _m_indexInAlbum; // +0x18
    unsigned long long _originVideoSize; // +0x20
    NSString * _m_livePhotoVideoPath; // +0x28
}
+ (id)decodeXmlString:(id)arg1;
+ (CGSize)LongImageSizeWithOriginSize:(CGSize)arg1;
+ (BOOL)isAsset:(id)arg1 CreateWithInSecond:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(BOOL)arg2;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(id /* block */)arg2 ErrorBlock:(id /* block */)arg3;
- (void)getDisplayLivePhotoWithResultBlock:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
- (BOOL)canUseLivePhoto;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4 FaceCountBlock:(id /* block */)arg5;
- (id)getThumbImage;
- (id)getThumbnail;
- (id)getThumbImageWithSize:(CGSize)arg1;
- (void)asyncGetThumbnail:(id /* block */)arg1;
- (void)asyncGetThumbnail:(id /* block */)arg1 progress:(id /* block */)arg2;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(CGSize)arg1 andResult:(id /* block */)arg2;
- (id)tipForLoadingUncomplete;
- (id)assetUrl;
- (id)assetId;
- (id)assetFileName;
- (id)alAssetReferenceUrl;
- (BOOL)hasLocation;
- (double)latitude;
- (double)longitude;
- (id)encodeXmlString;
- (id)uniformTypeIdentifier;
- (BOOL)isPicture;
- (BOOL)isGif;
- (BOOL)isLivePhoto;
- (BOOL)isPictureForIncludeGif:(BOOL)arg1;
- (id)getOriginImageDataSize;
- (void)asyncGetOriginImageDataSizeWithBlock:(id /* block */)arg1;
- (BOOL)isVideo;
- (BOOL)isSlowMotionVideo;
- (BOOL)isTimeLapseVideo;
- (id)videoDuration;
- (void)getVideoDurationForDisplayWithCompletion:(id /* block */)arg1;
- (id)getVideoUrl;
- (void)asyncGetVideoAssetWithBlock:(id /* block */)arg1;
- (void)asyncGetVideoAsset:(BOOL)arg1 withBlock:(id /* block */)arg2;
- (void)asyncGetVideoAsset:(BOOL)arg1 successBlock:(id /* block */)arg2 errorBlock:(id /* block */)arg3;
- (void)asyncGetLivePhotoVideoWithSuccess:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
- (void)asyncImageOriginSourceData:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
- (void)asyncGetVideoFileSizeWithBlock:(id /* block */)arg1;
- (void)asyncGetIsSpatial:(id /* block */)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getCreatedDate;
- (CGSize)getImageRatioSize;
- (void)stopICloudActivity;
- (void)stopGetBigImageICloudActivity;
- (void)asyncGetMetadata:(id /* block */)arg1;
- (void)setEditedImage:(id)arg1 withDrawLayer:(id)arg2 withEdited:(BOOL)arg3;
- (id)getDrawLayerArray;
- (BOOL)getIsEdited;
- (id)getEditImageAttr;
- (BOOL)getIsEditedVideo;
- (id)getEditVideoAttr;
- (id)getOriginalAssetLocalIdentifier;
- (void)asyncGetImageExifLogInfo:(id /* block */)arg1;
- (void)fetchLivePhotoInfoWithResultBlock:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
- (BOOL)tryUpdateAsset;
- (BOOL)m_isNeedOriginImage;
- (void)setM_isNeedOriginImage:(BOOL)arg1;
- (BOOL)m_isSupportHeif;
- (void)setM_isSupportHeif:(BOOL)arg1;
- (BOOL)m_isFailedFromIcloud;
- (void)setM_isFailedFromIcloud:(BOOL)arg1;
- (BOOL)m_isLoadingFromIcloud;
- (void)setM_isLoadingFromIcloud:(BOOL)arg1;
- (double)m_progressFromIcloud;
- (void)setM_progressFromIcloud:(double)arg1;
- (unsigned long long)m_indexInAlbum;
- (void)setM_indexInAlbum:(unsigned long long)arg1;
- (unsigned long long)originVideoSize;
- (void)setOriginVideoSize:(unsigned long long)arg1;
- (id)m_livePhotoVideoPath;
- (void)setM_livePhotoVideoPath:(id)arg1;
- (BOOL)m_isUseLivePhoto;
- (void)setM_isUseLivePhoto:(BOOL)arg1;
- (void).cxx_destruct;
@end

