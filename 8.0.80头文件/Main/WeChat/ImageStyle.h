@interface ImageStyle : BaseStyle <MMImageLoaderObserver>
{
    UIImage * _oImage; // +0x30
    BOOL _alwaysTemplate; // +0x38
    BOOL _customImageProvider; // +0x39
    BOOL _playing; // +0x3a
    BOOL _didCropImg; // +0x3b
    BOOL _isLoadFail; // +0x3c
    BOOL _isLoadSuccess; // +0x3d
    BOOL _hasFinishLoad; // +0x3e
    NSString * _imageName; // +0x40
    id <ImageStyleDelegate> _delegate; // +0x48
    NSString * _imageURL; // +0x50
    NSString * _darkImageURL; // +0x58
    UIColor * _color; // +0x60
    NSString * _animationFilePath; // +0x68
    CAAnimation * _animation; // +0x70
    CALayer * _animationLayer; // +0x78
    NSString * _nsImgSrc; // +0x80
    double _paddingHorizontal; // +0x88
    double _topMargin; // +0x90
    double _cornerRadius; // +0x98
    long long _contentMode; // +0xa0
    double _timeOffset; // +0xa8
    id /* block */ _startHandler; // +0xb0
    id /* block */ _endHandler; // +0xb8
    CADisplayLink * _displayLink; // +0xc0
    NSMutableDictionary * _networkResultTempData; // +0xc8
    UIView * _overlayLoadingView; // +0xd0
    double _animationTimeStamp; // +0xd8
}
- (void)drawInContext:(CGContext *)arg1;
- (void)setColor:(id)arg1;
- (void)setAlwaysTemplate:(BOOL)arg1;
- (BOOL)alwaysTemplate;
- (void)updateImage;
- (void)setImageURL:(id)arg1 darkImageURL:(id)arg2;
- (void)setImageURL:(id)arg1;
- (void)setDarkImageURL:(id)arg1;
- (void)tryLoadImageURLCache;
- (void)setOImage:(id)arg1;
- (id)imageLoadingConfig:(BOOL)arg1;
- (BOOL)needAsyncLoadWebImage;
- (void)asyncLoadWebImageWithCompletion:(id /* block */)arg1;
- (void)startLoadWebImage;
- (void)checkLoadImageFinish;
- (void)startLoading;
- (void)onLoadImageFail;
- (void)onLoadImageSuccess;
- (BOOL)onClickAtImageStyleShouldResponse;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)setAnimationFilePath:(id)arg1;
- (id)animation;
- (id)animationLayer;
- (void)playAnimateEmojiWithStartHandler:(id /* block */)arg1 endHandler:(id /* block */)arg2;
- (void)stopPlayAnimateEmoji;
- (void)tick;
- (id)oImage;
- (id)imageName;
- (void)setImageName:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imageURL;
- (id)darkImageURL;
- (id)color;
- (id)animationFilePath;
- (void)setAnimation:(id)arg1;
- (void)setAnimationLayer:(id)arg1;
- (id)nsImgSrc;
- (void)setNsImgSrc:(id)arg1;
- (double)paddingHorizontal;
- (void)setPaddingHorizontal:(double)arg1;
- (double)topMargin;
- (void)setTopMargin:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (BOOL)customImageProvider;
- (void)setCustomImageProvider:(BOOL)arg1;
- (long long)contentMode;
- (void)setContentMode:(long long)arg1;
- (double)timeOffset;
- (void)setTimeOffset:(double)arg1;
- (id /* block */)startHandler;
- (void)setStartHandler:(id /* block */)arg1;
- (id /* block */)endHandler;
- (void)setEndHandler:(id /* block */)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (BOOL)isPlaying;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)didCropImg;
- (void)setDidCropImg:(BOOL)arg1;
- (id)networkResultTempData;
- (void)setNetworkResultTempData:(id)arg1;
- (BOOL)isLoadFail;
- (void)setIsLoadFail:(BOOL)arg1;
- (BOOL)isLoadSuccess;
- (void)setIsLoadSuccess:(BOOL)arg1;
- (BOOL)hasFinishLoad;
- (void)setHasFinishLoad:(BOOL)arg1;
- (id)overlayLoadingView;
- (void)setOverlayLoadingView:(id)arg1;
- (double)animationTimeStamp;
- (void)setAnimationTimeStamp:(double)arg1;
- (void).cxx_destruct;
@end
