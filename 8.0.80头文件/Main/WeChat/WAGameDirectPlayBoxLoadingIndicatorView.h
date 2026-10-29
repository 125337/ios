@interface WAGameDirectPlayBoxLoadingIndicatorView : UIView
{
    BOOL _isAnimating; // +0x8
    BOOL _contentActivated; // +0x9
    UIImageView * _ringImageView; // +0x10
    UIImageView * _starImageView; // +0x18
    double _lastRenderSide; // +0x20
}
+ (id)wa_rasterizedSvgCache;
+ (id)renderSvgNamed:(id)arg1 size:(CGSize)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)startAnimating;
- (void)stopAnimating;
- (void)attachStarAnimationWithScale:(double)arg1;
- (void)prepareContentIfNeeded;
- (void)releaseImages;
- (void)didMoveToWindow;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)ringImageView;
- (void)setRingImageView:(id)arg1;
- (id)starImageView;
- (void)setStarImageView:(id)arg1;
- (double)lastRenderSide;
- (void)setLastRenderSide:(double)arg1;
- (BOOL)contentActivated;
- (void)setContentActivated:(BOOL)arg1;
- (void).cxx_destruct;
@end
