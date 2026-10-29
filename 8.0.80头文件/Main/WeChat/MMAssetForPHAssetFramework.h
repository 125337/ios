@interface MMAssetForPHAssetFramework : MMAsset
{
    BOOL _isSpatialMedia; // +0x8
    BOOL _hasCheckSpatialMedia; // +0x9
    int m_displayRequestId; // +0xc
    int m_videoRequestId; // +0x10
    int m_bigImageRequestId; // +0x14
    int _m_localVideoRequestId; // +0x18
    EditImageLogicController * m_editImageLogicController; // +0x20
    NSURL * _videoAssetURL; // +0x28
    PHAsset * _m_asset; // +0x30
    AVAsset * _avAsset; // +0x38
    AVAssetExportSession * _exportSession; // +0x40
    EditImageAttr * _m_editImageAttr; // +0x48
    EditVideoAttr * _editVideoAttr; // +0x50
    NSNumber * _originalVideoFileSize; // +0x58
    NSString * _urlString; // +0x60
}
+ (id)genSquareThumbnailImage:(id)arg1;
- (id)initWithPHAsset:(id)arg1 IsNeedOrigin:(BOOL)arg2;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(BOOL)arg2;
- (id)m_asset;
- (BOOL)isPHAssetReachable;
- (CGSize)retriveOriginImageSize;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4;
- (void)getBigImageByImageDataWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4 progressHandler:(id /* block */)arg5 resultImageSize:(CGSize)arg6;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(id /* block */)arg2 ErrorBlock:(id /* block */)arg3;
- (void)getDisplayLivePhotoWithResultBlock:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
- (BOOL)canUseLivePhoto;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4 FaceCountBlock:(id /* block */)arg5;
- (unsigned long long)getImageFaceCount:(id)arg1;
- (id)getThumbImage;
- (id)getThumbImageWithSize:(CGSize)arg1;
- (id)getThumbnail;
- (id)tipForLoadingUncomplete;
- (void)asyncGetThumbnail:(id /* block */)arg1;
- (void)asyncGetThumbnail:(id /* block */)arg1 progress:(id /* block */)arg2;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(CGSize)arg1 andResult:(id /* block */)arg2;
- (id)assetUrl;
- (id)assetId;
- (id)assetFileName;
- (id)alAssetReferenceUrl;
- (BOOL)hasLocation;
- (double)latitude;
- (double)longitude;
- (BOOL)isPicture;
- (BOOL)isGif;
- (BOOL)isAVIF;
- (BOOL)isYuanBaoMakeImageToLivePhoto;
- (id)m_livePhotoVideoPath;
- (BOOL)isLivePhoto;
- (id)uniformTypeIdentifier;
- (BOOL)isiCloudError:(id)arg1;
- (id)fetchErrorFromErrorInfo:(id)arg1;
- (void)checkAndCallError:(id /* block */)arg1 errorInfo:(id)arg2;
- (id)getOriginImageDataSizeSync;
- (void)asyncGetOriginImageDataSizeWithBlock:(id /* block */)arg1;
- (void)asyncImageOriginData:(BOOL)arg1 completion:(id /* block */)arg2 errorBlock:(id /* block */)arg3;
- (void)asyncImageOriginSourceData:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
- (void)asyncGetImageExifLogInfo:(id /* block */)arg1;
- (void)fetchLivePhotoInfoWithResultBlock:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isVideo;
- (unsigned long long)originVideoSize;
- (BOOL)isSlowMotionVideo;
- (BOOL)isTimeLapseVideo;
- (id)videoDuration;
- (void)asyncGetVideoFileSizeWithBlock:(id /* block */)arg1;
- (id)getVideoFileSizeFromMetadata;
- (void)asyncCheckVideoIsInCloud:(id /* block */)arg1;
- (void)getVideoDurationForDisplayWithCompletion:(id /* block */)arg1;
- (void)asyncGetLocalVideoWithBlock:(id /* block */)arg1;
- (id)getVideoUrl;
- (long long)getLivePhotoVideoSizeFromMetadata;
- (id)p_pairedVideoResourceForLivePhoto;
- (void)asyncGetLivePhotoVideoWithSuccess:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)asyncGetVideoAssetWithBlock:(id /* block */)arg1;
- (void)asyncGetVideoAsset:(BOOL)arg1 withBlock:(id /* block */)arg2;
- (void)asyncGetVideoAsset:(BOOL)arg1 successBlock:(id /* block */)arg2 errorBlock:(id /* block */)arg3;
- (void)asyncExportVideoAsset:(id)arg1 toPath:(id)arg2 complete:(id /* block */)arg3;
- (void)stopICloudActivity;
- (void)stopGetBigImageICloudActivity;
- (void)stopDisplayRequest;
- (void)stopBigImageRequest;
- (void)stopVideoRequest;
- (id)getCreatedDate;
- (id)getImageManager;
- (CGSize)getImageRatioSize;
- (void)asyncGetMetadata:(id /* block */)arg1;
- (id /* block */)requestAssetProgressHandler;
- (id)timerSourceWithTimeOutBlock:(id /* block */)arg1;
- (int)requestImageDataWithMgr:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageDataWithMgr:(id)arg1 convertRawData:(BOOL)arg2 options:(id)arg3 resultHandler:(id /* block */)arg4;
- (id)checkConvertRawImageData:(id)arg1;
- (int)requestImageWithMgr:(id)arg1 targetSize:(CGSize)arg2 options:(id)arg3 resultHandler:(id /* block */)arg4;
- (id)isSpatialVideoFromMetadata;
- (void)asyncGetIsSpatial:(id /* block */)arg1;
- (id)getDrawLayerArray;
- (BOOL)isAiEdited;
- (BOOL)getIsEdited;
- (id)getEditImageAttr;
- (id)m_editImageAttr;
- (void)updateEditImageAttr:(id)arg1;
- (id)getEditVideoAttr;
- (id)getOriginalAssetLocalIdentifier;
- (int)m_displayRequestId;
- (void)setM_displayRequestId:(int)arg1;
- (int)m_videoRequestId;
- (void)setM_videoRequestId:(int)arg1;
- (int)m_bigImageRequestId;
- (void)setM_bigImageRequestId:(int)arg1;
- (id)m_editImageLogicController;
- (void)setM_editImageLogicController:(id)arg1;
- (id)videoAssetURL;
- (void)setVideoAssetURL:(id)arg1;
- (void)setM_asset:(id)arg1;
- (int)m_localVideoRequestId;
- (void)setM_localVideoRequestId:(int)arg1;
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (id)exportSession;
- (void)setExportSession:(id)arg1;
- (void)setM_editImageAttr:(id)arg1;
- (id)editVideoAttr;
- (void)setEditVideoAttr:(id)arg1;
- (id)originalVideoFileSize;
- (void)setOriginalVideoFileSize:(id)arg1;
- (BOOL)isSpatialMedia;
- (void)setIsSpatialMedia:(BOOL)arg1;
- (BOOL)hasCheckSpatialMedia;
- (void)setHasCheckSpatialMedia:(BOOL)arg1;
- (id)urlString;
- (void)setUrlString:(id)arg1;
- (void).cxx_destruct;
@end
