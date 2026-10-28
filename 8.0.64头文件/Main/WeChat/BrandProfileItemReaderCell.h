@interface BrandProfileItemReaderCell : BrandProfileItemBaseCell
{
    CAGradientLayer * _coverMaskLayer; // +0x8
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)updateCoverImageView;
- (void)updateTitleView;
- (void)updateDescLabel;
- (id)getTitleViewColor:(BOOL)arg1;
- (id)getDescLabelColor:(BOOL)arg1;
- (id)coverMaskLayer;
- (void)layoutSubviews;
- (void)layoutSubviewsTopItem;
- (void)layoutSubviewsNormalItem;
- (id)accessibilityLabel;
- (void)setCoverMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
