@interface WCFinderProfileNewLifeInteractionGadgetView : UIView
{
    UIImageView * _imageView; // +0x8
    MMUILabel * _countLabel; // +0x10
}
+ (double)estimateHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)initLayouts;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateWithSvgIconName:(id)arg1 countString:(id)arg2;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (void).cxx_destruct;
@end

