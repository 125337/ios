@interface MJShootTemplatePanelTitleCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    MMUILabel * _titleLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)configCellWithTitle:(id)arg1;
- (void)setIsCellSelected:(BOOL)arg1;
- (BOOL)isCellSelected;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

