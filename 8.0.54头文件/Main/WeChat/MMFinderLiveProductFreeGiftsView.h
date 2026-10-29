@interface MMFinderLiveProductFreeGiftsView : MMUIButton
{
    NSArray * _imageViews; // +0x8
    UILabel * _label; // +0x10
}
+ (double)imageWidth;
+ (double)preferHeightForGoods:(id)arg1 inWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithGoods:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)accessibilityLabel;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end

