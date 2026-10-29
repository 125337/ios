@interface WCFinderPortraitProgressBar : WCFinderProgressBar <UIGestureRecognizerDelegate>
{
    int _lastTime; // +0x8
    MMUIButton * _dotBtn; // +0x10
    unsigned long long _curType; // +0x18
    UIPanGestureRecognizer * _panGes; // +0x20
    unsigned long long _supportType; // +0x28
    double _barHeight; // +0x30
    double _dotSize; // +0x38
    UIColor * _dotColor; // +0x40
    UIColor * _leftColor; // +0x48
    UIColor * _rightColor; // +0x50
    UIView * _leftBarView; // +0x58
    UIView * _rightBarView; // +0x60
    NSNumber * _valueNum; // +0x68
    double _lastX; // +0x70
    double _offsetX; // +0x78
}
- (void)layoutSubviews;
- (void)configCurType:(unsigned long long)arg1;
- (void)configSupportType:(unsigned long long)arg1;
- (BOOL)isSupportType:(unsigned long long)arg1;
- (void)setCurType:(unsigned long long)arg1;
- (void)configUI;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onPanProgressIcon:(id)arg1;
- (double)checkPositionX:(double)arg1;
- (unsigned long long)getDragState:(long long)arg1;
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
- (double)barHeight;
- (double)dotSize;
- (id)rightColor;
- (id)leftColor;
- (id)dotColor;
- (id)accessibilityLabel;
- (id)leftBarView;
- (id)rightBarView;
- (id)dotBtn;
- (id)panGes;
- (void)setDotBtn:(id)arg1;
- (unsigned long long)curType;
- (void)setPanGes:(id)arg1;
- (unsigned long long)supportType;
- (void)setSupportType:(unsigned long long)arg1;
- (void)setBarHeight:(double)arg1;
- (void)setDotSize:(double)arg1;
- (void)setDotColor:(id)arg1;
- (void)setLeftColor:(id)arg1;
- (void)setRightColor:(id)arg1;
- (void)setLeftBarView:(id)arg1;
- (void)setRightBarView:(id)arg1;
- (id)valueNum;
- (void)setValueNum:(id)arg1;
- (int)lastTime;
- (void)setLastTime:(int)arg1;
- (double)lastX;
- (void)setLastX:(double)arg1;
- (double)offsetX;
- (void)setOffsetX:(double)arg1;
- (void).cxx_destruct;
@end

