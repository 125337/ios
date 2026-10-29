@interface PendantPreviewSelectViewCell : UITableViewCell
{
    UILabel * _titleLabel; // +0x8
    UIImageView * _selectImageView; // +0x10
    UIView * _separatorView; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupTitle:(id)arg1 isSeleceted:(BOOL)arg2;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)selectImageView;
- (void)setSelectImageView:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (void).cxx_destruct;
@end
