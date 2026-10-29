@interface WCFinderNormalProgressBarConfig : NSObject
{
    BOOL _barCornerRounded; // +0x8
    BOOL _enablePanProgessIcon; // +0x9
    BOOL _dragShowLargebar; // +0xa
    UIColor * _defaultColor; // +0x10
    UIColor * _inProgressColor; // +0x18
    UIColor * _inProgressColorInLargeState; // +0x20
    double _dotSize; // +0x28
    double _dotSizeInLargeState; // +0x30
    UIColor * _dotColor; // +0x38
    UIColor * _dotColorInLargeState; // +0x40
    double _barHeight; // +0x48
    double _barHeightInLargeState; // +0x50
    UIImage * _progressBarIconImage; // +0x58
}
+ (id)defaultConfig;
- (void)setBarHeight:(double)arg1;
- (void)setBarHeight:(double)arg1 inLargeState:(double)arg2;
- (void)setDotSize:(double)arg1;
- (void)setDotSize:(double)arg1 inLargeState:(double)arg2;
- (void)setDotColor:(id)arg1;
- (void)setDotColor:(id)arg1 inLargeState:(id)arg2;
- (void)setInProgressColor:(id)arg1;
- (void)setInProgressColor:(id)arg1 inLargeState:(id)arg2;
- (id)defaultColor;
- (void)setDefaultColor:(id)arg1;
- (id)inProgressColor;
- (id)inProgressColorInLargeState;
- (double)dotSize;
- (double)dotSizeInLargeState;
- (id)dotColor;
- (id)dotColorInLargeState;
- (double)barHeight;
- (double)barHeightInLargeState;
- (id)progressBarIconImage;
- (void)setProgressBarIconImage:(id)arg1;
- (BOOL)barCornerRounded;
- (void)setBarCornerRounded:(BOOL)arg1;
- (BOOL)enablePanProgessIcon;
- (void)setEnablePanProgessIcon:(BOOL)arg1;
- (BOOL)dragShowLargebar;
- (void)setDragShowLargebar:(BOOL)arg1;
- (void).cxx_destruct;
@end

