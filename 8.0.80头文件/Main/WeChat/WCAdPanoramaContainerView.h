@interface WCAdPanoramaContainerView : MMUIView <WCCanvasImageLoaderObserver>
{
    BOOL _showLoading; // +0x8
    NSString * _imageUrl; // +0x10
    WCPanoramaImageView * _panoramaImageView; // +0x18
    MMProgressViewEx * _loadingView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 imageUrl:(id)arg2 showLoading:(BOOL)arg3;
- (void)initPanoramaImageView;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)dealloc;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (BOOL)showLoading;
- (void)setShowLoading:(BOOL)arg1;
- (id)panoramaImageView;
- (void)setPanoramaImageView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
