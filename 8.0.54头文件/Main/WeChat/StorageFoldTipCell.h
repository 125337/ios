@interface StorageFoldTipCell : UITableViewCell
{
    BOOL _isFold; // +0x8
    UIImageView * _iconView; // +0x10
    MMUILabel * _titleLabel; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateView;
- (void)layoutSubviews;
- (BOOL)isFold;
- (void)setIsFold:(BOOL)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

