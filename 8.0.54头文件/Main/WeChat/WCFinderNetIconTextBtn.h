@interface WCFinderNetIconTextBtn : UIView
{
    id /* block */ _tapBlock; // +0x8
    MMWebImageView * _iconImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    double _leftRightMargin; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)changeToShadowMode:(BOOL)arg1;
- (void)updateTitleTextColor:(id)arg1;
- (void)updateLeftRightMargin:(double)arg1;
- (void)onClickAction;
- (id)titleLabel;
- (id)iconImageView;
- (void)updateWithIconURL:(id)arg1 title:(id)arg2;
- (void)updateWithIconLightURL:(id)arg1 iconDarkUrl:(id)arg2 title:(id)arg3;
- (void)layoutAllSubviews;
- (id)getTitleContent;
- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (double)leftRightMargin;
- (void)setLeftRightMargin:(double)arg1;
- (void).cxx_destruct;
@end

