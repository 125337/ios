@interface MJShootComposingTemplateItemCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    UILabel * _versionLabel; // +0x10
    MMWebImageView * _iconImageView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)configCellWithItem:(id)arg1;
- (BOOL)isCellSelected;
- (void)setIsCellSelected:(BOOL)arg1;
- (id)versionLabel;
- (void)setVersionLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (void).cxx_destruct;
@end

