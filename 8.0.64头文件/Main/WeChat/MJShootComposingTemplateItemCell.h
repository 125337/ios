@interface MJShootComposingTemplateItemCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    UILabel * _versionLabel; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    MMCameraTemplateItem * _item; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)configCellWithItem:(id)arg1;
- (void)setIsCellSelected:(BOOL)arg1;
- (void)updateAccessibility;
- (unsigned long long)accessibilityTraits;
- (id)genAccessibilityLabel;
- (BOOL)isCellSelected;
- (id)versionLabel;
- (void)setVersionLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
