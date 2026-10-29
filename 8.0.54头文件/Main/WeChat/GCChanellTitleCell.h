@interface GCChanellTitleCell : GCBaseCollectionViewCell
{
    UILabel * _titleLabel; // +0x8
    UILabel * _numberLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithCellModel:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg1;
- (void).cxx_destruct;
@end

