@interface BannerButton : UIButton
{
    UIImageView * _arrowImageView; // +0x8
    UILabel * _customTitleLabel; // +0x10
    UIImageView * _headImageView; // +0x18
    double _contentMarginLeft; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setRightArrowImage:(id)arg1;
- (void)setTitleIconImage:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setContentMarginLeft:(double)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)customTitleLabel;
- (void)setCustomTitleLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (double)contentMarginLeft;
- (void).cxx_destruct;
@end

