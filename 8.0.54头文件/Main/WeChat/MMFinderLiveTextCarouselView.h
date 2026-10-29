@interface MMFinderLiveTextCarouselView : UIView
{
    BOOL _keepWordingOnScreenWhenFinish; // +0x8
    BOOL _allowRepeatedPlay; // +0x9
    BOOL _isAnimationStart; // +0xa
    BOOL _isInAnimation; // +0xb
    id <MMFinderLiveTextCarouselViewDelegate> _delegate; // +0x10
    double _animationDuration; // +0x18
    id /* block */ _onCarouselAnimationFinishOnceBlock; // +0x20
    unsigned long long _currentIndex; // +0x28
    NSArray * _dataSource; // +0x30
    MMTimer * _scrollTimer; // +0x38
    UILabel * _currentLabel; // +0x40
    UILabel * _nextLabel; // +0x48
    unsigned long long _repeatCount; // +0x50
    unsigned long long _remainingCount; // +0x58
}
+ (double)labelHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithDataSource:(id)arg1 repeatCount:(unsigned long long)arg2;
- (void)start;
- (void)stop;
- (void)hideCurrentLabel;
- (void)reset;
- (void)dealloc;
- (void)layoutSubviews;
- (void)startTimer;
- (void)stopTimer;
- (void)onTimerShouldScroll;
- (id)nextLabel;
- (id)currentLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (BOOL)keepWordingOnScreenWhenFinish;
- (void)setKeepWordingOnScreenWhenFinish:(BOOL)arg1;
- (BOOL)allowRepeatedPlay;
- (void)setAllowRepeatedPlay:(BOOL)arg1;
- (id /* block */)onCarouselAnimationFinishOnceBlock;
- (void)setOnCarouselAnimationFinishOnceBlock:(id /* block */)arg1;
- (BOOL)isAnimationStart;
- (void)setIsAnimationStart:(BOOL)arg1;
- (BOOL)isInAnimation;
- (void)setIsInAnimation:(BOOL)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)scrollTimer;
- (void)setScrollTimer:(id)arg1;
- (void)setCurrentLabel:(id)arg1;
- (void)setNextLabel:(id)arg1;
- (unsigned long long)repeatCount;
- (void)setRepeatCount:(unsigned long long)arg1;
- (unsigned long long)remainingCount;
- (void)setRemainingCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

