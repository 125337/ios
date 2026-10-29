@interface MMGameLiveAccessoryContainerView : MMUIView
{
    unsigned long long _currControlState; // +0x8
    CGSize _selfSize; // +0x10
}
- (void)layoutSubviews;
- (void)checkSelfSizeChanged;
- (void)delayCheckControlStateChanged;
- (BOOL)checkControlStateChanged;
- (double)scaledPIPMaxWidthPercent;
- (void)reportForControlStateChanged;
- (void)didMoveToWindow;
- (CGSize)selfSize;
- (void)setSelfSize:(CGSize)arg1;
- (unsigned long long)currControlState;
- (void)setCurrControlState:(unsigned long long)arg1;
@end
