@interface MMAssetForGameHaowanOfPHAsset : MMAsset <GameHaowanAsset>
{
    PHAsset * _localAsset; // +0x8
    int _videoRequestId; // +0x10
    GameLocalAlbumInfo * _albumInfo; // +0x18
    AVAsset * _avAsset; // +0x20
    NSURL * _assetURL; // +0x28
}
- (id)initWithPHAsset:(id)arg1 albumInfo:(id)arg2;
- (id)imageManger;
- (id)title;
- (id)subtitle;
- (id)gameName;
- (id)appId;
- (BOOL)isOnlineVideo;
- (id)videoItem;
- (id)assetUrl;
- (id)assetId;
- (id)getThumbImage;
- (id)getThumbnail;
- (id)tipForLoadingUncomplete;
- (BOOL)isGif;
- (BOOL)isPicture;
- (BOOL)isVideo;
- (id)videoDuration;
- (BOOL)getIsEdited;
- (void)asyncGetThumbnail:(id /* block */)arg1;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(CGSize)arg1 andResult:(id /* block */)arg2;
- (void)asyncGetVideoAssetWithBlock:(id /* block */)arg1;
- (void)stopICloudActivity;
- (CGSize)getImageRatioSize;
- (id)imageExifLogInfo;
- (id)getCreatedDate;
- (id)requestThumbnailSync:(CGSize)arg1;
- (void)requestThumbnail:(CGSize)arg1 isSync:(BOOL)arg2 block:(id /* block */)arg3;
- (BOOL)isLocalAsset;
- (id)formatDuration:(unsigned int)arg1;
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (id)assetURL;
- (void)setAssetURL:(id)arg1;
- (void).cxx_destruct;
@end

