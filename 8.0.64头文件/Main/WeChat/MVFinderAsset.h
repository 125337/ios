@interface MVFinderAsset : MMAsset
{
    unsigned long long _type; // +0x8
    MMMusicFinderVideoCellModel * _finderVideoModel; // +0x10
    WCFinderDataItem * _draftModel; // +0x18
    MVImageLoader * _imageLoader; // +0x20
}
- (id)initWithFinderVideoModel:(id)arg1;
- (id)initWithFinderDataItem:(id)arg1;
- (id)assetUrl;
- (id)assetId;
- (id)getThumbImage;
- (id)coverUrl;
- (id)coverUrlToken;
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
- (id)requestThumbnailSync:(CGSize)arg1;
- (void)requestThumbnail:(CGSize)arg1 isSync:(BOOL)arg2 block:(id /* block */)arg3;
- (void)getVideoDurationForDisplayWithCompletion:(id /* block */)arg1;
- (id)imageLoader;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)finderVideoModel;
- (void)setFinderVideoModel:(id)arg1;
- (id)draftModel;
- (void)setDraftModel:(id)arg1;
- (void)setImageLoader:(id)arg1;
- (void).cxx_destruct;
@end
