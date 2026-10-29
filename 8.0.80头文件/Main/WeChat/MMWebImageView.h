@interface MMWebImageView : MMUIImageView
{
    UIImage * _defaultImage; // +0x8
    BOOL _loadCachedImageFileOnMainThread; // +0x10
    MMAnimatedImageDecoder * m_animatedImageDecoder; // +0x18
    UIView * m_view; // +0x20
    UIImage * m_cacheImage; // +0x28
    NSObject<OS_dispatch_queue> * m_scaleQueue; // +0x30
    BOOL _asyncWaitSubThreadLoadDataIfNotInCacheYet; // +0x38
    BOOL _isImageStatic; // +0x39
    BOOL _autoScale; // +0x3a
    BOOL _shouldShowWxamMark; // +0x3b
    BOOL _alwaysTemplateRenderingMode; // +0x3c
    BOOL _ignoreEmptyDefaultImage; // +0x3d
    BOOL _useDissloveImageUpdate; // +0x3e
    id <MMWebImageViewDelegate> m_loadingDelegate; // +0x40
    id /* block */ _downloadTaskGenerator; // +0x48
    id /* block */ _imageTaskEventObserversGenerator; // +0x50
    double _imageScale; // +0x58
    UIImage * _lastedImageSnapShot; // +0x60
    MMWebImageRequest * _imageRequest; // +0x68
}
+ (id /* block */)zz_create;
+ (id)getLoadedImageData:(id)arg1;
- (BOOL)displayWithImage:(id)arg1 data:(id)arg2;
- (void)swiftLoadImageWithUrl:(id)arg1 scene:(long long)arg2 darkImageURL:(id)arg3 context:(id)arg4 forceUpdate:(BOOL)arg5;
- (void)swiftLoadImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)swiftCancelLoading;
- (id)zz_setup;
- (void)setWXGWidgetsrc:(id)arg1;
- (void)setWXGWidgetlocalImage:(id)arg1;
- (id)initForProductImage;
- (void)updateWithGoods:(id)arg1;
- (void)updateGoodsWithWxamIfNeeded:(id)arg1;
- (void)updateWithProductImageURL:(id)arg1;
- (void)leftAlignAspectFitImage;
- (void)configForEmoticonThumb:(id)arg1 emojiInfoBuf:(id)arg2;
- (void)configForEmoticonThumb:(id)arg1 emojiInfo:(id)arg2;
- (void)configureWithShowIcon:(id)arg1;
- (void)configureWithUrlStr:(id)arg1;
- (void)setLoadingDelegate:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setImage:(id)arg1;
- (void)privateSetImage:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setIsImageStatic:(BOOL)arg1;
- (void)setEmptyImageURL;
- (void)loadImageWithRequest:(id)arg1;
- (void)loadImageWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setImageURL:(id)arg1;
- (void)setImageURL:(id)arg1 requestURL:(id)arg2;
- (void)setImageURL:(id)arg1 scene:(long long)arg2;
- (void)setImageURL:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)setImageURL:(id)arg1 reqContext:(id)arg2;
- (void)setImageURL:(id)arg1 reqContext:(id)arg2 forceUpdate:(BOOL)arg3;
- (void)setImageWithUrlStr:(id)arg1;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2 reqContext:(id)arg3 forceUpdate:(BOOL)arg4 scene:(long long)arg5;
- (void)setLightImageURL:(id)arg1 lightImgRequestURL:(id)arg2 darkImageURL:(id)arg3 darkImgRequestURL:(id)arg4 reqContext:(id)arg5 forceUpdate:(BOOL)arg6 scene:(long long)arg7;
- (void)__setImageRequest:(id)arg1;
- (void)stopImageLoadingAndResetForCurrentUrl;
- (void)callLoadingDelegateOnLoadImageOk:(id)arg1;
- (void)callLoadingDelegateOnLoadImageFail;
- (void)setDefaultImage:(id)arg1;
- (id)getImage;
- (id)getDefaultImage;
- (id)syncGetLatestImage;
- (id)getUrl;
- (id)getDarkModeUrl;
- (id)getCurrentUrl;
- (BOOL)isSingleFrame;
- (void)setImageWithDefaultImage;
- (void)dealloc;
- (BOOL)setImageFromData:(id)arg1;
- (BOOL)setImageFromData:(id)arg1 url:(id)arg2;
- (void)removeGifView;
- (BOOL)setImageFromCacheImage:(id)arg1 dataSize:(id)arg2 url:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (id)m_loadingDelegate;
- (void)setM_loadingDelegate:(id)arg1;
- (id /* block */)downloadTaskGenerator;
- (void)setDownloadTaskGenerator:(id /* block */)arg1;
- (id /* block */)imageTaskEventObserversGenerator;
- (void)setImageTaskEventObserversGenerator:(id /* block */)arg1;
- (BOOL)loadCachedImageFileOnMainThread;
- (void)setLoadCachedImageFileOnMainThread:(BOOL)arg1;
- (BOOL)asyncWaitSubThreadLoadDataIfNotInCacheYet;
- (void)setAsyncWaitSubThreadLoadDataIfNotInCacheYet:(BOOL)arg1;
- (BOOL)isImageStatic;
- (double)imageScale;
- (void)setImageScale:(double)arg1;
- (BOOL)autoScale;
- (void)setAutoScale:(BOOL)arg1;
- (BOOL)shouldShowWxamMark;
- (void)setShouldShowWxamMark:(BOOL)arg1;
- (BOOL)alwaysTemplateRenderingMode;
- (void)setAlwaysTemplateRenderingMode:(BOOL)arg1;
- (BOOL)ignoreEmptyDefaultImage;
- (void)setIgnoreEmptyDefaultImage:(BOOL)arg1;
- (BOOL)useDissloveImageUpdate;
- (void)setUseDissloveImageUpdate:(BOOL)arg1;
- (id)lastedImageSnapShot;
- (void)setLastedImageSnapShot:(id)arg1;
- (id)imageRequest;
- (void)setImageRequest:(id)arg1;
- (void).cxx_destruct;
@end
