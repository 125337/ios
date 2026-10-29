@interface WCFinderNormalProgressBar : WCFinderProgressBar <UIGestureRecognizerDelegate>
{
    BOOL _showAnchorPoint; // +0x8
    BOOL _showLargeBar; // +0x9
    int _lastTime; // +0xc
    MMUIButton * _dotBtn; // +0x10
    WCFinderNormalProgressBarConfig * _config; // +0x18
    UIView * _leftBarView; // +0x20
    UIView * _rightBarView; // +0x28
    NSNumber * _valueNum; // +0x30
    UIPanGestureRecognizer * _panGes; // +0x38
    double _lastX; // +0x40
}
+ (id)finderNormalProgressBarWithFrame:(CGRect)arg1;
+ (double)progressBarVisibleHeight;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)setupWithConfig:(id)arg1;
- (id)panGes;
- (void)onPanProgressIcon:(id)arg1;
- (void)layoutSubviews;
- (double)value;
- (void)setValue:(double)arg1;
- (void)updateUIWithValue:(double)arg1;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3;
- (BOOL)shoudAnimateToProgress:(double)arg1 duration:(double)arg2 time:(double)arg3;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3 completion:(id /* block */)arg4;
- (void)removeProgressAnimation;
- (BOOL)checkProgressValueValid:(double)arg1;
- (void)reset;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)resetAnimation;
- (void)setShowLargeBar:(BOOL)arg1;
- (void)setShowAnchorPoint:(BOOL)arg1;
- (BOOL)isShowAnchorPoint;
- (BOOL)isShowLargeBar;
- (id)dotBtn;
- (void)setDotBtn:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)leftBarView;
- (void)setLeftBarView:(id)arg1;
- (id)rightBarView;
- (void)setRightBarView:(id)arg1;
- (id)valueNum;
- (void)setValueNum:(id)arg1;
- (void)setPanGes:(id)arg1;
- (int)lastTime;
- (void)setLastTime:(int)arg1;
- (double)lastX;
- (void)setLastX:(double)arg1;
- (void).cxx_destruct;
@end

