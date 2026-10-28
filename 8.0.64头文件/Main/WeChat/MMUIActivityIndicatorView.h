@interface MMUIActivityIndicatorView : UIView <GCLoadingViewProtocol>
{
    BOOL _hidesWhenStopped; // +0x8
    BOOL _animating; // +0x9
    id <MMUIActivityIndicatorViewDelegate> _delegate; // +0x10
    unsigned long long _style; // +0x18
    UIColor * _color; // +0x20
    double _sideLength; // +0x28
    UIImageView * _indicatorView; // +0x30
}
- (void)gcBeginLoading;
- (void)gcEndLoading;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)dealloc;
- (void)startAnimating;
- (void)stopAnimating;
- (void)setFrame:(CGRect)arg1;
- (void)setColor:(id)arg1;
- (void)setSideLength:(double)arg1;
- (void)setHidesWhenStopped:(BOOL)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (CGSize)intrinsicContentSize;
- (void)startAnimatingFromRadian:(id)arg1 needSetAnimating:(BOOL)arg2;
- (void)setAnimating:(BOOL)arg1;
- (void)refreshIndicatorView;
- (void)restoreAnimation;
- (void)didMoveToWindow;
- (void)willEnterForeground;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)style;
- (BOOL)hidesWhenStopped;
- (id)color;
- (double)sideLength;
- (BOOL)isAnimating;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
