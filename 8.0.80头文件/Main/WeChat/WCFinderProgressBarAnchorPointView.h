@interface WCFinderProgressBarAnchorPointView : UIView
{
    NSNumber * _anchorPointNumber; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateWithAnchorPointValue:(id)arg1;
- (BOOL)shouldShow;
- (BOOL)shouldTriggerHaptic:(double)arg1;
- (double)anchorPointValue;
- (void)layoutSubviews;
- (id)anchorPointNumber;
- (void)setAnchorPointNumber:(id)arg1;
- (void).cxx_destruct;
@end
