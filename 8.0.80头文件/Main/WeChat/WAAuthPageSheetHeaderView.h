@interface WAAuthPageSheetHeaderView : WAAuthPageSheetBaseView
{
    MMWebImageView * _iconView; // +0x8
    UILabel * _nameLabel; // +0x10
    UILabel * _applyLabel; // +0x18
    UIButton * _infoButton; // +0x20
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)applyLabel;
- (void)setApplyLabel:(id)arg1;
- (id)infoButton;
- (void)setInfoButton:(id)arg1;
- (void).cxx_destruct;
@end
