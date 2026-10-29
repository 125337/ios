@interface WCFinderCommentECProductCardView : MMUIView
{
    MMWebImageView * _imageView; // +0x8
    UILabel * _titleLabel; // +0x10
    MMECProductShowBoxItemsView * _showBoxItemsView; // +0x18
    MMFinderLiveMultiPriceView * _priceView; // +0x20
    MMECSimpleShopView * _shopView; // +0x28
}
+ (UIEdgeInsets)padding;
+ (CGSize)imageSize;
+ (double)imageToShopView;
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)initContainer;
- (void)initSubviews;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)showBoxItemsView;
- (void)setShowBoxItemsView:(id)arg1;
- (id)priceView;
- (void)setPriceView:(id)arg1;
- (id)shopView;
- (void)setShopView:(id)arg1;
- (void).cxx_destruct;
@end
