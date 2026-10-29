@interface MMActionSheetGeneralRowView : MMUIView
{
    UIButton * _backgroundButton; // +0x8
    MMWebImageView * _iconImageView; // +0x10
    UIImageView * _arrowImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _subTitleLabel; // +0x28
    UIView * _titleLabelContainer; // +0x30
    id /* block */ _tapHandler; // +0x38
}
+ (double)rowViewHeight;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 iconUrl:(id)arg3 iconImage:(id)arg4 tapHandler:(id /* block */)arg5;
- (void)setupAllSubviewsWithTitle:(id)arg1 subTitle:(id)arg2 iconUrl:(id)arg3 iconImage:(id)arg4;
- (void)layoutSubviews;
- (void)onTapped;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)titleLabelContainer;
- (void)setTitleLabelContainer:(id)arg1;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

