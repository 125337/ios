@interface WCFinderSearchHistoryClearTableViewCell : UITableViewCell
{
    UILabel * _titleLabel; // +0x8
    UIImageView * _deleteImageView; // +0x10
    UIView * _bottomLine; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)deleteImageView;
- (void)setDeleteImageView:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end

