@interface WCCardChooseSubPeopleLabelView : MMUIView
{
    MMUILabel * _mainLabel; // +0x8
    MMUILabel * _subLabel; // +0x10
    double _maxWidth; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)mainLabel;
- (id)subLabel;
- (void)setMainLabel:(id)arg1;
- (void)setSubLabel:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end

