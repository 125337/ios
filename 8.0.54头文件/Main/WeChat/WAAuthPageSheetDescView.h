@interface WAAuthPageSheetDescView : WAAuthPageSheetBaseView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _subTitleLabel; // +0x10
}
+ (id)createAttrTitle:(id)arg1;
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

