@interface MMFinderLiveIconTransitionCarouselView : UIView
{
    BOOL _isAnimationStart; // +0x8
    double _animationDuration; // +0x10
    double _transitionDuration; // +0x18
    NSArray * _images; // +0x20
    NSArray * _webImageUrls; // +0x28
    unsigned long long _currentIndex; // +0x30
    MMWebImageView * _imageView; // +0x38
    MMTimer * _timer; // +0x40
}
- (id)initWithImages:(id)arg1;
- (id)initWithWebImageUrls:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setImages:(id)arg1;
- (void)setWebImageUrls:(id)arg1;
- (void)start;
- (void)stop;
- (void)startTimer;
- (void)stopTimer;
- (void)transitionSingleImage;
- (void)dealloc;
- (id)imageView;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (double)transitionDuration;
- (void)setTransitionDuration:(double)arg1;
- (id)images;
- (id)webImageUrls;
- (BOOL)isAnimationStart;
- (void)setIsAnimationStart:(BOOL)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)setImageView:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end

