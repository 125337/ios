@interface MMFinderLiveFeedNoticeDetailBindProductsView : MMFinderLiveFeedNoticeDetailBindItemContentView
{
    UILabel * _titleLabel; // +0x8
    MMArrayConverter * _imageConverter; // +0x10
    UILabel * _countLabel; // +0x18
    UIImageView * _arrowView; // +0x20
}
+ (BOOL)shouldDisplayWithAnchor:(id)arg1 notice:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithAnchor:(id)arg1 notice:(id)arg2;
- (void)onClicked;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)imageConverter;
- (void)setImageConverter:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
