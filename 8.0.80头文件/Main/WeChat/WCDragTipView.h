@interface WCDragTipView : MMUIView
{
    BOOL _isDismissing; // +0x8
    BOOL _hasDelayHiddenPlan; // +0x9
    UIView * _contentView; // +0x10
    MMUILabel * _textLabel; // +0x18
    CAShapeLayer * _triangleLayer; // +0x20
    double _screenPadding; // +0x28
    long long _popoverSize; // +0x30
    long long _triangleDirection; // +0x38
    double _triangleRelativeX; // +0x40
    double _cornerRadius; // +0x48
    double _horizontalPadding; // +0x50
    double _verticalPadding; // +0x58
}
- (id)initWithText:(id)arg1 screenPadding:(double)arg2;
- (id)initWithText:(id)arg1 screenPadding:(double)arg2 size:(long long)arg3;
- (void)setupSizeParams;
- (void)setupViewsWithText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTriangleDirection:(long long)arg1;
- (void)setTriangleCenterRelativeX:(double)arg1;
- (void)setTriangleCenterToView:(id)arg1;
- (void)showAtView:(id)arg1 text:(id)arg2;
- (void)dismiss;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)updateTriangle;
- (void)setHidden:(BOOL)arg1;
- (void)animatedHide;
- (void)delayAnimateHideWithTime:(double)arg1;
- (void)animatedHidePlan;
- (void)dealloc;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)triangleLayer;
- (void)setTriangleLayer:(id)arg1;
- (double)screenPadding;
- (void)setScreenPadding:(double)arg1;
- (long long)popoverSize;
- (void)setPopoverSize:(long long)arg1;
- (long long)triangleDirection;
- (double)triangleRelativeX;
- (void)setTriangleRelativeX:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (double)horizontalPadding;
- (void)setHorizontalPadding:(double)arg1;
- (double)verticalPadding;
- (void)setVerticalPadding:(double)arg1;
- (BOOL)hasDelayHiddenPlan;
- (void)setHasDelayHiddenPlan:(BOOL)arg1;
- (void).cxx_destruct;
@end
