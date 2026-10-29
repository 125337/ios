@interface BrandProfileItemMultiImageCell : BrandProfileItemBaseCell
{
    BrandMultiImageCoverView * _multiCoverView; // +0x8
    BrandImageCountView * _imageCountView; // +0x10
    BrandImageCoverGradientView * _gradientBGView; // +0x18
    UIStackView * _titleStackView; // +0x20
    NSMutableArray * _textInsideCoverConstraints; // +0x28
    NSMutableArray * _textOutsideCoverConstraints; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)setupCoverViews;
- (void)setupImageCountViews;
- (void)setupTitleViews;
- (void)onUpdateViewModel;
- (void)updateTitleView;
- (void)updateCoverImageViews;
- (void)updateTextInsideCoverStyle;
- (void)updateTextOutsideCoverStyle;
- (id)multiCoverView;
- (void)setMultiCoverView:(id)arg1;
- (id)imageCountView;
- (void)setImageCountView:(id)arg1;
- (id)gradientBGView;
- (void)setGradientBGView:(id)arg1;
- (id)titleStackView;
- (void)setTitleStackView:(id)arg1;
- (id)textInsideCoverConstraints;
- (void)setTextInsideCoverConstraints:(id)arg1;
- (id)textOutsideCoverConstraints;
- (void)setTextOutsideCoverConstraints:(id)arg1;
- (void).cxx_destruct;
@end
