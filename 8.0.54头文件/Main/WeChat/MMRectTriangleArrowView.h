@interface MMRectTriangleArrowView : MMUIView
{
    UIView * _baseContentView; // +0x8
    unsigned long long _displayState; // +0x10
    unsigned long long _dataState; // +0x18
    long long _orientation; // +0x20
    id /* block */ _dismissCallback; // +0x28
    double _triangePosOriginX; // +0x30
    double _triangePosOriginY; // +0x38
}
+ (id)createMaskPathInRect:(CGRect)arg1 cornerRadius:(double)arg2 triangleWidth:(double)arg3 triangleHeight:(double)arg4 orientation:(long long)arg5 triangleX:(double)arg6 triangleY:(double)arg7;
- (id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2;
- (void)addBaseContentView;
- (void)layoutSubviews;
- (void)setArrow:(CGPoint)arg1;
- (CGPoint)arrow;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (void)updateSizeWithContentSize:(CGSize)arg1;
- (void)updateTriangePosLeft:(double)arg1;
- (void)updateTriangePosRight:(double)arg1;
- (void)updateTriangePosTop:(double)arg1;
- (void)updateTriangePosBottom:(double)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)triangeColor;
- (void)updateShapeLayer;
- (void)showWithAnimationFromPositionY:(double)arg1 toPositionY:(double)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)dismissWithAnimationFromPositionY:(double)arg1 toPositionY:(double)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)showWithAnimationFromPositionX:(double)arg1 toPositionX:(double)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)dismissWithAnimationFromPositionX:(double)arg1 toPositionX:(double)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)showWithAnimationToBottom:(double)arg1 horizontalExtendCenter:(double)arg2 beforeAnimating:(id /* block */)arg3 animating:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)showWithAnimationToBottom:(double)arg1 fromScale:(double)arg2 xAnchor:(double)arg3 xAnchorStartPosition:(double)arg4 duration:(double)arg5 beforeAnimating:(id /* block */)arg6 animating:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)showWithoutAnimation;
- (void)showWithAnimationFromPosition:(CGPoint)arg1 toPosition:(CGPoint)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)dismissWithAnimationToBottom:(double)arg1 horizontalExtendCenter:(double)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)dismissWithAnimationToCenterY:(double)arg1 toScale:(double)arg2 xAnchor:(double)arg3 xAnchorStartPosition:(double)arg4 duration:(double)arg5 animating:(id /* block */)arg6 waiting:(id /* block */)arg7;
- (void)dismissWithAnimationFromPosition:(CGPoint)arg1 toPosition:(CGPoint)arg2 animating:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)dismissWithoutAnimation;
- (void)dismissWithAnimation:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)dismissWithAnimation;
- (void)onShowed;
- (void)onDismissed;
- (id)baseContentView;
- (void)setBaseContentView:(id)arg1;
- (unsigned long long)displayState;
- (void)setDisplayState:(unsigned long long)arg1;
- (unsigned long long)dataState;
- (void)setDataState:(unsigned long long)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (id /* block */)dismissCallback;
- (void)setDismissCallback:(id /* block */)arg1;
- (double)triangePosOriginX;
- (void)setTriangePosOriginX:(double)arg1;
- (double)triangePosOriginY;
- (void)setTriangePosOriginY:(double)arg1;
- (void).cxx_destruct;
@end

