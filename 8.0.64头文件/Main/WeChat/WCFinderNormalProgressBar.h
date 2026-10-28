@interface WCFinderNormalProgressBar : WCFinderProgressBar <UIGestureRecognizerDelegate>
{
    BOOL _showAnchorPoint; // +0x8
    BOOL _showLargeBar; // +0x9
    MMUIButton * _dotBtn; // +0x10
    WCFinderNormalProgressBarConfig * _config; // +0x18
    UIView * _leftBarView; // +0x20
    UIView * _rightBarView; // +0x28
    UIView * _midBarView; // +0x30
    UIPanGestureRecognizer * _panGes; // +0x38
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
- (void)reset;
- (id)getConfig;
- (void)setShowLargeBar:(BOOL)arg1;
- (void)setShowAnchorPoint:(BOOL)arg1;
- (void)layoutHighlightAnchorPointView:(id)arg1;
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
- (id)midBarView;
- (void)setMidBarView:(id)arg1;
- (void)setPanGes:(id)arg1;
- (void).cxx_destruct;
@end
