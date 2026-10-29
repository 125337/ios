@interface TextStateCellView : UITableViewCell
{
    MSETextStateIcon * _icon; // +0x8
    TextStateViewModel * _viewModel; // +0x10
    UIImageView * _iconImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _rightImageView; // +0x28
    UIView * _lineView; // +0x30
}
+ (id)cellWithTableView:(id)arg1 andViewModel:(id)arg2;
- (void)layoutCellView;
- (void)updateCellView;
- (void)hiddenRightImage:(BOOL)arg1;
- (void)setIcon:(id)arg1;
- (id)icon;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rightImageView;
- (void)setRightImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end

