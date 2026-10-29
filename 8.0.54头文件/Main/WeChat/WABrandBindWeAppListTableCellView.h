@interface WABrandBindWeAppListTableCellView : UITableViewCell
{
    MMWebImageView * _headImageView; // +0x8
    UILabel * _titleLabel; // +0x10
    UIView * _sepreateLine; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateDataWithHeadImageURL:(id)arg1 title:(id)arg2 isShowSeperateLine:(BOOL)arg3;
- (void)initView;
- (void)initHeadImgeView;
- (void)initTitleLabel;
- (void)initSeperateLine;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end

