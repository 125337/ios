@interface WCFinderProgressBar : UIView
{
    BOOL _showLargeBar; // +0x8
    BOOL _showAnchorPoint; // +0x9
    id <WCFinderProgressBarDelegate> _delegate; // +0x10
    id <WCFinderProgressBarExtendDelegate> _extendDelegate; // +0x18
    MMUIButton * _dotBtn; // +0x20
}
- (double)value;
- (void)setValue:(double)arg1;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)reset;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)removeProgressAnimation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)extendDelegate;
- (void)setExtendDelegate:(id)arg1;
- (BOOL)isShowLargeBar;
- (void)setShowLargeBar:(BOOL)arg1;
- (BOOL)isShowAnchorPoint;
- (void)setShowAnchorPoint:(BOOL)arg1;
- (id)dotBtn;
- (void).cxx_destruct;
@end

