@interface WCCanvasAdPageIndicator : UIView
{
    BOOL _nextPageRunningFlag; // +0x8
    BOOL _fillCurrentRunningFlag; // +0x9
    long long _numberOfPages; // +0x10
    double _progressOfTotal; // +0x18
    double _progressOfCurrent; // +0x20
    CADisplayLink * _displayLink; // +0x28
    long long _nextPageStartPage; // +0x30
    double _nextPageStartTimeMs; // +0x38
    double _nextPageDuration; // +0x40
    double _nextPageProgressOfStartPage; // +0x48
    double _nextPageProgressOfNextPage; // +0x50
    double _fillCurrentStartProgress; // +0x58
    double _fillCurrentStartTimeMs; // +0x60
    double _fillCurrentDuration; // +0x68
    UIColor * _indicatorColorBg; // +0x70
    UIColor * _indicatorColorBorder; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (CGRect)getSelfFrame;
- (void)setNumberOfPages:(long long)arg1;
- (void)setProgressOfCurrent:(double)arg1;
- (void)setProgressOfTotal:(double)arg1;
- (void)setProgressOfCurrentInternal:(double)arg1;
- (void)setProgressOfTotalInternal:(double)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)drawRoundedRectangle:(CGContext *)arg1 rect:(CGRect)arg2 fillColor:(id)arg3 strokeColor:(id)arg4 shadowColor:(id)arg5 drawingMode:(int)arg6;
- (CGPath *)makeRoundedRectanglePath:(CGRect)arg1;
- (void)tryStartDisplayLink;
- (void)releaseDisplayLink;
- (void)displayLinkAutoCheck;
- (void)autoNextPage:(long long)arg1 duration:(double)arg2;
- (void)autoNextPage:(long long)arg1 duration:(double)arg2 progressOfStartPage:(double)arg3 progressOfNextPage:(double)arg4;
- (void)autoFillCurrent:(double)arg1 duration:(double)arg2;
- (void)stopAutoNextPage;
- (void)stopAutoFillCurrent;
- (long long)numberOfPages;
- (double)progressOfTotal;
- (double)progressOfCurrent;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (BOOL)nextPageRunningFlag;
- (void)setNextPageRunningFlag:(BOOL)arg1;
- (long long)nextPageStartPage;
- (void)setNextPageStartPage:(long long)arg1;
- (double)nextPageStartTimeMs;
- (void)setNextPageStartTimeMs:(double)arg1;
- (double)nextPageDuration;
- (void)setNextPageDuration:(double)arg1;
- (double)nextPageProgressOfStartPage;
- (void)setNextPageProgressOfStartPage:(double)arg1;
- (double)nextPageProgressOfNextPage;
- (void)setNextPageProgressOfNextPage:(double)arg1;
- (BOOL)fillCurrentRunningFlag;
- (void)setFillCurrentRunningFlag:(BOOL)arg1;
- (double)fillCurrentStartProgress;
- (void)setFillCurrentStartProgress:(double)arg1;
- (double)fillCurrentStartTimeMs;
- (void)setFillCurrentStartTimeMs:(double)arg1;
- (double)fillCurrentDuration;
- (void)setFillCurrentDuration:(double)arg1;
- (id)indicatorColorBg;
- (void)setIndicatorColorBg:(id)arg1;
- (id)indicatorColorBorder;
- (void)setIndicatorColorBorder:(id)arg1;
- (void).cxx_destruct;
@end

