@interface WAWeAppBindListTableCellView : UITableViewCell
{
    MMWebImageView * _headImageView; // +0x8
    UILabel * _titleLabel; // +0x10
    UIView * _sepreateLine; // +0x18
    UILabel * _descLabel; // +0x20
    BOOL _isLastOne; // +0x28
}
+ (double)cellHeightWith:(id)arg1 viewWidth:(double)arg2;
+ (id)descLabelFont;
+ (long long)descLabelLineBreakMode;
+ (id)titleLabelFont;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateDataWithHeadImageURL:(id)arg1 title:(id)arg2 desc:(id)arg3 isLastOne:(BOOL)arg4;
- (void)updateDescLabelText:(id)arg1;
- (void)updateSeperateLine:(BOOL)arg1;
- (void)initView;
- (void)initHeadImgeView;
- (void)initTitleLabel;
- (void)initSeperateLine;
- (void)initDescLabel;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
