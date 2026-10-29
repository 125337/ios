@interface WASMTPageSheetHeaderView : WAAuthPageSheetBaseView
{
    UIButton * _backButton; // +0x8
    UILabel * _titleLabel; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

