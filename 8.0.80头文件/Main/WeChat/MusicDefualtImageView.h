@interface MusicDefualtImageView : UIImageView
{
    BOOL _inInUpdateImageProcess; // +0x8
    UIImage * _currentImage; // +0x10
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x18
    MVImageLoader * _imageLoader; // +0x20
    MMMusicFadeOutLayer * _maskLayer; // +0x28
    UIImageView * _foregroundImageView; // +0x30
    CGRect _displayBounds; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupMaskLayerWithSize:(CGSize)arg1;
- (void)updateDisplayImageIfNeeded;
- (void)reloadImage;
- (void)updateDefaultImage:(id)arg1;
- (void)updateDefaultImageURLString:(id)arg1;
- (id)imageFromPixelBuffer:(__CVBuffer *)arg1;
- (id)generateEffectRenderWithTargetRect:(CGRect)arg1;
- (id)workerQueue;
- (id)imageLoader;
- (id)maskLayer;
- (id)foregroundImageView;
- (id)currentImage;
- (void)setCurrentImage:(id)arg1;
- (CGRect)displayBounds;
- (void)setDisplayBounds:(CGRect)arg1;
- (void)setWorkerQueue:(id)arg1;
- (void)setImageLoader:(id)arg1;
- (BOOL)inInUpdateImageProcess;
- (void)setInInUpdateImageProcess:(BOOL)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setForegroundImageView:(id)arg1;
- (void).cxx_destruct;
@end
