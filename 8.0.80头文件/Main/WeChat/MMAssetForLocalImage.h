@interface MMAssetForLocalImage : MMAsset
{
    NSString * _localAssetId; // +0x8
    NSString * _localFilePath; // +0x10
    long long _imageDataType; // +0x18
}
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(BOOL)arg2;
- (id)initWithAssetId:(id)arg1 localFilePath:(id)arg2 isNeedOrigin:(BOOL)arg3;
- (id)assetId;
- (id)assetUrl;
- (id)assetFileName;
- (BOOL)isPicture;
- (BOOL)isGif;
- (BOOL)isVideo;
- (BOOL)isSlowMotionVideo;
- (BOOL)isTimeLapseVideo;
- (id)getThumbImage;
- (id)getThumbImageWithSize:(CGSize)arg1;
- (id)getThumbnail;
- (void)asyncGetThumbnail:(id /* block */)arg1;
- (void)asyncGetThumbnail:(id /* block */)arg1 progress:(id /* block */)arg2;
- (id)_getAssetImage;
- (id)_getAssetImageWithMaxSize:(CGSize)arg1 cropToSquare:(BOOL)arg2;
- (id)_convertImage:(id)arg1 toMaxSize:(CGSize)arg2 cropToSquare:(BOOL)arg3;
- (void)asyncGetImageWithCompletion:(id /* block */)arg1;
- (id)_syncLoadImage;
- (long long)_getImageTypeFromData:(id)arg1;
- (id)_getImageForType:(long long)arg1 fromData:(id)arg2;
- (id)_safeLoadImageData;
- (id)getVideoUrl;
- (id)videoDuration;
- (void)asyncGetVideoAssetWithBlock:(id /* block */)arg1;
- (void)asyncGetVideoAsset:(BOOL)arg1 withBlock:(id /* block */)arg2;
- (void)asyncGetVideoAsset:(BOOL)arg1 successBlock:(id /* block */)arg2 errorBlock:(id /* block */)arg3;
- (id)localAssetId;
- (void)setLocalAssetId:(id)arg1;
- (id)localFilePath;
- (void)setLocalFilePath:(id)arg1;
- (long long)imageDataType;
- (void)setImageDataType:(long long)arg1;
- (void).cxx_destruct;
@end
