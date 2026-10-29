@interface WCFinderPortraitProgressBar : WCFinderProgressBar <UIGestureRecognizerDelegate>
{
    BOOL _exitedFineSegment; // +0x8
    MMUIButton * _dotBtn; // +0x10
    unsigned long long _curType; // +0x18
    UIPanGestureRecognizer * _panGes; // +0x20
    NSArray * _supportType; // +0x28
    WCFinderProgressBarConfig * _config; // +0x30
    double _barHeight; // +0x38
    double _dotSize; // +0x40
    UIColor * _dotColor; // +0x48
    UIColor * _leftColor; // +0x50
    UIColor * _rightColor; // +0x58
    WCFinderProgressBarAnchorPointView * _fixedAnchorPointView; // +0x60
    UIView * _leftBarView; // +0x68
    UIView * _rightBarView; // +0x70
    UIView * _midBarView; // +0x78
    double _offsetX; // +0x80
    double _beginPanLocationX; // +0x88
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
- (double)beginPanLocationX;
- (void)setBeginPanLocationX:(double)arg1;
- (BOOL)exitedFineSegment;
- (void)setExitedFineSegment:(BOOL)arg1;
- (void).cxx_destruct;
@end
