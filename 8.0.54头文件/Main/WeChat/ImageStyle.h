@interface ImageStyle : BaseStyle <MMImageLoaderObserver>
{
    UIImage * _oImage; // +0x30
    BOOL _alwaysTemplate; // +0x38
    BOOL _customImageProvider; // +0x39
    BOOL _playing; // +0x3a
    BOOL _didCropImg; // +0x3b
    NSString * _imageName; // +0x40
    NSString * _imageURL; // +0x48
    NSString * _darkImageURL; // +0x50
    UIColor * _color; // +0x58
    NSString * _animationFilePath; // +0x60
    CAAnimation * _animation; // +0x68
    CALayer * _animationLayer; // +0x70
    NSString * _nsImgSrc; // +0x78
    double _paddingHorizontal; // +0x80
    double _topMargin; // +0x88
    double _cornerRadius; // +0x90
    id /* block */ _imageLoadHandler; // +0x98
    double _timeOffset; // +0xa0
    id /* block */ _startHandler; // +0xa8
    id /* block */ _endHandler; // +0xb0
    CADisplayLink * _displayLink; // +0xb8
    NSMutableDictionary * _networkResultTempData; // +0xc0
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
- (BOOL)needAsyncLoadWebImage;
- (void)asyncLoadWebImageWithCompletionHandler:(id /* block */)arg1 provider:(id)arg2;
- (void)checkLoadImageFinish;
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
- (id /* block */)imageLoadHandler;
- (void)setImageLoadHandler:(id /* block */)arg1;
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
- (void).cxx_destruct;
@end

