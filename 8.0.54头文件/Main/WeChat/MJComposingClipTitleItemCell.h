@interface MJComposingClipTitleItemCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    MMUILabel * _titleLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)configCellWithTitle:(id)arg1;
- (void)setIsCellSelected:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (BOOL)isCellSelected;
- (void).cxx_destruct;
@end

