@interface MMAssetForGameHaowanOfVideoItem : MMAsset <MMImageLoaderObserver, GameHaowanAsset>
{
    GameHaowanAlbumVideoItem * _videoItem; // +0x8
    id /* block */ _imageResultBlock; // +0x10
    NSURLSessionTask * _sessionTask; // +0x18
    AVAsset * _avAsset; // +0x20
    NSURL * _assetURL; // +0x28
}
- (id)initWithVideoItem:(id)arg1;
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
- (BOOL)isGif;
- (BOOL)isPicture;
- (BOOL)isVideo;
- (id)videoDuration;
- (BOOL)getIsEdited;
- (void)asyncGetThumbnail:(id /* block */)arg1;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(CGSize)arg1 andResult:(id /* block */)arg2;
- (void)requestThumbnail:(id /* block */)arg1;
- (void)asyncGetVideoAssetWithBlock:(id /* block */)arg1;
- (void)stopICloudActivity;
- (CGSize)getImageRatioSize;
- (id)imageExifLogInfo;
- (id)getCreatedDate;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2 extraInfo:(id)arg3;
- (void)dealloc;
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (id)assetURL;
- (void)setAssetURL:(id)arg1;
- (void).cxx_destruct;
@end
