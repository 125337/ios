@interface WeDropBaseFooterView : WeDropPassthroghView
{
    UIView * _upperContentView; // +0x8
    UIView * _lowerContentView; // +0x10
    WeDropPassthroghView * _upperContainer; // +0x18
    WeDropPassthroghView * _lowerContainer; // +0x20
}
- (id)init;
- (void)initSubviews;
- (void)setUpperContentView:(id)arg1;
- (void)setLowerContentView:(id)arg1;
- (void)layoutSubviews;
- (double)heightForWidth:(double)arg1;
- (double)measureContentView:(id)arg1 width:(double)arg2;
- (id)upperContentView;
- (id)lowerContentView;
- (id)upperContainer;
- (void)setUpperContainer:(id)arg1;
- (id)lowerContainer;
- (void)setLowerContainer:(id)arg1;
- (void).cxx_destruct;
@end
