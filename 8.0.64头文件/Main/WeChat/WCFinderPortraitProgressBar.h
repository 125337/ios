@interface WCFinderPortraitProgressBar : WCFinderProgressBar <UIGestureRecognizerDelegate>
{
    MMUIButton * _dotBtn; // +0x8
    unsigned long long _curType; // +0x10
    UIPanGestureRecognizer * _panGes; // +0x18
    NSArray * _supportType; // +0x20
    WCFinderProgressBarConfig * _config; // +0x28
    double _barHeight; // +0x30
    double _dotSize; // +0x38
    UIColor * _dotColor; // +0x40
    UIColor * _leftColor; // +0x48
    UIColor * _rightColor; // +0x50
    WCFinderProgressBarAnchorPointView * _fixedAnchorPointView; // +0x58
    UIView * _leftBarView; // +0x60
    UIView * _rightBarView; // +0x68
    UIView * _midBarView; // +0x70
    double _offsetX; // +0x78
}
+ (id)barHeightDictionary;
+ (id)dotSizeDictionary;
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)configCurType:(unsigned long long)arg1;
- (void)configSupportType:(id)arg1;
- (BOOL)isSupportType:(unsigned long long)arg1;
- (void)setCurType:(unsigned long long)arg1;
- (void)configUI;
- (void)layoutHighlightAnchorPointView:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onPanProgressIcon:(id)arg1;
- (double)checkPositionX:(double)arg1;
- (unsigned long long)getDragState:(long long)arg1;
- (BOOL)isInMidBarDraggingState;
- (id)updateTargetAnchorPointValue:(id)arg1;
- (id)getConfig;
- (double)barHeight;
- (double)dotSize;
- (CGSize)curAnchorPointSize;
- (id)rightColor;
- (id)leftColor;
- (id)dotColor;
- (id)accessibilityLabel;
- (id)leftBarView;
- (id)rightBarView;
- (id)midBarView;
- (id)fixedAnchorPointView;
- (id)dotBtn;
- (id)panGes;
- (void)setDotBtn:(id)arg1;
- (unsigned long long)curType;
- (void)setPanGes:(id)arg1;
- (id)supportType;
- (void)setSupportType:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void)setBarHeight:(double)arg1;
- (void)setDotSize:(double)arg1;
- (void)setDotColor:(id)arg1;
- (void)setLeftColor:(id)arg1;
- (void)setRightColor:(id)arg1;
- (void)setFixedAnchorPointView:(id)arg1;
- (void)setLeftBarView:(id)arg1;
- (void)setRightBarView:(id)arg1;
- (void)setMidBarView:(id)arg1;
- (double)offsetX;
- (void)setOffsetX:(double)arg1;
- (void).cxx_destruct;
@end
