@interface WCPhotoMutipleImageHeadView : UIView
{
    NSString * _mainTitle; // +0x8
    NSString * _subTitle; // +0x10
    NSString * _mediaIndicator; // +0x18
    UIFont * _mainTitleFont; // +0x20
    UIFont * _subTitleFont; // +0x28
    UIColor * _titleColor; // +0x30
    UILabel * _mainTitleLabel; // +0x38
    UILabel * _subTitleLabel; // +0x40
    UILabel * _mediaIndicatorLabel; // +0x48
    NSLayoutConstraint * _stackCenterYConstraint; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithMainTitle:(id)arg1 subTitle:(id)arg2;
- (void)setupDefaultValues;
- (void)setupUI;
- (void)setupConstraints;
- (void)layoutSubviews;
- (void)updateMainTitle:(id)arg1 subTitle:(id)arg2;
- (void)updateMainTitle:(id)arg1 subTitle:(id)arg2 animated:(BOOL)arg3;
- (void)updateMainTitle:(id)arg1 subTitle:(id)arg2 mediaIndicator:(id)arg3;
- (void)updateMainTitle:(id)arg1 subTitle:(id)arg2 mediaIndicator:(id)arg3 animated:(BOOL)arg4;
- (void)updateContentCenterY:(double)arg1;
- (void)setMainTitle:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setMediaIndicator:(id)arg1;
- (void)setMainTitleFont:(id)arg1;
- (void)setSubTitleFont:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (id)mainTitle;
- (id)subTitle;
- (id)mediaIndicator;
- (id)mainTitleFont;
- (id)subTitleFont;
- (id)titleColor;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)mediaIndicatorLabel;
- (void)setMediaIndicatorLabel:(id)arg1;
- (id)stackCenterYConstraint;
- (void)setStackCenterYConstraint:(id)arg1;
- (void).cxx_destruct;
@end
