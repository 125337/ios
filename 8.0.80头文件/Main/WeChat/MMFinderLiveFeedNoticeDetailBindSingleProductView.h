@interface MMFinderLiveFeedNoticeDetailBindSingleProductView : MMFinderLiveFeedNoticeDetailBindItemContentView
{
    BOOL _fetchCanceled; // +0x8
    MMWebImageView * _imageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UIButton * _button; // +0x20
}
+ (BOOL)shouldDisplayWithAnchor:(id)arg1 notice:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)product;
- (void)updateButton;
- (void)updateWithAnchor:(id)arg1 notice:(id)arg2;
- (void)fetchProduct;
- (void)onButtonClicked;
- (void)onClicked;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (BOOL)fetchCanceled;
- (void)setFetchCanceled:(BOOL)arg1;
- (void).cxx_destruct;
@end
