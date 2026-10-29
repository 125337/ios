@interface MMFinderLiveNoticeDetailsProductsView : UIView
{
    UILabel * _titleLabel; // +0x8
    MMArrayConverter * _imageConverter; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithProductImageURLs:(id)arg1 count:(unsigned long long)arg2 type:(long long)arg3;
- (void)layoutSubviews;
- (double)imageWidth;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)imageConverter;
- (void)setImageConverter:(id)arg1;
- (void).cxx_destruct;
@end
