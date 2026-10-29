@interface MJShootSelectionSheetCell : UITableViewCell
{
    MMUILabel * _internalTitleLabel; // +0x8
    MMUIImageView * _internalCheckmarkImageView; // +0x10
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupViews;
- (void)configureWithTitle:(id)arg1 selected:(BOOL)arg2;
- (id)titleLabel;
- (id)checkmarkImageView;
- (id)internalTitleLabel;
- (void)setInternalTitleLabel:(id)arg1;
- (id)internalCheckmarkImageView;
- (void)setInternalCheckmarkImageView:(id)arg1;
- (void).cxx_destruct;
@end
