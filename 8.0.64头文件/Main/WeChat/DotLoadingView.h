@interface DotLoadingView : UIView
{
    long long _dotStyle; // +0x8
    UIColor * _dotColor; // +0x10
    NSMutableArray * _dots; // +0x18
    BOOL _animating; // +0x20
    BOOL _hidesWhenStopped; // +0x21
    double _separatorDistance; // +0x28
    CGSize _dotSize; // +0x30
}
+ (id)getDotColor:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1 dotStyle:(long long)arg2 dotColor:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1 dotStyle:(long long)arg2 dotColor:(long long)arg3 dotSize:(CGSize)arg4;
- (id)initWithFrame:(CGRect)arg1 dotStyle:(long long)arg2 dotUIColor:(id)arg3 dotSize:(CGSize)arg4;
- (void)ensureDotsPathCreated;
- (void)resetPos;
- (id)createDotPath;
- (id)fadeInAnimation:(double)arg1;
- (void)forceStartLoading;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isLoading;
- (void)setDetachDistance:(double)arg1;
- (CGSize)dotSize;
- (void)setDotSize:(CGSize)arg1;
- (double)separatorDistance;
- (void)setSeparatorDistance:(double)arg1;
- (BOOL)hidesWhenStopped;
- (void)setHidesWhenStopped:(BOOL)arg1;
- (void).cxx_destruct;
@end
