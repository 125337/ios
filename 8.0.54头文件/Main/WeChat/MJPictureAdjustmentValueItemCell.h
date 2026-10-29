@interface MJPictureAdjustmentValueItemCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    NSString * _iconName; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _valueLabel; // +0x20
    MMWebImageView * _iconImageView; // +0x28
    UIView * _iconContentView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)configCellWithItem:(id)arg1;
- (void)setIsCellSelected:(BOOL)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)iconContentView;
- (void)setIconContentView:(id)arg1;
- (BOOL)isCellSelected;
- (void).cxx_destruct;
@end

