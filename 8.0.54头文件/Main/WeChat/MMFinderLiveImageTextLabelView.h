@interface MMFinderLiveImageTextLabelView : MMUIView
{
    MMFinderLiveImageTextLabelParams * _params; // +0x8
    MMWebImageView * _leftImageView; // +0x10
    UILabel * _label; // +0x18
    UIImageView * _rightImageView; // +0x20
}
+ (double)widthWithParams:(id)arg1;
+ (CGSize)sizeWithParams:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setParams:(id)arg1;
- (void)update;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)params;
- (id)leftImageView;
- (void)setLeftImageView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)rightImageView;
- (void)setRightImageView:(id)arg1;
- (void).cxx_destruct;
@end

