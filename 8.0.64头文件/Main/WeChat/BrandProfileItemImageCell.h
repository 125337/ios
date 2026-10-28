@interface BrandProfileItemImageCell : BrandProfileItemBaseCell
{
    UIImageView * _imageIconView; // +0x8
    MMUILabel * _imageCountLabel; // +0x10
    CAGradientLayer * _maskLayer; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)updateTitleAndDescTextColor;
- (void)layoutSubviews;
- (void)layoutSingleBigCoverSytle;
- (void)layoutBigCoverStyle;
- (void)layoutBigCoverStyleCoverAndNum;
- (void)layoutSmallCoverSytle;
- (id)accessibilityLabel;
- (id)imageIconView;
- (void)setImageIconView:(id)arg1;
- (id)imageCountLabel;
- (void)setImageCountLabel:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
