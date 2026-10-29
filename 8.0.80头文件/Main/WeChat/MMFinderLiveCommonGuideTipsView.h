@interface MMFinderLiveCommonGuideTipsView : UIView
{
    UILabel * _label; // +0x8
    MMRectTriangleArrowView * _backgroundView; // +0x10
    MMFinderLiveCommonGuideTipsParams * _params; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithParams:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)pinToPoint:(CGPoint)arg1 area:(CGRect)arg2;
- (void)onSendEvent:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
