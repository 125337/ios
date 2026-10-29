@interface MJShootComposingTemplateItemCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    BOOL _lightStyle; // +0x9
    MJShootComposingAdaptiveBlurView * _blurView; // +0x10
    UILabel * _versionLabel; // +0x18
    MMUIImageView * _staticIconImageView; // +0x20
    MMWebImageView * _webIconImageView; // +0x28
    MMCameraTemplateItem * _item; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setupUIImageView:(id)arg1;
- (void)configCellWithItem:(id)arg1 isLightStyle:(BOOL)arg2;
- (void)updateBackgroundBlurLightStyle:(BOOL)arg1;
- (void)setIsCellSelected:(BOOL)arg1;
- (void)updateAccessibility;
- (unsigned long long)accessibilityTraits;
- (BOOL)isCellSelected;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)versionLabel;
- (void)setVersionLabel:(id)arg1;
- (id)staticIconImageView;
- (void)setStaticIconImageView:(id)arg1;
- (id)webIconImageView;
- (void)setWebIconImageView:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (BOOL)isLightStyle;
- (void)setLightStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
