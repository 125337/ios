@interface OMJOverlayGuideLine : UIView
{
    OMJOverlayGuideLineStyle * _guideLineStyle; // +0x8
}
+ (id)horizontalGuideLine;
+ (id)verticalGuideLine;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)configWithGuideLineStyle:(id)arg1;
- (double)lineWeight;
- (void).cxx_destruct;
@end

