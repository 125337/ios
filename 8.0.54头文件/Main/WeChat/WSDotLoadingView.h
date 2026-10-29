@interface WSDotLoadingView : UIView
{
    NSMutableArray * _dots; // +0x8
    BOOL _animating; // +0x10
    CGSize _dotSize; // +0x18
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)ensureDotsPathCreated;
- (void)resetPos;
- (void)setDetachDistance:(double)arg1;
- (id)fadeInAnimation:(double)arg1;
- (BOOL)isDotAnimationRemoved;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;
@end

