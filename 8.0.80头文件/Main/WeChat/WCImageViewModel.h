@interface WCImageViewModel : NSObject
{
    BOOL _canGridPreview; // +0x8
    int _style; // +0xc
    int _photoType; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCMediaItem * _mediaItem; // +0x20
    long long _imageType; // +0x28
    long long _precedentImageType; // +0x30
}
+ (id)centerSmall:(id)arg1;
+ (id)centerSmallAndGridPreview:(id)arg1;
+ (id)centerSmall:(id)arg1 parent:(id)arg2;
+ (id)centerSmall:(id)arg1 photoType:(int)arg2;
+ (id)centerSmall:(id)arg1 couldCacheBig:(BOOL)arg2;
+ (id)adaptiveSmall:(id)arg1;
+ (id)adaptiveSmallAndGridPreview:(id)arg1;
+ (id)adaptiveSmall:(id)arg1 imageType:(long long)arg2;
+ (id)adaptiveSmall:(id)arg1 couldCacheBig:(BOOL)arg2;
- (id)initWithParent:(id)arg1 mediaItem:(id)arg2;
- (BOOL)isNormalGridPreview;
- (id)getDisplayName:(id)arg1;
- (void)startDownloadImage;
- (BOOL)isValidDownloadType:(long long)arg1;
- (id)defaultImage;
- (double)imgAspectRatio;
- (id)getDetailCommentPlaceHolderImage;
- (id)getMsgListCommentPlaceHolderImage;
- (id)getPreviewImgFICEntity;
- (id)mediaID;
- (id)getImgWithPreviewImgFICEntity:(id)arg1;
- (void)asyncCacheImageToFIC:(id)arg1 image:(id)arg2;
- (id)getImageFromCache;
- (id)getPrecedentImageFromCache;
- (id)getBigImageFromCache;
- (BOOL)canShowThumb;
- (BOOL)shouldUpdateBlur;
- (id)thumImageDownloadDebugInfo;
- (BOOL)needReportEcsData;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (long long)imageType;
- (void)setImageType:(long long)arg1;
- (long long)precedentImageType;
- (void)setPrecedentImageType:(long long)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (int)photoType;
- (void)setPhotoType:(int)arg1;
- (BOOL)canGridPreview;
- (void)setCanGridPreview:(BOOL)arg1;
- (void).cxx_destruct;
@end
