@interface MMAssetForGameHaowan : MMAsset <GameHaowanAsset>
{
    MMAsset<GameHaowanAsset> * _impl; // +0x8
}
- (id)initWithAssetImpl:(id)arg1;
- (id)title;
- (id)subtitle;
- (id)gameName;
- (id)appId;
- (BOOL)isOnlineVideo;
- (id)videoItem;
- (id)assetUrl;
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
- (id)getCreatedDate;
- (void).cxx_destruct;
@end
