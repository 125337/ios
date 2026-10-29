@interface WCImageMediaItemLoader : NSObject <WCFacadeExt>
{
    WCMediaItem * _mediaItem; // +0x8
    long long _imageType; // +0x10
    id /* block */ _imageHandler; // +0x18
    id /* block */ _errorHandler; // +0x20
    ImageStyle * _imageStyle; // +0x28
    WCImageMediaItemLoader * _retainedSelf; // +0x30
}
+ (BOOL)hasImageData:(id)arg1 imageType:(long long)arg2;
- (id)initWithMediaItem:(id)arg1 imageType:(long long)arg2;
- (void)startDownloadImage;
- (id)getImageFromCache;
- (id)getSmallImageFromCache;
- (id)getBigImageFromCache;
- (void)getImageWithType:(long long)arg1 imgHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (BOOL)isValidDownloadType:(long long)arg1;
- (id)mediaID;
- (id)getLoaderKeyWithMediaID;
- (void)subscribeMediaItemDownload;
- (void)unsubscribeMediaItemDownload;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)updateImage;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (void)celar;
- (void)dealloc;
- (BOOL)hasImageData;
- (double)imgAspectRatio;
- (id)defaultImage;
- (void)setImageStyle:(id)arg1;
- (void)setImageStyleHandler:(id /* block */)arg1;
- (id)getImageStyle;
- (void)addToImageStyleLoaderMgr;
- (void)removeFromStyleLoaderMgr;
- (void)_retainSelf;
- (void)_releaseSelf;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (long long)imageType;
- (void)setImageType:(long long)arg1;
- (id /* block */)imageHandler;
- (void)setImageHandler:(id /* block */)arg1;
- (id /* block */)errorHandler;
- (void)setErrorHandler:(id /* block */)arg1;
- (id)imageStyle;
- (id)retainedSelf;
- (void)setRetainedSelf:(id)arg1;
- (void).cxx_destruct;
@end
