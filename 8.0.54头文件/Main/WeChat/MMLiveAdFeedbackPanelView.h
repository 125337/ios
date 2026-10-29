@interface MMLiveAdFeedbackPanelView : WCFinderAdFeedbackPanelView
{
    double _containerTop; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 containerTop:(double)arg2;
- (void)setupSubviews;
- (void)layoutAfterSetup;
- (double)containerTop;
- (void)setContainerTop:(double)arg1;
@end

