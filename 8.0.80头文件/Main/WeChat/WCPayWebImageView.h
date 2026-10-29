@interface WCPayWebImageView : MMUIImageView <MMImageLoaderObserver>
{
    BOOL _loadImageOnMainThread; // +0x8
    BOOL _isNeedResize; // +0x9
    BOOL _bShouldRestrictCheckMd5; // +0xa
    BOOL _bForceUpdateImage; // +0xb
    double _imageScale; // +0x10
    id <WCPayWebImageViewDelegate> _delegate; // +0x18
    long long _resizeMode; // +0x20
    long long _expandHitWidth; // +0x28
    long long _expandHitHeight; // +0x30
    NSURL * _imageDownloadUrl; // +0x38
    NSURL * _lightModeUrl; // +0x40
    NSURL * _darkModeUrl; // +0x48
    NSString * _cacheFolder; // +0x50
    UIImage * _defaultWebImage; // +0x58
    NSString * _nsMd5; // +0x60
    NSString * _nsDarkmodeMd5; // +0x68
    UIEdgeInsets _resizeableInsets; // +0x70
}
- (void)dealloc;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 cacheFolder:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 md5:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 md5:(id)arg2 darkModeMd5:(id)arg3;
- (id)initWithFrame:(CGRect)arg1 cacheFolder:(id)arg2 md5:(id)arg3;
- (id)initWithFrame:(CGRect)arg1 cacheFolder:(id)arg2 md5:(id)arg3 darkModeMd5:(id)arg4;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)handleTouchStateChange:(unsigned long long)arg1 touch:(id)arg2;
- (id)init;
- (id)initWithMd5:(id)arg1;
- (id)initWithMd5:(id)arg1 darkModeMd5:(id)arg2;
- (void)setImageURL:(id)arg1;
- (void)setImageURL:(id)arg1 darkModeUrl:(id)arg2;
- (void)setImageURL:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)setImageURL:(id)arg1 darkModeUrl:(id)arg2 forceUpdate:(BOOL)arg3;
- (void)setImageURL:(id)arg1 forceUpdate:(BOOL)arg2 imageLoadDelegate:(id)arg3;
- (void)setImageURL:(id)arg1 darkModeUrl:(id)arg2 forceUpdate:(BOOL)arg3 imageLoadDelegate:(id)arg4;
- (void)setDefaultImage:(id)arg1;
- (id)getImageUrlString;
- (id)getLightModeUrlString;
- (id)getDarkModeUrlString;
- (id)getDefaultImage;
- (void)startLoadImageData;
- (id)md5ForString:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)getImageDataMd5:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)scaleImageToFitMemoryIfNecessary:(id)arg1 imageData:(id)arg2;
- (BOOL)loadImageOnMainThread;
- (void)setLoadImageOnMainThread:(BOOL)arg1;
- (double)imageScale;
- (void)setImageScale:(double)arg1;
- (BOOL)isNeedResize;
- (void)setIsNeedResize:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (UIEdgeInsets)resizeableInsets;
- (void)setResizeableInsets:(UIEdgeInsets)arg1;
- (long long)resizeMode;
- (void)setResizeMode:(long long)arg1;
- (long long)expandHitWidth;
- (void)setExpandHitWidth:(long long)arg1;
- (long long)expandHitHeight;
- (void)setExpandHitHeight:(long long)arg1;
- (BOOL)bShouldRestrictCheckMd5;
- (void)setBShouldRestrictCheckMd5:(BOOL)arg1;
- (id)imageDownloadUrl;
- (void)setImageDownloadUrl:(id)arg1;
- (id)lightModeUrl;
- (void)setLightModeUrl:(id)arg1;
- (id)darkModeUrl;
- (void)setDarkModeUrl:(id)arg1;
- (id)cacheFolder;
- (void)setCacheFolder:(id)arg1;
- (BOOL)bForceUpdateImage;
- (void)setBForceUpdateImage:(BOOL)arg1;
- (id)defaultWebImage;
- (void)setDefaultWebImage:(id)arg1;
- (id)nsMd5;
- (void)setNsMd5:(id)arg1;
- (id)nsDarkmodeMd5;
- (void)setNsDarkmodeMd5:(id)arg1;
- (void).cxx_destruct;
@end
