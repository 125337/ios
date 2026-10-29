@interface WeDropBaseHeaderView : WeDropPassthroghView
{
    WeDropPassthroghView<WeDropHeaderViewComponent> * _upperContentView; // +0x8
    WeDropPassthroghView<WeDropHeaderViewComponent> * _lowerContentView; // +0x10
}
- (void)setUpperContentView:(id)arg1;
- (void)setLowerContentView:(id)arg1;
- (double)contentVerticalPaddingForViewHeight:(double)arg1;
- (double)defaultHeightWithWidth:(double)arg1 viewHeight:(double)arg2;
- (void)layoutSubviews;
- (id)upperContentView;
- (id)lowerContentView;
- (void).cxx_destruct;
@end
