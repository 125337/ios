@interface MMFinderLiveFeedNoticeDetailBindBlueGiftView : MMFinderLiveFeedNoticeDetailBindItemContentView
{
    UILabel * _titleLabel; // +0x8
    MMWebImageView * _productImageView; // +0x10
    UILabel * _productNameLabel; // +0x18
    UIImageView * _arrowImageView; // +0x20
}
+ (BOOL)shouldDisplayWithAnchor:(id)arg1 notice:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)blueGiftMethod;
- (void)updateWithAnchor:(id)arg1 notice:(id)arg2;
- (void)layoutSubviews;
- (void)onClicked;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)productImageView;
- (void)setProductImageView:(id)arg1;
- (id)productNameLabel;
- (void)setProductNameLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
